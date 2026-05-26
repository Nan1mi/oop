#pragma once

#using <mscorlib.dll>
#include "MyForm1.h"

namespace LAB10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);

			this->label3->Click += gcnew System::EventHandler(this, &MyForm::SelectColor);
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::SelectColor);
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::SelectColor);
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::SelectColor);
			this->label28->Click += gcnew System::EventHandler(this, &MyForm::SelectColor);

			this->textBox3->DoubleClick += gcnew System::EventHandler(this, &MyForm::textBox3_DoubleClick);
			this->textBox3->Text = "Двічі клікніть...";
		}

	protected:
		~MyForm() { if (components) { delete components; } }

	private: String^ SavedFilePath;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown12;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown16;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown17;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown18;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label22 = (gcnew System::Windows::Forms::Label());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->label23 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label20 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label21 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label19 = (gcnew System::Windows::Forms::Label());
			   this->label18 = (gcnew System::Windows::Forms::Label());
			   this->label17 = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			   this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			   this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label24 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label25 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			   this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label28 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label29 = (gcnew System::Windows::Forms::Label());
			   this->label27 = (gcnew System::Windows::Forms::Label());
			   this->label30 = (gcnew System::Windows::Forms::Label());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label26 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->groupBox1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   this->groupBox2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			   this->groupBox3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			   this->groupBox4->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			   this->groupBox5->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox1->Controls->Add(this->numericUpDown2);
			   this->groupBox1->Controls->Add(this->numericUpDown1);
			   this->groupBox1->Controls->Add(this->label6);
			   this->groupBox1->Controls->Add(this->label5);
			   this->groupBox1->Controls->Add(this->label4);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->textBox2);
			   this->groupBox1->Controls->Add(this->textBox1);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Location = System::Drawing::Point(12, 23);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(533, 94);
			   this->groupBox1->TabIndex = 0;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Загальні параметри Web-сторінки";
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->Location = System::Drawing::Point(393, 59);
			   this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown2->TabIndex = 10;
			   this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 600, 0, 0, 0 });
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->Location = System::Drawing::Point(393, 26);
			   this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown1->TabIndex = 9;
			   this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 800, 0, 0, 0 });
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(338, 62);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(43, 13);
			   this->label6->TabIndex = 7;
			   this->label6->Text = L"Висота";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(338, 29);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(49, 13);
			   this->label5->TabIndex = 6;
			   this->label5->Text = L"Ширина ";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->label4->ForeColor = System::Drawing::Color::Black;
			   this->label4->Location = System::Drawing::Point(210, 61);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(102, 13);
			   this->label4->TabIndex = 5;
			   this->label4->Text = L"Колір тексту (Click)";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->label3->ForeColor = System::Drawing::Color::Black;
			   this->label3->Location = System::Drawing::Point(210, 28);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(108, 13);
			   this->label3->TabIndex = 4;
			   this->label3->Text = L"Фон сторінки (Click)";
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(76, 58);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(100, 20);
			   this->textBox2->TabIndex = 3;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(100, 25);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(100, 20);
			   this->textBox1->TabIndex = 2;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(9, 61);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(61, 13);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Заголовок";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(9, 25);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(85, 13);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Назва сторінки";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(8, 28);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(43, 13);
			   this->label7->TabIndex = 8;
			   this->label7->Text = L"Рядків ";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox2->Controls->Add(this->numericUpDown13);
			   this->groupBox2->Controls->Add(this->numericUpDown11);
			   this->groupBox2->Controls->Add(this->numericUpDown14);
			   this->groupBox2->Controls->Add(this->label22);
			   this->groupBox2->Controls->Add(this->textBox4);
			   this->groupBox2->Controls->Add(this->label23);
			   this->groupBox2->Controls->Add(this->numericUpDown12);
			   this->groupBox2->Controls->Add(this->label20);
			   this->groupBox2->Controls->Add(this->numericUpDown10);
			   this->groupBox2->Controls->Add(this->label21);
			   this->groupBox2->Controls->Add(this->comboBox1);
			   this->groupBox2->Controls->Add(this->label19);
			   this->groupBox2->Controls->Add(this->label18);
			   this->groupBox2->Controls->Add(this->label17);
			   this->groupBox2->Controls->Add(this->label16);
			   this->groupBox2->Location = System::Drawing::Point(12, 123);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(533, 151);
			   this->groupBox2->TabIndex = 9;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Текстовий блок";
			   // 
			   // numericUpDown13
			   // 
			   this->numericUpDown13->Location = System::Drawing::Point(277, 118);
			   this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown13->Name = L"numericUpDown13";
			   this->numericUpDown13->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown13->TabIndex = 14;
			   this->numericUpDown13->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			   // 
			   // numericUpDown11
			   // 
			   this->numericUpDown11->Location = System::Drawing::Point(277, 55);
			   this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown11->Name = L"numericUpDown11";
			   this->numericUpDown11->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown11->TabIndex = 21;
			   this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			   // 
			   // numericUpDown14
			   // 
			   this->numericUpDown14->Location = System::Drawing::Point(277, 85);
			   this->numericUpDown14->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown14->Name = L"numericUpDown14";
			   this->numericUpDown14->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown14->TabIndex = 13;
			   this->numericUpDown14->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			   // 
			   // label22
			   // 
			   this->label22->AutoSize = true;
			   this->label22->Location = System::Drawing::Point(222, 121);
			   this->label22->Name = L"label22";
			   this->label22->Size = System::Drawing::Size(43, 13);
			   this->label22->TabIndex = 12;
			   this->label22->Text = L"Висота";
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(53, 27);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(120, 20);
			   this->textBox4->TabIndex = 11;
			   this->textBox4->Text = L"Привіт, світ!";
			   // 
			   // label23
			   // 
			   this->label23->AutoSize = true;
			   this->label23->Location = System::Drawing::Point(222, 88);
			   this->label23->Name = L"label23";
			   this->label23->Size = System::Drawing::Size(49, 13);
			   this->label23->TabIndex = 11;
			   this->label23->Text = L"Ширина ";
			   // 
			   // numericUpDown12
			   // 
			   this->numericUpDown12->Location = System::Drawing::Point(277, 27);
			   this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown12->Name = L"numericUpDown12";
			   this->numericUpDown12->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown12->TabIndex = 20;
			   this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			   // 
			   // label20
			   // 
			   this->label20->AutoSize = true;
			   this->label20->Location = System::Drawing::Point(231, 58);
			   this->label20->Name = L"label20";
			   this->label20->Size = System::Drawing::Size(40, 13);
			   this->label20->TabIndex = 19;
			   this->label20->Text = L"Поз. Y";
			   // 
			   // numericUpDown10
			   // 
			   this->numericUpDown10->Location = System::Drawing::Point(53, 83);
			   this->numericUpDown10->Name = L"numericUpDown10";
			   this->numericUpDown10->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown10->TabIndex = 11;
			   this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 14, 0, 0, 0 });
			   // 
			   // label21
			   // 
			   this->label21->AutoSize = true;
			   this->label21->Location = System::Drawing::Point(231, 29);
			   this->label21->Name = L"label21";
			   this->label21->Size = System::Drawing::Size(40, 13);
			   this->label21->TabIndex = 18;
			   this->label21->Text = L"Поз. X";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Arial", L"Times New Roman", L"Verdana" });
			   this->comboBox1->Location = System::Drawing::Point(53, 53);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(121, 21);
			   this->comboBox1->TabIndex = 4;
			   this->comboBox1->Text = L"Arial";
			   // 
			   // label19
			   // 
			   this->label19->AutoSize = true;
			   this->label19->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->label19->Location = System::Drawing::Point(11, 112);
			   this->label19->Name = L"label19";
			   this->label19->Size = System::Drawing::Size(66, 13);
			   this->label19->TabIndex = 3;
			   this->label19->Text = L"Колір (Click)";
			   // 
			   // label18
			   // 
			   this->label18->AutoSize = true;
			   this->label18->Location = System::Drawing::Point(8, 85);
			   this->label18->Name = L"label18";
			   this->label18->Size = System::Drawing::Size(45, 13);
			   this->label18->TabIndex = 2;
			   this->label18->Text = L"Розмір ";
			   // 
			   // label17
			   // 
			   this->label17->AutoSize = true;
			   this->label17->Location = System::Drawing::Point(8, 56);
			   this->label17->Name = L"label17";
			   this->label17->Size = System::Drawing::Size(44, 13);
			   this->label17->TabIndex = 1;
			   this->label17->Text = L"Шрифт ";
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->Location = System::Drawing::Point(8, 30);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(40, 13);
			   this->label16->TabIndex = 0;
			   this->label16->Text = L"Текст ";
			   // 
			   // groupBox3
			   // 
			   this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox3->Controls->Add(this->numericUpDown7);
			   this->groupBox3->Controls->Add(this->label7);
			   this->groupBox3->Controls->Add(this->numericUpDown6);
			   this->groupBox3->Controls->Add(this->label8);
			   this->groupBox3->Controls->Add(this->label12);
			   this->groupBox3->Controls->Add(this->label9);
			   this->groupBox3->Controls->Add(this->label11);
			   this->groupBox3->Controls->Add(this->label10);
			   this->groupBox3->Controls->Add(this->numericUpDown3);
			   this->groupBox3->Controls->Add(this->numericUpDown5);
			   this->groupBox3->Controls->Add(this->numericUpDown4);
			   this->groupBox3->Location = System::Drawing::Point(12, 280);
			   this->groupBox3->Name = L"groupBox3";
			   this->groupBox3->Size = System::Drawing::Size(533, 135);
			   this->groupBox3->TabIndex = 10;
			   this->groupBox3->TabStop = false;
			   this->groupBox3->Text = L"Таблиця ";
			   // 
			   // numericUpDown7
			   // 
			   this->numericUpDown7->Location = System::Drawing::Point(265, 53);
			   this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown7->Name = L"numericUpDown7";
			   this->numericUpDown7->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown7->TabIndex = 17;
			   this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			   // 
			   // numericUpDown6
			   // 
			   this->numericUpDown6->Location = System::Drawing::Point(265, 25);
			   this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown6->Name = L"numericUpDown6";
			   this->numericUpDown6->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown6->TabIndex = 16;
			   this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(7, 55);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(54, 13);
			   this->label8->TabIndex = 9;
			   this->label8->Text = L"Стовпців ";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(219, 56);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(40, 13);
			   this->label12->TabIndex = 15;
			   this->label12->Text = L"Поз. Y";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(7, 82);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(56, 13);
			   this->label9->TabIndex = 10;
			   this->label9->Text = L"Товщина ";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(219, 27);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(40, 13);
			   this->label11->TabIndex = 14;
			   this->label11->Text = L"Поз. X";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->label10->Location = System::Drawing::Point(7, 110);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(91, 13);
			   this->label10->TabIndex = 11;
			   this->label10->Text = L"Колір ліній (Click)";
			   // 
			   // numericUpDown3
			   // 
			   this->numericUpDown3->Location = System::Drawing::Point(110, 26);
			   this->numericUpDown3->Name = L"numericUpDown3";
			   this->numericUpDown3->Size = System::Drawing::Size(77, 20);
			   this->numericUpDown3->TabIndex = 11;
			   // 
			   // numericUpDown5
			   // 
			   this->numericUpDown5->Location = System::Drawing::Point(110, 80);
			   this->numericUpDown5->Name = L"numericUpDown5";
			   this->numericUpDown5->Size = System::Drawing::Size(77, 20);
			   this->numericUpDown5->TabIndex = 13;
			   // 
			   // numericUpDown4
			   // 
			   this->numericUpDown4->Location = System::Drawing::Point(110, 54);
			   this->numericUpDown4->Name = L"numericUpDown4";
			   this->numericUpDown4->Size = System::Drawing::Size(77, 20);
			   this->numericUpDown4->TabIndex = 12;
			   // 
			   // groupBox4
			   // 
			   this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox4->Controls->Add(this->numericUpDown15);
			   this->groupBox4->Controls->Add(this->numericUpDown8);
			   this->groupBox4->Controls->Add(this->numericUpDown16);
			   this->groupBox4->Controls->Add(this->label24);
			   this->groupBox4->Controls->Add(this->textBox3);
			   this->groupBox4->Controls->Add(this->label25);
			   this->groupBox4->Controls->Add(this->numericUpDown9);
			   this->groupBox4->Controls->Add(this->label13);
			   this->groupBox4->Controls->Add(this->label14);
			   this->groupBox4->Controls->Add(this->label15);
			   this->groupBox4->Location = System::Drawing::Point(12, 421);
			   this->groupBox4->Name = L"groupBox4";
			   this->groupBox4->Size = System::Drawing::Size(533, 100);
			   this->groupBox4->TabIndex = 11;
			   this->groupBox4->TabStop = false;
			   this->groupBox4->Text = L"Зображення ";
			   // 
			   // numericUpDown15
			   // 
			   this->numericUpDown15->Location = System::Drawing::Point(265, 74);
			   this->numericUpDown15->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown15->Name = L"numericUpDown15";
			   this->numericUpDown15->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown15->TabIndex = 25;
			   this->numericUpDown15->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   // 
			   // numericUpDown8
			   // 
			   this->numericUpDown8->Location = System::Drawing::Point(54, 45);
			   this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown8->Name = L"numericUpDown8";
			   this->numericUpDown8->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown8->TabIndex = 18;
			   this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			   // 
			   // numericUpDown16
			   // 
			   this->numericUpDown16->Location = System::Drawing::Point(265, 41);
			   this->numericUpDown16->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown16->Name = L"numericUpDown16";
			   this->numericUpDown16->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown16->TabIndex = 24;
			   this->numericUpDown16->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   // 
			   // label24
			   // 
			   this->label24->AutoSize = true;
			   this->label24->Location = System::Drawing::Point(210, 77);
			   this->label24->Name = L"label24";
			   this->label24->Size = System::Drawing::Size(43, 13);
			   this->label24->TabIndex = 23;
			   this->label24->Text = L"Висота";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->textBox3->Location = System::Drawing::Point(53, 19);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(130, 20);
			   this->textBox3->TabIndex = 1;
			   // 
			   // label25
			   // 
			   this->label25->AutoSize = true;
			   this->label25->Location = System::Drawing::Point(210, 44);
			   this->label25->Name = L"label25";
			   this->label25->Size = System::Drawing::Size(49, 13);
			   this->label25->TabIndex = 22;
			   this->label25->Text = L"Ширина ";
			   // 
			   // numericUpDown9
			   // 
			   this->numericUpDown9->Location = System::Drawing::Point(54, 75);
			   this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown9->Name = L"numericUpDown9";
			   this->numericUpDown9->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown9->TabIndex = 19;
			   this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(8, 22);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(39, 13);
			   this->label13->TabIndex = 0;
			   this->label13->Text = L"Файл ";
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Location = System::Drawing::Point(8, 77);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(40, 13);
			   this->label14->TabIndex = 19;
			   this->label14->Text = L"Поз. Y";
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Location = System::Drawing::Point(8, 48);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(40, 13);
			   this->label15->TabIndex = 18;
			   this->label15->Text = L"Поз. X";
			   // 
			   // groupBox5
			   // 
			   this->groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox5->Controls->Add(this->numericUpDown17);
			   this->groupBox5->Controls->Add(this->label28);
			   this->groupBox5->Controls->Add(this->numericUpDown18);
			   this->groupBox5->Controls->Add(this->label29);
			   this->groupBox5->Controls->Add(this->label27);
			   this->groupBox5->Controls->Add(this->label30);
			   this->groupBox5->Controls->Add(this->textBox6);
			   this->groupBox5->Controls->Add(this->textBox5);
			   this->groupBox5->Controls->Add(this->label26);
			   this->groupBox5->Location = System::Drawing::Point(12, 527);
			   this->groupBox5->Name = L"groupBox5";
			   this->groupBox5->Size = System::Drawing::Size(533, 114);
			   this->groupBox5->TabIndex = 12;
			   this->groupBox5->TabStop = false;
			   this->groupBox5->Text = L"Гіперпосилання  ";
			   // 
			   // numericUpDown17
			   // 
			   this->numericUpDown17->Location = System::Drawing::Point(265, 54);
			   this->numericUpDown17->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown17->Name = L"numericUpDown17";
			   this->numericUpDown17->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown17->TabIndex = 21;
			   this->numericUpDown17->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			   // 
			   // label28
			   // 
			   this->label28->AutoSize = true;
			   this->label28->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->label28->Location = System::Drawing::Point(11, 89);
			   this->label28->Name = L"label28";
			   this->label28->Size = System::Drawing::Size(66, 13);
			   this->label28->TabIndex = 18;
			   this->label28->Text = L"Колір (Click)";
			   // 
			   // numericUpDown18
			   // 
			   this->numericUpDown18->Location = System::Drawing::Point(265, 26);
			   this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			   this->numericUpDown18->Name = L"numericUpDown18";
			   this->numericUpDown18->Size = System::Drawing::Size(120, 20);
			   this->numericUpDown18->TabIndex = 20;
			   this->numericUpDown18->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			   // 
			   // label29
			   // 
			   this->label29->AutoSize = true;
			   this->label29->Location = System::Drawing::Point(219, 57);
			   this->label29->Name = L"label29";
			   this->label29->Size = System::Drawing::Size(40, 13);
			   this->label29->TabIndex = 19;
			   this->label29->Text = L"Поз. Y";
			   // 
			   // label27
			   // 
			   this->label27->AutoSize = true;
			   this->label27->Location = System::Drawing::Point(9, 58);
			   this->label27->Name = L"label27";
			   this->label27->Size = System::Drawing::Size(32, 13);
			   this->label27->TabIndex = 17;
			   this->label27->Text = L"URL ";
			   // 
			   // label30
			   // 
			   this->label30->AutoSize = true;
			   this->label30->Location = System::Drawing::Point(219, 28);
			   this->label30->Name = L"label30";
			   this->label30->Size = System::Drawing::Size(40, 13);
			   this->label30->TabIndex = 18;
			   this->label30->Text = L"Поз. X";
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(53, 55);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(120, 20);
			   this->textBox6->TabIndex = 16;
			   this->textBox6->Text = L"https://google.com";
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(53, 26);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(120, 20);
			   this->textBox5->TabIndex = 14;
			   this->textBox5->Text = L"Моє посилання";
			   // 
			   // label26
			   // 
			   this->label26->AutoSize = true;
			   this->label26->Location = System::Drawing::Point(8, 29);
			   this->label26->Name = L"label26";
			   this->label26->Size = System::Drawing::Size(40, 13);
			   this->label26->TabIndex = 13;
			   this->label26->Text = L"Текст ";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(12, 647);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(245, 48);
			   this->button1->TabIndex = 13;
			   this->button1->Text = L"Створити";
			   this->button1->UseVisualStyleBackColor = false;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->button2->ForeColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(300, 647);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(245, 48);
			   this->button2->TabIndex = 14;
			   this->button2->Text = L"Перегляд";
			   this->button2->UseVisualStyleBackColor = false;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->ClientSize = System::Drawing::Size(555, 707);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->groupBox5);
			   this->Controls->Add(this->groupBox4);
			   this->Controls->Add(this->groupBox3);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Name = L"MyForm";
			   this->Text = L"Генератор Web-сторінок";
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			   this->groupBox3->ResumeLayout(false);
			   this->groupBox3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			   this->groupBox4->ResumeLayout(false);
			   this->groupBox4->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			   this->groupBox5->ResumeLayout(false);
			   this->groupBox5->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private: System::Void SelectColor(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	};

	public ref class HtmlElement abstract {
	public:
		int X, Y, Width, Height;
		virtual String^ GenerateHtml() abstract;
		virtual void ParseFromHtml(String^ html) abstract;
	protected:
		static int ParseInt(String^ html, String^ pattern) {
			Match^ m = Regex::Match(html, pattern);
			if (m->Success) { int v = 0; Int32::TryParse(m->Groups[1]->Value, v); return v; }
			return 0;
		}
		static String^ ParseStr(String^ html, String^ pattern) {
			Match^ m = Regex::Match(html, pattern);
			if (m->Success) return m->Groups[1]->Value->Trim();
			return "";
		}
	};

	public ref class HtmlText : public HtmlElement {
	public:
		String^ Text; String^ FontName; int FontSize; String^ HexColor;

		virtual String^ GenerateHtml() override {
			return String::Format(
				"<div style='position:absolute; left:{0}px; top:{1}px; "
				"width:{2}px; height:{3}px; font-family:{4}; font-size:{5}px; color:{6};'>{7}</div>",
				X, Y, Width, Height, FontName, FontSize, HexColor, Text);
		}
		virtual void ParseFromHtml(String^ html) override {
			X = ParseInt(html, L"left:(\\d+)px");
			Y = ParseInt(html, L"top:(\\d+)px");
			Width = ParseInt(html, L"width:(\\d+)px");
			Height = ParseInt(html, L"height:(\\d+)px");
			FontSize = ParseInt(html, L"font-size:(\\d+)px");
			FontName = ParseStr(html, L"font-family:([^;]+);");
			HexColor = ParseStr(html, L"color:([^;'\"]+)[;'\"]");
			Match^ m = Regex::Match(html, L">([^<]+)</div>");
			if (m->Success) Text = m->Groups[1]->Value;
		}
	};

	public ref class HtmlTable : public HtmlElement {
	public:
		int Rows, Cols, Border; String^ BorderColor;

		virtual String^ GenerateHtml() override {
			String^ t = String::Format(
				"<table border='{0}' style='position:absolute; left:{1}px; top:{2}px; border-color:{3};'>\n",
				Border, X, Y, BorderColor);
			for (int r = 0; r < Rows; r++) {
				t += "  <tr>\n";
				for (int c = 0; c < Cols; c++)
					t += "    <td style='width:50px; height:20px;'>Текст</td>\n";
				t += "  </tr>\n";
			}
			return t + "</table>";
		}
		virtual void ParseFromHtml(String^ html) override {
			X = ParseInt(html, L"left:(\\d+)px");
			Y = ParseInt(html, L"top:(\\d+)px");
			Border = ParseInt(html, L"border='(\\d+)'");
			BorderColor = ParseStr(html, L"border-color:([^;'\"]+)[;'\"]");
			Rows = Regex::Matches(html, L"<tr>")->Count;
			Match^ fr = Regex::Match(html, L"<tr>(.*?)</tr>", RegexOptions::Singleline);
			if (fr->Success) Cols = Regex::Matches(fr->Groups[1]->Value, L"<td")->Count;
		}
	};

	public ref class HtmlImage : public HtmlElement {
	public:
		String^ Src;

		virtual String^ GenerateHtml() override {
			// Конвертуємо зворотні слеші і кодуємо пробіли у шляху
			String^ localSrc = Src->Replace("\\", "/")->Replace(" ", "%20");
			return String::Format(
				"<img src='file:///{0}' style='position:absolute; left:{1}px; top:{2}px; "
				"width:{3}px; height:{4}px;' />",
				localSrc, X, Y, Width, Height);
		}
		virtual void ParseFromHtml(String^ html) override {
			X = ParseInt(html, L"left:(\\d+)px");
			Y = ParseInt(html, L"top:(\\d+)px");
			Width = ParseInt(html, L"width:(\\d+)px");
			Height = ParseInt(html, L"height:(\\d+)px");
			Match^ m = Regex::Match(html, L"src='file:///([^']+)'");
			if (m->Success) Src = m->Groups[1]->Value->Replace("/", "\\");
		}
	};

	public ref class HtmlLink : public HtmlElement {
	public:
		String^ Text; String^ Href; String^ HexColor;

		virtual String^ GenerateHtml() override {
			return String::Format(
				"<a href='{0}' style='position:absolute; left:{1}px; top:{2}px; color:{3};'>{4}</a>",
				Href, X, Y, HexColor, Text);
		}
		virtual void ParseFromHtml(String^ html) override {
			X = ParseInt(html, L"left:(\\d+)px");
			Y = ParseInt(html, L"top:(\\d+)px");
			HexColor = ParseStr(html, L"color:([^;'\"]+)[;'\"]");
			Match^ m = Regex::Match(html, L"href='([^']+)'");
			if (m->Success) Href = m->Groups[1]->Value;
			m = Regex::Match(html, L">([^<]+)</a>");
			if (m->Success) Text = m->Groups[1]->Value;
		}
	};


	inline System::Void MyForm::SelectColor(System::Object^ sender, System::EventArgs^ e) {
		Label^ lbl = safe_cast<Label^>(sender);
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			lbl->ForeColor = colorDialog1->Color;
	}

	inline System::Void MyForm::textBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			textBox3->Text = ofd->FileName;
	}

	inline System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ sfd = gcnew SaveFileDialog();
		sfd->Filter = "HTML files (*.html)|*.html";
		sfd->FileName = "view.html";
		if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;

		SavedFilePath = sfd->FileName;

		String^ bgHex = ColorTranslator::ToHtml(
			label3->ForeColor == Color::Black ? Color::White : label3->ForeColor);
		String^ txtHex = ColorTranslator::ToHtml(label4->ForeColor);

		String^ html = "<!DOCTYPE html>\n<html>\n<head>\n<meta charset='utf-8'>\n";
		html += "<title>" + textBox1->Text + "</title>\n</head>\n";
		html += String::Format(
			"<body style='position:relative; background-color:{0}; color:{1}; "
			"width:{2}px; height:{3}px; margin:0;'>\n",
			bgHex, txtHex, numericUpDown1->Value, numericUpDown2->Value);
		html += "<h1 style='text-align:center;'>" + textBox2->Text + "</h1>\n";

		HtmlText^ txt = gcnew HtmlText();
		txt->Text = textBox4->Text;
		txt->FontName = (comboBox1->Text != "") ? comboBox1->Text : "Arial";
		txt->FontSize = (int)numericUpDown10->Value;
		txt->HexColor = ColorTranslator::ToHtml(label19->ForeColor);
		txt->X = (int)numericUpDown12->Value; txt->Y = (int)numericUpDown11->Value;
		txt->Width = (int)numericUpDown14->Value; txt->Height = (int)numericUpDown13->Value;
		html += txt->GenerateHtml() + "\n";

		HtmlTable^ tbl = gcnew HtmlTable();
		tbl->Rows = (int)numericUpDown3->Value; tbl->Cols = (int)numericUpDown4->Value;
		tbl->Border = (int)numericUpDown5->Value;
		tbl->BorderColor = ColorTranslator::ToHtml(label10->ForeColor);
		tbl->X = (int)numericUpDown6->Value; tbl->Y = (int)numericUpDown7->Value;
		html += tbl->GenerateHtml() + "\n";

		if (textBox3->Text != "Двічі клікніть..." && textBox3->Text != "") {
			HtmlImage^ img = gcnew HtmlImage();
			img->Src = textBox3->Text;
			img->X = (int)numericUpDown8->Value;
			img->Y = (int)numericUpDown9->Value;
			img->Width = (int)numericUpDown16->Value; 
			img->Height = (int)numericUpDown15->Value;
			if (img->Width == 0)  img->Width = 200;   
			if (img->Height == 0) img->Height = 200;
			html += img->GenerateHtml() + "\n";
		}

		HtmlLink^ lnk = gcnew HtmlLink();
		lnk->Text = textBox5->Text; lnk->Href = textBox6->Text;
		lnk->HexColor = ColorTranslator::ToHtml(label28->ForeColor);
		lnk->X = (int)numericUpDown18->Value; lnk->Y = (int)numericUpDown17->Value;
		html += lnk->GenerateHtml() + "\n";

		html += "</body>\n</html>";
		File::WriteAllText(SavedFilePath, html, System::Text::Encoding::UTF8);
		MessageBox::Show("Файл успішно згенеровано!\nМожете натискати 'Перегляд'.",
			"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	inline System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		LAB10::MyForm1^ viewer = gcnew LAB10::MyForm1();
		if (!String::IsNullOrEmpty(SavedFilePath))
			viewer->TargetFilePath = SavedFilePath;
		viewer->Show();
	}
}