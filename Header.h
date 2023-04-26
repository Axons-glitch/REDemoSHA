#pragma once
#include<iostream>
#include <chrono>
#include <stdio.h>
#include <string>
#include <sqlite3.h>
#include <omp.h>

#pragma comment(lib, "bcrypt.lib")
#include <Windows.h>

#include <algorithm>
#include <vector>
#include<iostream>
#include <sstream>
#include <random>

static int createDB(const char* s);
static int createTable(const char* s);
int insert(std::string _pass, std::string _user, std::string _salt, std::string _salt2);
std::string find_e(std::string col, std::string _name);
static int callback(void* NotUsed, int argc, char** argv, char** azColname);
static int calllback(void* NotUsed, int argc, char** argv, char** azColName);
const char* dir = ".\\Base\\Password.db";


static int createDB(const char* s)
{
	sqlite3* DB;
	int exit = 0;

	exit = sqlite3_open(s, &DB);

	sqlite3_close(DB);

	return 0;
}

static int createTable(const char* s)
{
	sqlite3* DB;
	std::string sql = "CREATE TABLE IF NOT EXISTS passwords ("
		"ID	INTEGER PRIMARY KEY AUTOINCREMENT, "
		"username TEXT NOT NULL, "
		"password TEXT NOT NULL, "
		"salt CHAR(100), "
		"salt2 CHAR(100));";

	try
	{
		int exit = 0;
		exit = sqlite3_open(s, &DB);

		char* messageError;
		exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);

		if (exit != SQLITE_OK) {
			std::cerr << "Error Create Table" << std::endl;
			sqlite3_free(messageError);

		}
		else

			sqlite3_close(DB);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}

	return 0;
}

std::string quotesql(const std::string& s) {
	return std::string("'") + s + std::string("'");
}

static int calllback(void* NotUsed, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

int insert(std::string _pass, std::string _user, std::string _salt, std::string _salt2) {
	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	std::string str;


	/* Open database */
	rc = sqlite3_open(".\\Base\\Password.db", &db);

	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return(0);
	}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}

	/* Create SQL statement */
	str = "INSERT INTO passwords (password, username, salt, salt2)"  \
		"VALUES (" + quotesql(_pass) + ", " + quotesql(_user) + ", " + quotesql(_salt) + ", " + quotesql(_salt2) + "); ";

	std::string sql(str.c_str());

	/* Execute SQL statement */
	rc = sqlite3_exec(db, sql.c_str(), calllback, 0, &zErrMsg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Records created successfully\n");
	}
	sqlite3_close(db);

	return 0;
}

int update_pass(std::string _pass, std::string _name)
{
	bool found = false;
	std::string str;

	sqlite3* db;
	char* zErrMsg = 0;
	int rc;

	/* Open database */
	rc = sqlite3_open(".\\Base\\Password.db", &db);

	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return(0);
	}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}

	/* Create SQL statement */

	str = "UPDATE passwords SET password = " + quotesql(_pass) + " WHERE username = " + quotesql(_name) + "; ";

	std::string sql(str.c_str());

	//Execute SQL statement 

	//sqlite3_open(".\\Base\\Password.db", &db);
	rc = sqlite3_exec(db, sql.c_str(), calllback, 0, &zErrMsg);
	std::cout << "Check sql statement exec" << std::endl;
	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Records created successfully\n");
	}
	sqlite3_close(db);

	return 0;
}

std::string find_e(std::string col, std::string _name)
{
	bool found = false;
	sqlite3* DB;
	sqlite3_stmt* stmt;
	std::stringstream ss;
	std::string sResult;

	// create sql statement string
	if (_name != "") {
		ss << "SELECT " << col << " FROM passwords WHERE username = " << quotesql(_name) << " ;";
	}
	else { printf("ERROR: invalid username "); }

	std::string sql(ss.str());

	if (sqlite3_open(".\\Base\\Password.db", &DB) != SQLITE_OK) {
		printf("ERROR: can't open database: %s\n", sqlite3_errmsg(DB));
		sqlite3_close(DB);
	}

	if (sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, NULL) != SQLITE_OK) {
		printf("ERROR: while compiling sql: %s\n", sqlite3_errmsg(DB));
		sqlite3_finalize(stmt);
		sqlite3_close(DB);
		
	}

	// execute sql statement
	int ret_code = 0;
	while ((ret_code = sqlite3_step(stmt)) == SQLITE_ROW) {
		const unsigned char* result;
		result = sqlite3_column_text(stmt, 0);
		std::string sResult(reinterpret_cast<const char*>(result));
		found = true;
		return sResult;
	}
	if (ret_code != SQLITE_DONE) {
		printf("ERROR: while performing sql: %s\n", sqlite3_errmsg(DB));
		printf("ret_code = %d\n", ret_code);
	}

	sqlite3_finalize(stmt);
	sqlite3_close(DB);

	return sResult;
}

static int callback(void* NotUsed, int argc, char** argv, char** azColname)
{
	for (int i = 0; i < argc; i++)
	{

		std::cout << azColname[i] << ": " << argv[i] << std::endl;
	}

	return 0;
}

std::string saltgen()
{
	using namespace std::chrono;
	nanoseconds ns = duration_cast<nanoseconds>(system_clock::now().time_since_epoch());

	std::string alphanum;
	alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string tmp_s;


	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, 61); // define the range

	for (int i = 0; i < 61; ++i) {
		tmp_s += alphanum[distr(gen)];
	}

	std::string saltt = tmp_s + std::to_string(ns.count());
	saltt.pop_back();
	saltt.pop_back();


	return saltt;
}

std::string hash(std::string passwords, std::string selt)
{
	NTSTATUS Status;
	BYTE DerivedKey[64];

	BCRYPT_ALG_HANDLE handle;
	Status = BCryptOpenAlgorithmProvider(&handle, BCRYPT_SHA512_ALGORITHM, NULL, BCRYPT_ALG_HANDLE_HMAC_FLAG);

	if (Status != 0)
	{
		std::cout << "BCryptOpenAlgorithmProvider exited with error message " << Status;

	}

	Status = BCryptDeriveKeyPBKDF2(handle, (UCHAR*)passwords.data(), passwords.length(), (UCHAR*)selt.data(), selt.length(), 8192, DerivedKey, 64, 0);

	if (Status != 0)
	{
		std::cout << "BCryptDeriveKeyPBKDF2 exited with error message " << Status;

	}

	BCryptCloseAlgorithmProvider(handle, 0);

	std::string out;
	char val[4];

	for (int i = 0; i < 64; i++) {
		snprintf(val, 4, "%02x", DerivedKey[i]);
		out.append(val);
	}

	return out;
}

std::string shash(std::string _text, std::string _selt, std::string _selt2)
{

	std::string alpha = "abcdefghijklmnopqrstuvwxyz";
	std::string longpep = "FawaQsyK1d00lnHCN5SlNWw9lCI5AAWUuHv4fQphzWIgDmq4ysdm5aMq74zGU16493696502915256";
	_text = _text + longpep;

	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, 25); // define the range

	std::string ps = hash(_text, _selt);
	ps += alpha[distr(gen)];
	ps = hash(ps, _selt2);

	return ps;
}

bool backhash(std::string _text, std::string _selt, std::string _selt2, std::string _passs, std::string _user)
{
	bool out = false;

	char s[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, 25); // define the range
	std::shuffle(std::begin(s), std::end(s), gen);
	std::string longpep = "FawaQsyK1d00lnHCN5SlNWw9lCI5AAWUuHv4fQphzWIgDmq4ysdm5aMq74zGU16493696502915256";
	_text = _text + longpep;

	int i;
	std::string ps;
	std::string ps1;

	auto start = std::chrono::steady_clock::now();

	//parallel hash veryfi execution
#pragma omp parallel for default(none) private(i,ps,ps1) firstprivate(_text,_selt,_selt2,_passs,s) shared(out)
	for (i = 0; i < 26; i++)
	{
		SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
		ps = hash(_text, _selt);
		ps += s[i];
		ps1 = hash(ps, _selt2);

		//logic gate
		if (ps1 == _passs) {
			out = true;
			//std::cout << "Out is: TRUE" << std::endl;
			break;
		}
	}
	//Timing atack security
	std::shuffle(std::begin(s), std::end(s), gen);
	for (i = 1; i < 26; i++)
	{
		s[i] = '1';
	}

	auto end = std::chrono::steady_clock::now();

	double elapsed_time = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end - start).count());

	std::cout << "Elapsed time ms : " << elapsed_time / 1e6 << std::endl;
	//std::cout << "All is: Good" << std::endl;

	return out;
}

void war(System::Windows::Forms::Label^ aLabel)
{
	SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
	aLabel->Text = "Ivnalid username or password";
}

bool ifForbiddenChar(std::string* s)
{
	std::string::iterator it;

	bool outA = true;

	std::string illegalChars = "\\/:?\"<>|";
	for (it = s->begin(); it < s->end(); ++it)
	{
		bool found = illegalChars.find(*it) != std::string::npos;
		if (found) {
			bool outA = false;
		}
	}

	return outA;
}
