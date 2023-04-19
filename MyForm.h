#pragma once
#include <string>
#include "Header.h"

#include <msclr\marshal_cppstd.h>






namespace REDemoSHA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pnlSign->Hide();
			pnlIn->Hide();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ pnlSign;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Panel^ pnlIn;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;













	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pnlSign = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pnlIn = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlSign->SuspendLayout();
			this->pnlIn->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(53, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Rubik", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(57, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 23);
			this->textBox1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(53, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(57, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(245, 23);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Navy;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(57, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Navy;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(164, 273);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 45);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(122, 328);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Sign in";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Rubik", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(57, 178);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(238, 19);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"I agree to the terms and conditions";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// pnlSign
			// 
			this->pnlSign->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlSign->Controls->Add(this->label4);
			this->pnlSign->Controls->Add(this->pnlIn);
			this->pnlSign->Controls->Add(this->label9);
			this->pnlSign->Controls->Add(this->label6);
			this->pnlSign->Controls->Add(this->button3);
			this->pnlSign->Controls->Add(this->button4);
			this->pnlSign->Controls->Add(this->textBox3);
			this->pnlSign->Controls->Add(this->label7);
			this->pnlSign->Controls->Add(this->textBox4);
			this->pnlSign->Controls->Add(this->label8);
			this->pnlSign->Controls->Add(this->checkBox2);
			this->pnlSign->Controls->Add(this->textBox5);
			this->pnlSign->Cursor = System::Windows::Forms::Cursors::Default;
			this->pnlSign->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlSign->Location = System::Drawing::Point(0, 0);
			this->pnlSign->Name = L"pnlSign";
			this->pnlSign->Size = System::Drawing::Size(522, 419);
			this->pnlSign->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(64, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 19);
			this->label4->TabIndex = 20;
			// 
			// pnlIn
			// 
			this->pnlIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlIn->Controls->Add(this->button5);
			this->pnlIn->Controls->Add(this->label11);
			this->pnlIn->Cursor = System::Windows::Forms::Cursors::Default;
			this->pnlIn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlIn->Location = System::Drawing::Point(0, 0);
			this->pnlIn->Name = L"pnlIn";
			this->pnlIn->Size = System::Drawing::Size(522, 419);
			this->pnlIn->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Crimson;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Rubik", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(205, 265);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 43);
			this->button5->TabIndex = 1;
			this->button5->Text = L"OUT";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Rubik", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(217, 40);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 76);
			this->label11->TabIndex = 0;
			this->label11->Text = L"IN";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(54, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(136, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Log in";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Navy;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(164, 308);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 45);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Navy;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(58, 308);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 45);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Submit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(57, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(245, 23);
			this->textBox3->TabIndex = 1;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(54, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Password";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(57, 68);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(245, 23);
			this->textBox4->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(53, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 25);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Username";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Rubik", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(58, 240);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(238, 19);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"I agree to the terms and conditions";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(57, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(245, 23);
			this->textBox5->TabIndex = 2;
			this->textBox5->UseSystemPasswordChar = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Cursor = System::Windows::Forms::Cursors::Default;
			this->label10->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(61, 241);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 19);
			this->label10->TabIndex = 10;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(522, 419);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pnlSign);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Rubik", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Name = L"MyForm";
			this->Text = L"SHA";
			this->pnlSign->ResumeLayout(false);
			this->pnlSign->PerformLayout();
			this->pnlIn->ResumeLayout(false);
			this->pnlIn->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		label10->Text = "";
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		label4->Text = "";
	}

	void submit() {

		String^ userSystem = textBox1->Text;
		String^ textSystem = textBox2->Text;
		textBox1->Text = "";
		textBox2->Text = "";
		label10->Text = "";

		msclr::interop::marshal_context context;
		std::string user = context.marshal_as<std::string>(userSystem);
		std::string text = context.marshal_as<std::string>(textSystem);
		std::string salt;
		std::string salt2;
		std::string pas_;


		this->timer1->Interval = 3000;
		this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);


		salt = find_e("salt", user);

		std::cout << "Salt found: " << salt << std::endl;

		if (salt != "") {

			salt2 = find_e("salt2", user);
			std::cout << "Salt2 found: " << salt2 << std::endl;
			pas_ = find_e("password", user);
			std::cout << "Hash found: " << pas_ << std::endl;

			bool tmp = false;

			tmp = backhash(text, salt, salt2, pas_, user);

			//std::cout << "tmp finished: " << std::endl;

			if (tmp != false) {
				//std::cout << "tmp in loop: " << std::endl;
				pnlSign->Show();
				pnlIn->Show();
			}
			else {
				war(label10);
				label10->Update();
				std::cout << "Exeption found: Ivnalid password1" << std::endl;
				timer1->Start();
				std::cout << "Exeption found: Ivnalid password" << std::endl;

			}
		}
		else {
			war(label10);
			label10->Update();
			std::cout << "Exeption found: Ivnalid password1" << std::endl;
			timer1->Start();
			std::cout << "Exeption found: Ivnalid username" << std::endl;

		}
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if (checkBox1->Checked){
			button1->Enabled = true;
		}
		else
			button1->Enabled = false;

	}

	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			submit();
		}
			
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		submit();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}


	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlSign->Show();
	}


	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlSign->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox3->Text == textBox5->Text && textBox5->Text != "") {

			UTF8Encoding^ utf8 = gcnew UTF8Encoding;
			const char* dir = ".\\Base\\Password.db";

			this->timer2->Interval = 3000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);

			String^ usernameSystem = textBox4->Text;
			String^ passwordSystem = textBox3->Text;
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";

			std::string passwordHash;
			std::string username;
			std::string password;
			std::string salt;
			std::string salt2;

			msclr::interop::marshal_context context;
			username = context.marshal_as<std::string>(usernameSystem);
			passwordHash = context.marshal_as<std::string>(passwordSystem);

			if (ifForbiddenChar(&username) && ifForbiddenChar(&passwordHash)) {

				salt = saltgen();
				salt2 = saltgen();

				password = shash(passwordHash, salt, salt2);


				std::cout << "Password: " << password << std::endl;
				std::cout << "Username: " << username << std::endl;
				std::cout << "Salt: " << salt.c_str() << std::endl;
				std::cout << "Salt2: " << salt2.c_str() << std::endl;

				insert(password, username, salt, salt2);
				pnlSign->Hide();
			}
			else {
				war(label4);
				label4->Update();
				std::cout << "Exeption found: Ivnalid password1" << std::endl;
				timer2->Start();
				std::cout << "Exeption found: Ivnalid username" << std::endl;
			}
		}
		else {
			war(label4);
			label4->Update();
			std::cout << "Exeption found: Ivnalid password1" << std::endl;
			timer2->Start();
			std::cout << "Exeption found: Ivnalid username" << std::endl;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked) {
			button4->Enabled = true;
		}
		else { button4->Enabled = false; }

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlIn->Hide();
		pnlSign->Hide();
	}


	};
}
