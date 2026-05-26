#pragma once

#using <System.dll>
#using <System.Drawing.dll>

namespace LAB10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		String^ TargetFilePath;

		MyForm1(void)
		{
			InitializeComponent();

			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);

			this->panelScroll->Resize += gcnew System::EventHandler(this, &MyForm1::panelScroll_Resize);
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);

			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::ManualResize_ValueChanged);
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm1::ManualResize_ValueChanged);
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm1::ManualResize_ValueChanged);

			originalBounds = gcnew Dictionary<Control^, System::Drawing::Rectangle>();
			originalFonts = gcnew Dictionary<Control^, float>();
			isResizing = false;
		}

	protected:
		~MyForm1() { if (components) { delete components; } }

	private:
		bool isResizing;
		Dictionary<Control^, System::Drawing::Rectangle>^ originalBounds;
		Dictionary<Control^, float>^ originalFonts;
		System::Drawing::Size originalPanelSize;

	private: System::Windows::Forms::Panel^ panelScroll;
	private: System::Windows::Forms::Panel^ panelCanvas;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->panelScroll = (gcnew System::Windows::Forms::Panel());
			   this->panelCanvas = (gcnew System::Windows::Forms::Panel());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   this->groupBox3->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // panelScroll
			   // 
			   this->panelScroll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelScroll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				   static_cast<System::Int32>(static_cast<System::Byte>(220)));
			   this->panelScroll->Location = System::Drawing::Point(12, 12);
			   this->panelScroll->Name = L"panelScroll";
			   this->panelScroll->Size = System::Drawing::Size(534, 409);
			   this->panelScroll->TabIndex = 0;
			   this->panelScroll->AutoScroll = true;
			   // 
			   // panelCanvas
			   // 
			   this->panelCanvas->BackColor = System::Drawing::Color::White;
			   this->panelCanvas->Location = System::Drawing::Point(0, 0);
			   this->panelCanvas->Name = L"panelCanvas";
			   this->panelCanvas->Size = System::Drawing::Size(800, 600);
			   this->panelCanvas->TabIndex = 0;
			   this->panelScroll->Controls->Add(this->panelCanvas);
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox1->Controls->Add(this->textBox1);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Location = System::Drawing::Point(564, 12);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(245, 73);
			   this->groupBox1->TabIndex = 1;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Файл";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(50, 24);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ReadOnly = true;
			   this->textBox1->Size = System::Drawing::Size(189, 20);
			   this->textBox1->TabIndex = 1;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(8, 27);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(36, 13);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Шлях ";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox2->Controls->Add(this->numericUpDown3);
			   this->groupBox2->Controls->Add(this->numericUpDown2);
			   this->groupBox2->Controls->Add(this->numericUpDown1);
			   this->groupBox2->Controls->Add(this->label4);
			   this->groupBox2->Controls->Add(this->label3);
			   this->groupBox2->Controls->Add(this->label2);
			   this->groupBox2->Controls->Add(this->checkBox1);
			   this->groupBox2->Location = System::Drawing::Point(564, 91);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(245, 143);
			   this->groupBox2->TabIndex = 2;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Адаптивність";
			   // 
			   // numericUpDown3
			   // 
			   this->numericUpDown3->Enabled = false;
			   this->numericUpDown3->Location = System::Drawing::Point(76, 103);
			   this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			   this->numericUpDown3->Name = L"numericUpDown3";
			   this->numericUpDown3->Size = System::Drawing::Size(95, 20);
			   this->numericUpDown3->TabIndex = 6;
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->Enabled = false;
			   this->numericUpDown2->Location = System::Drawing::Point(76, 77);
			   this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(95, 20);
			   this->numericUpDown2->TabIndex = 5;
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->Enabled = false;
			   this->numericUpDown1->Location = System::Drawing::Point(76, 51);
			   this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			   this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(95, 20);
			   this->numericUpDown1->TabIndex = 4;
			   this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(11, 105);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(46, 13);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Висота ";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(11, 79);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(49, 13);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Ширина ";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(11, 53);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(64, 13);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Масштаб %";
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Checked = true;
			   this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			   this->checkBox1->Location = System::Drawing::Point(11, 29);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(117, 17);
			   this->checkBox1->TabIndex = 0;
			   this->checkBox1->Text = L"Авто-перерахунок";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   // 
			   // groupBox3
			   // 
			   this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(229)));
			   this->groupBox3->Controls->Add(this->button3);
			   this->groupBox3->Controls->Add(this->button2);
			   this->groupBox3->Controls->Add(this->button1);
			   this->groupBox3->Location = System::Drawing::Point(564, 240);
			   this->groupBox3->Name = L"groupBox3";
			   this->groupBox3->Size = System::Drawing::Size(245, 181);
			   this->groupBox3->TabIndex = 7;
			   this->groupBox3->TabStop = false;
			   this->groupBox3->Text = L"Дії";
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->button3->ForeColor = System::Drawing::Color::White;
			   this->button3->Location = System::Drawing::Point(20, 123);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(206, 40);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"Закрити";
			   this->button3->UseVisualStyleBackColor = false;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->button2->ForeColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(20, 77);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(206, 40);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Відкрити в браузері";
			   this->button2->UseVisualStyleBackColor = false;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(20, 31);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(206, 40);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Зробити скріншот";
			   this->button1->UseVisualStyleBackColor = false;
			   // 
			   // MyForm1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->ClientSize = System::Drawing::Size(818, 433);
			   this->Controls->Add(this->groupBox3);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->panelScroll);
			   this->Name = L"MyForm1";
			   this->Text = L"Перегляд Web-сторінки (Динамічна об'єктна генерація)";
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   this->groupBox3->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = String::IsNullOrEmpty(TargetFilePath) ? Path::GetFullPath("view.html") : TargetFilePath;
		textBox1->Text = filePath;

		if (File::Exists(filePath)) {
			ParseAndGenerateControls(filePath);
		}
		else {
			MessageBox::Show("Файл не знайдено: " + filePath, "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: void ParseAndGenerateControls(String^ filePath) {
		String^ content = File::ReadAllText(filePath, System::Text::Encoding::UTF8);

		panelCanvas->Controls->Clear();
		originalBounds->Clear();
		originalFonts->Clear();

		Match^ mBg = Regex::Match(content, L"background-color:([^;]+); color:([^;]+); width:(\\d+)px; height:(\\d+)px;");
		if (mBg->Success) {
			panelCanvas->BackColor = ColorTranslator::FromHtml(mBg->Groups[1]->Value);
			originalPanelSize = System::Drawing::Size(Int32::Parse(mBg->Groups[3]->Value), Int32::Parse(mBg->Groups[4]->Value));

			panelCanvas->Width = originalPanelSize.Width;
			panelCanvas->Height = originalPanelSize.Height;

			isResizing = true;
			numericUpDown2->Value = originalPanelSize.Width;
			numericUpDown3->Value = originalPanelSize.Height;
			isResizing = false;
		}

		Match^ mTitle = Regex::Match(content, L"<h1[^>]*>([^<]+)</h1>");
		if (mTitle->Success) {
			Label^ lbl = gcnew Label();
			lbl->Text = mTitle->Groups[1]->Value;
			lbl->Font = gcnew System::Drawing::Font("Arial", 20, FontStyle::Bold);
			lbl->AutoSize = true;
			lbl->Location = System::Drawing::Point((originalPanelSize.Width - 150) / 2, 15);
			panelCanvas->Controls->Add(lbl);
		}

		for each (Match ^ m in Regex::Matches(content, L"<div style='position:absolute; left:(\\d+)px; top:(\\d+)px; width:(\\d+)px; height:(\\d+)px; font-family:([^;]+); font-size:(\\d+)px; color:([^;]+);'>([^<]+)</div>")) {
			Label^ lbl = gcnew Label();
			lbl->Left = Int32::Parse(m->Groups[1]->Value);
			lbl->Top = Int32::Parse(m->Groups[2]->Value);
			lbl->Width = Int32::Parse(m->Groups[3]->Value);
			lbl->Height = Int32::Parse(m->Groups[4]->Value);
			lbl->Font = gcnew System::Drawing::Font(m->Groups[5]->Value, Single::Parse(m->Groups[6]->Value));
			lbl->ForeColor = ColorTranslator::FromHtml(m->Groups[7]->Value);
			lbl->Text = m->Groups[8]->Value;
			panelCanvas->Controls->Add(lbl);
		}

		for each (Match ^ m in Regex::Matches(content, L"<img src='file:///([^']+)' style='position:absolute; left:(\\d+)px; top:(\\d+)px; width:(\\d+)px; height:(\\d+)px;' />")) {
			PictureBox^ pb = gcnew PictureBox();
			pb->ImageLocation = m->Groups[1]->Value->Replace("%20", " ");
			pb->Left = Int32::Parse(m->Groups[2]->Value);
			pb->Top = Int32::Parse(m->Groups[3]->Value);
			pb->Width = Int32::Parse(m->Groups[4]->Value);
			pb->Height = Int32::Parse(m->Groups[5]->Value);
			pb->SizeMode = PictureBoxSizeMode::StretchImage;
			panelCanvas->Controls->Add(pb);
		}

		for each (Match ^ m in Regex::Matches(content, L"<a href='([^']+)' style='position:absolute; left:(\\d+)px; top:(\\d+)px; color:([^;]+);'>([^<]+)</a>")) {
			LinkLabel^ ll = gcnew LinkLabel();
			String^ url = m->Groups[1]->Value;
			String^ txt = m->Groups[5]->Value;
			ll->Left = Int32::Parse(m->Groups[2]->Value);
			ll->Top = Int32::Parse(m->Groups[3]->Value);
			ll->LinkColor = ColorTranslator::FromHtml(m->Groups[4]->Value);
			ll->Text = txt;
			ll->AutoSize = true;
			ll->Links->Add(0, txt->Length, url);
			ll->LinkClicked += gcnew LinkLabelLinkClickedEventHandler(this, &MyForm1::Link_Clicked);
			panelCanvas->Controls->Add(ll);
		}

		for each (Match ^ m in Regex::Matches(content, L"<table[^>]*left:(\\d+)px; top:(\\d+)px; border-color:([^;'\"]+)[^>]*>(.*?)</table>", RegexOptions::Singleline | RegexOptions::IgnoreCase)) {
			DataGridView^ dgv = gcnew DataGridView();
			dgv->Left = Int32::Parse(m->Groups[1]->Value);
			dgv->Top = Int32::Parse(m->Groups[2]->Value);

			try { dgv->GridColor = ColorTranslator::FromHtml(m->Groups[3]->Value->Trim()); }
			catch (...) { dgv->GridColor = System::Drawing::Color::Black; }

			dgv->AllowUserToAddRows = false;
			dgv->RowHeadersVisible = false;
			dgv->ColumnHeadersVisible = false;
			dgv->ScrollBars = ScrollBars::None;

			dgv->BackgroundColor = System::Drawing::Color::White;
			dgv->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			dgv->BorderStyle = BorderStyle::FixedSingle;

			String^ innerHtml = m->Groups[4]->Value;

			int rowCount = Regex::Matches(innerHtml, L"<tr>", RegexOptions::IgnoreCase)->Count;
			int tdCount = Regex::Matches(innerHtml, L"<td", RegexOptions::IgnoreCase)->Count;
			int colCount = (rowCount > 0) ? (tdCount / rowCount) : 0;

			if (rowCount > 0 && colCount > 0) {
				dgv->ColumnCount = colCount;
				for (int i = 0; i < colCount; i++) dgv->Columns[i]->Width = 50;

				for (int r = 0; r < rowCount; r++) {
					dgv->Rows->Add();
					for (int c = 0; c < colCount; c++) {
						dgv->Rows[r]->Cells[c]->Value = "Текст";
					}
				}
			}
			else {
				dgv->ColumnCount = 1;
				dgv->Rows->Add();
			}

			dgv->Width = dgv->ColumnCount * 50 + 3;
			dgv->Height = dgv->RowCount * 22 + 3;

			panelCanvas->Controls->Add(dgv);
			dgv->BringToFront();
		}
		for each (Control ^ c in panelCanvas->Controls) {
			originalBounds[c] = c->Bounds;
			if (c->Font != nullptr) {
				originalFonts[c] = c->Font->Size;
			}
		}
	} 

	private: System::Void Link_Clicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		try {
			System::Diagnostics::Process::Start(e->Link->LinkData->ToString());
		}
		catch (...) { MessageBox::Show("Не вдалося відкрити посилання."); }
	}

	private: System::Void panelScroll_Resize(System::Object^ sender, System::EventArgs^ e) {
		if (originalPanelSize.Width == 0 || originalPanelSize.Height == 0) return;

		if (checkBox1->Checked) {
			float scaleX = (float)panelScroll->Width / originalPanelSize.Width;
			float scaleY = (float)panelScroll->Height / originalPanelSize.Height;

			float commonScale = Math::Min(scaleX, scaleY);
			if (commonScale < 0.4f) commonScale = 0.4f;

			isResizing = true;
			panelCanvas->Width = (int)(originalPanelSize.Width * commonScale);
			panelCanvas->Height = (int)(originalPanelSize.Height * commonScale);

			ApplyAdaptivity(commonScale, commonScale);

			numericUpDown2->Value = panelCanvas->Width;
			numericUpDown3->Value = panelCanvas->Height;
			isResizing = false;
		}
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		bool isManual = !checkBox1->Checked;
		numericUpDown1->Enabled = isManual;
		numericUpDown2->Enabled = isManual;
		numericUpDown3->Enabled = isManual;
	}

	private: System::Void ManualResize_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (isResizing || checkBox1->Checked) return;

		int newW = (int)numericUpDown2->Value;
		int newH = (int)numericUpDown3->Value;
		float scale = (float)numericUpDown1->Value / 100.0f;

		panelCanvas->Width = newW;
		panelCanvas->Height = newH;

		ApplyAdaptivity(scale * ((float)newW / originalPanelSize.Width), scale * ((float)newH / originalPanelSize.Height));
	}

	private: void ApplyAdaptivity(float scaleX, float scaleY) {
		for each (Control ^ c in originalBounds->Keys) {
			System::Drawing::Rectangle orig = originalBounds[c];
			c->Left = (int)(orig.Left * scaleX);
			c->Top = (int)(orig.Top * scaleY);
			c->Width = (int)(orig.Width * scaleX);
			c->Height = (int)(orig.Height * scaleY);

			if (originalFonts->ContainsKey(c)) {
				float origFont = originalFonts[c];
				float newFontSize = origFont * Math::Min(scaleX, scaleY);
				if (newFontSize > 1.0f) {
					c->Font = gcnew System::Drawing::Font(c->Font->FontFamily, newFontSize, c->Font->Style);
				}
			}
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (panelCanvas->Width <= 0 || panelCanvas->Height <= 0) return;

			Bitmap^ bmp = gcnew Bitmap(panelCanvas->Width, panelCanvas->Height);
			panelCanvas->DrawToBitmap(bmp, panelCanvas->ClientRectangle);

			SaveFileDialog^ sfd = gcnew SaveFileDialog();
			sfd->Filter = "PNG Image (*.png)|*.png";
			sfd->FileName = "screenshot.png";
			if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				bmp->Save(sfd->FileName, System::Drawing::Imaging::ImageFormat::Png);
				MessageBox::Show("Скріншот сайту успішно збережено!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			delete bmp;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Не вдалося зробити скріншот:\n" + ex->Message);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = textBox1->Text;
		if (File::Exists(filePath)) {
			System::Diagnostics::Process::Start(filePath);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}