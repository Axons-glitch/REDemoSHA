#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	REDemoSHA::MyForm form;
	Application::Run(% form);
	const char* dir = ".\\Base\\Password.db";
	sqlite3* DB;
	createDB(dir);
	createTable(dir);

}