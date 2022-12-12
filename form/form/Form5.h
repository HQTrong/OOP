#pragma once

namespace form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(System::Windows::Forms::Form^ form1)
		{
			otherform = form1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ nut_tuychinh;
	private: System::Windows::Forms::Button^ nut_khuya;
	private: System::Windows::Forms::Button^ nut_dem;
	private: System::Windows::Forms::Button^ nut_ngay;
	private: System::Windows::Forms::PictureBox^ dentam1;
	private: System::Windows::Forms::PictureBox^ dentam2;


	private: System::Windows::Forms::Button^ nut_dent1;

	private: System::Windows::Forms::Button^ nut_dent2;
	private: System::Windows::Forms::Label^ textdent1;
	private: System::Windows::Forms::Label^ textdent2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: bool dragging;
	private: Point offset;
	public:  bool a, b, c, d, f, x, y, z;
	private: System::Windows::Forms::Label^ label6;
	public:
	private: System::Windows::Forms::Label^ textdent3;
	private: System::Windows::Forms::Button^ nut_dent3;
	private: System::Windows::Forms::PictureBox^ dentam3;

	public:
	private: System::Windows::Forms::Form^ otherform;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ button1;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form5::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->nut_tuychinh = (gcnew System::Windows::Forms::Button());
			this->nut_khuya = (gcnew System::Windows::Forms::Button());
			this->nut_dem = (gcnew System::Windows::Forms::Button());
			this->nut_ngay = (gcnew System::Windows::Forms::Button());
			this->dentam1 = (gcnew System::Windows::Forms::PictureBox());
			this->dentam2 = (gcnew System::Windows::Forms::PictureBox());
			this->nut_dent1 = (gcnew System::Windows::Forms::Button());
			this->nut_dent2 = (gcnew System::Windows::Forms::Button());
			this->textdent1 = (gcnew System::Windows::Forms::Label());
			this->textdent2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textdent3 = (gcnew System::Windows::Forms::Label());
			this->nut_dent3 = (gcnew System::Windows::Forms::Button());
			this->dentam3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dentam1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dentam2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dentam3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Cyan;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 81);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Quay lại \r\ntrang chủ";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(660, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(265, 57);
			this->label2->TabIndex = 3;
			this->label2->Text = L"NHÀ TẮM";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(663, 269);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 247);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->nut_tuychinh);
			this->panel1->Controls->Add(this->nut_khuya);
			this->panel1->Controls->Add(this->nut_dem);
			this->panel1->Controls->Add(this->nut_ngay);
			this->panel1->Location = System::Drawing::Point(10, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(212, 555);
			this->panel1->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 446);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 25);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Chế độ tuỳ chỉnh";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 25);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Chế độ khuya";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 25);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Chế độ ban đêm";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Chế độ ban ngày";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(117, 474);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(66, 63);
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(117, 364);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(66, 63);
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(117, 251);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(66, 62);
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(117, 148);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(66, 60);
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// nut_tuychinh
			// 
			this->nut_tuychinh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_tuychinh.BackgroundImage")));
			this->nut_tuychinh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_tuychinh->FlatAppearance->BorderSize = 0;
			this->nut_tuychinh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_tuychinh->Location = System::Drawing::Point(29, 474);
			this->nut_tuychinh->Name = L"nut_tuychinh";
			this->nut_tuychinh->Size = System::Drawing::Size(62, 63);
			this->nut_tuychinh->TabIndex = 23;
			this->nut_tuychinh->UseVisualStyleBackColor = true;
			this->nut_tuychinh->Click += gcnew System::EventHandler(this, &Form5::nut_tuychinh_Click);
			// 
			// nut_khuya
			// 
			this->nut_khuya->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_khuya.BackgroundImage")));
			this->nut_khuya->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_khuya->FlatAppearance->BorderSize = 0;
			this->nut_khuya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_khuya->Location = System::Drawing::Point(29, 364);
			this->nut_khuya->Name = L"nut_khuya";
			this->nut_khuya->Size = System::Drawing::Size(62, 57);
			this->nut_khuya->TabIndex = 22;
			this->nut_khuya->UseVisualStyleBackColor = true;
			this->nut_khuya->Click += gcnew System::EventHandler(this, &Form5::nut_khuya_Click);
			// 
			// nut_dem
			// 
			this->nut_dem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_dem.BackgroundImage")));
			this->nut_dem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_dem->FlatAppearance->BorderSize = 0;
			this->nut_dem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_dem->Location = System::Drawing::Point(29, 251);
			this->nut_dem->Name = L"nut_dem";
			this->nut_dem->Size = System::Drawing::Size(62, 62);
			this->nut_dem->TabIndex = 21;
			this->nut_dem->UseVisualStyleBackColor = true;
			this->nut_dem->Click += gcnew System::EventHandler(this, &Form5::nut_dem_Click);
			// 
			// nut_ngay
			// 
			this->nut_ngay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_ngay.BackgroundImage")));
			this->nut_ngay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_ngay->FlatAppearance->BorderSize = 0;
			this->nut_ngay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_ngay->Location = System::Drawing::Point(29, 145);
			this->nut_ngay->Name = L"nut_ngay";
			this->nut_ngay->Size = System::Drawing::Size(62, 60);
			this->nut_ngay->TabIndex = 20;
			this->nut_ngay->UseVisualStyleBackColor = true;
			this->nut_ngay->Click += gcnew System::EventHandler(this, &Form5::nut_ngay_Click);
			// 
			// dentam1
			// 
			this->dentam1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dentam1.BackgroundImage")));
			this->dentam1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->dentam1->Location = System::Drawing::Point(413, 117);
			this->dentam1->Name = L"dentam1";
			this->dentam1->Size = System::Drawing::Size(110, 97);
			this->dentam1->TabIndex = 21;
			this->dentam1->TabStop = false;
			// 
			// dentam2
			// 
			this->dentam2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dentam2.BackgroundImage")));
			this->dentam2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->dentam2->Location = System::Drawing::Point(413, 287);
			this->dentam2->Name = L"dentam2";
			this->dentam2->Size = System::Drawing::Size(110, 97);
			this->dentam2->TabIndex = 22;
			this->dentam2->TabStop = false;
			// 
			// nut_dent1
			// 
			this->nut_dent1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_dent1.BackgroundImage")));
			this->nut_dent1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_dent1->FlatAppearance->BorderSize = 0;
			this->nut_dent1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_dent1->Location = System::Drawing::Point(332, 156);
			this->nut_dent1->Name = L"nut_dent1";
			this->nut_dent1->Size = System::Drawing::Size(75, 64);
			this->nut_dent1->TabIndex = 23;
			this->nut_dent1->UseVisualStyleBackColor = true;
			this->nut_dent1->Click += gcnew System::EventHandler(this, &Form5::nut_dent1_Click);
			// 
			// nut_dent2
			// 
			this->nut_dent2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_dent2.BackgroundImage")));
			this->nut_dent2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_dent2->FlatAppearance->BorderSize = 0;
			this->nut_dent2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_dent2->Location = System::Drawing::Point(332, 320);
			this->nut_dent2->Name = L"nut_dent2";
			this->nut_dent2->Size = System::Drawing::Size(75, 64);
			this->nut_dent2->TabIndex = 24;
			this->nut_dent2->UseVisualStyleBackColor = true;
			this->nut_dent2->Click += gcnew System::EventHandler(this, &Form5::nut_dent2_Click);
			// 
			// textdent1
			// 
			this->textdent1->AutoSize = true;
			this->textdent1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdent1->ForeColor = System::Drawing::Color::Red;
			this->textdent1->Location = System::Drawing::Point(331, 118);
			this->textdent1->Name = L"textdent1";
			this->textdent1->Size = System::Drawing::Size(76, 35);
			this->textdent1->TabIndex = 25;
			this->textdent1->Text = L"OFF";
			// 
			// textdent2
			// 
			this->textdent2->AutoSize = true;
			this->textdent2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdent2->ForeColor = System::Drawing::Color::Red;
			this->textdent2->Location = System::Drawing::Point(331, 287);
			this->textdent2->Name = L"textdent2";
			this->textdent2->Size = System::Drawing::Size(76, 35);
			this->textdent2->TabIndex = 26;
			this->textdent2->Text = L"OFF";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(314, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(242, 38);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Đèn phòng tắm";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(292, 246);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(286, 38);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Đèn phòng vệ sinh";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->pictureBox16);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1020, 45);
			this->panel2->TabIndex = 29;
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form5::Form5_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form5::Form5_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form5::Form5_MouseUp);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(968, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 45);
			this->button2->TabIndex = 21;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Location = System::Drawing::Point(6, 1);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(44, 38);
			this->pictureBox16->TabIndex = 20;
			this->pictureBox16->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(45, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(416, 29);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Ứng dụng điều khiển nhà thông minh";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(1156, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(52, 45);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Teal;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->Location = System::Drawing::Point(0, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 565);
			this->panel3->TabIndex = 30;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Teal;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(1009, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(11, 565);
			this->panel4->TabIndex = 31;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Teal;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->Location = System::Drawing::Point(10, 599);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(999, 11);
			this->panel5->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(292, 416);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(303, 38);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Đèn phòng rửa mặt";
			// 
			// textdent3
			// 
			this->textdent3->AutoSize = true;
			this->textdent3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdent3->ForeColor = System::Drawing::Color::Red;
			this->textdent3->Location = System::Drawing::Point(331, 457);
			this->textdent3->Name = L"textdent3";
			this->textdent3->Size = System::Drawing::Size(76, 35);
			this->textdent3->TabIndex = 35;
			this->textdent3->Text = L"OFF";
			// 
			// nut_dent3
			// 
			this->nut_dent3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_dent3.BackgroundImage")));
			this->nut_dent3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_dent3->FlatAppearance->BorderSize = 0;
			this->nut_dent3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_dent3->Location = System::Drawing::Point(332, 490);
			this->nut_dent3->Name = L"nut_dent3";
			this->nut_dent3->Size = System::Drawing::Size(75, 64);
			this->nut_dent3->TabIndex = 34;
			this->nut_dent3->UseVisualStyleBackColor = true;
			this->nut_dent3->Click += gcnew System::EventHandler(this, &Form5::nut_dent3_Click);
			// 
			// dentam3
			// 
			this->dentam3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dentam3.BackgroundImage")));
			this->dentam3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->dentam3->Location = System::Drawing::Point(413, 457);
			this->dentam3->Name = L"dentam3";
			this->dentam3->Size = System::Drawing::Size(110, 97);
			this->dentam3->TabIndex = 33;
			this->dentam3->TabStop = false;
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(1020, 610);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textdent3);
			this->Controls->Add(this->nut_dent3);
			this->Controls->Add(this->dentam3);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textdent2);
			this->Controls->Add(this->textdent1);
			this->Controls->Add(this->nut_dent2);
			this->Controls->Add(this->nut_dent1);
			this->Controls->Add(this->dentam2);
			this->Controls->Add(this->dentam1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NHÀ TẮM";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dentam1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dentam2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dentam3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		otherform->Show();
	}
		  
private: void batden(Button^ congtac, Label^ trangthai, PictureBox^ anh)
{
	congtac->BackgroundImage = Image::FromFile("congtacbat.png");
	trangthai->ForeColor = System::Drawing::Color::Green;
	trangthai->Text = L"ON";
	anh->BackgroundImage = Image::FromFile("denbat.png");

}
private: void tatden(Button^ congtac, Label^ trangthai, PictureBox^ anh)
{
	congtac->BackgroundImage = Image::FromFile("congtacdong.png");
	trangthai->ForeColor = System::Drawing::Color::Red;
	trangthai->Text = L"OFF";
	anh->BackgroundImage = Image::FromFile("dentat.png");
}

private: void checktrangthai1()
{
	if (a == true)
	{
		b = false;
		c = false;
		d = false;
		nut_dem->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_khuya->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_tuychinh->BackgroundImage = Image::FromFile("congtacdong.png");
	}
}
private: void checktrangthai2()
{
	if (b == true)
	{
		a = false;
		c = false;
		d = false;
		nut_ngay->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_khuya->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_tuychinh->BackgroundImage = Image::FromFile("congtacdong.png");
	}
}
private: void checktrangthai3()
{
	if (c == true)
	{
		a = false;
		b = false;
		d = false;
		nut_ngay->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_dem->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_tuychinh->BackgroundImage = Image::FromFile("congtacdong.png");
	}
}
private: void checktrangthai4()
{
	if (d == true)
	{
		a = false;
		b = false;
		c = false;
		nut_ngay->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_dem->BackgroundImage = Image::FromFile("congtacdong.png");
		nut_khuya->BackgroundImage = Image::FromFile("congtacdong.png");
	}
}

private: void chucnangngay()
{
	if (a == false)
	{
		nut_ngay->BackgroundImage = Image::FromFile("congtacbat.png");
		tatden(nut_dent1, textdent1, dentam1);
		tatden(nut_dent2, textdent2, dentam2);
		tatden(nut_dent3, textdent3, dentam3);
		x = false;
		y = false;
		z = false;
		a = true;
	}
}

private: void chucnangdem()
{
	if (b == false)
	{
		nut_dem->BackgroundImage = Image::FromFile("congtacbat.png");
		batden(nut_dent1, textdent1, dentam1);
		batden(nut_dent2, textdent2, dentam2);
		batden(nut_dent3, textdent3, dentam3);
		x = true;
		y = true;
		z = true;
		b = true;
	}
}

private: void chucnangkhuya()
{
	if (c == false)
	{
		nut_khuya->BackgroundImage = Image::FromFile("congtacbat.png");
		tatden(nut_dent1, textdent1, dentam1);
		tatden(nut_dent2, textdent2, dentam2);
		batden(nut_dent3, textdent3, dentam3);
		x = false;
		y = false;
		z = true;
		c = true;
	}
}

private: void chucnangtuychinh()
{
	if (d == false)
	{
		tatden(nut_dent1, textdent1, dentam1);
		batden(nut_dent2, textdent2, dentam2);
		batden(nut_dent3, textdent3, dentam3);
		nut_tuychinh->BackgroundImage = Image::FromFile("congtacbat.png");
		d = true;
	}
}
private: void batnuttuychinh()
{
	if (a == true || b == true || c == true) { f = true; }
	else { f = false; }
	nut_tuychinh->BackgroundImage = Image::FromFile("congtacbat.png");
	d = true;
	checktrangthai4();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form5_Load(System::Object^ sender, System::EventArgs^ e) {
	a = false;
	b = false;
	c = false;
	d = true;
	x = false;
	y = false;
	z = false;
	nut_tuychinh->BackgroundImage = Image::FromFile("congtacbat.png");
	this->dragging = false;
}
private: System::Void nut_dent1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o nha tam luc " + now); }
	if (x == false)
	{
		batden(nut_dent1, textdent1, dentam1);
		x = true;
		output_file->WriteLine("Den phong tam duoc bat luc " + now);
	}
	else if (x == true)
	{
		tatden(nut_dent1, textdent1, dentam1);
		x = false;
		output_file->WriteLine("Den phong tam duoc tat luc " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}

}

private: System::Void nut_dent2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o nha tam luc " + now); }
	if (y == false)
	{
		batden(nut_dent2, textdent2, dentam2);
		y = true;
		output_file->WriteLine("Den nha ve sinh duoc bat luc " + now);
	}
	else if (y == true)
	{
		tatden(nut_dent2, textdent2, dentam2);
		y = false;
		output_file->WriteLine("Den nha ve sinh duoc tat luc " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}

private: System::Void nut_dent3_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o nha tam luc " + now); }
	if (z == false)
	{
		batden(nut_dent3, textdent3, dentam3);
		z = true;
		output_file->WriteLine("Den phong rua mat duoc bat luc " + now);
	}
	else if (z == true)
	{
		tatden(nut_dent3, textdent3, dentam3);
		z = false;
		output_file->WriteLine("Den phong rua mat duoc tat luc " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}

private: System::Void nut_ngay_Click(System::Object^ sender, System::EventArgs^ e) {
	chucnangngay();
	checktrangthai1();
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	output_file->WriteLine("**Che do ban ngay duoc bat o phong khach luc " + now);
	output_file->WriteLine("--Tat ca cac thiet bi trong nha tam tat--");
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}
private: System::Void nut_dem_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	chucnangdem();
	checktrangthai2();
	output_file->WriteLine("**Che do ban dem duoc bat o phong khach luc " + now);
	output_file->WriteLine("--Tat ca cac thiet bi trogn nha tam duoc bat--");
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
	
}
private: System::Void nut_khuya_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	chucnangkhuya();
	checktrangthai3();
	output_file->WriteLine("**Che do khuya duoc bat o nha tam luc " + now);
	output_file->WriteLine("--Tat ca cac thiet bi khac trong nha tam tat--");
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}
private: System::Void nut_tuychinh_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	chucnangtuychinh();
	checktrangthai4();
	output_file->WriteLine("**Che do tuy chinh duoc bat o nha tam luc " + now);
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}
private: System::Void Form5_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}

private: System::Void Form5_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}

private: System::Void Form5_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = false; //this bool is awesome
}
private: System::Void denkhach1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

};
}
