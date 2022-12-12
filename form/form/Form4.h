#pragma once
#include "stdafx.h"
#include "Form5.h"

namespace form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(System::Windows::Forms::Form^ form1)
		{
			otherform = form1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ denbep1;
	private: System::Windows::Forms::PictureBox^ denbep2;
	private: System::Windows::Forms::PictureBox^ quatbep1;
	private: System::Windows::Forms::PictureBox^ quatbep2;





	private: System::Windows::Forms::Button^ nut_denb2;
	private: System::Windows::Forms::Button^ nut_denb1;
	private: System::Windows::Forms::Button^ nut_quatb1;




	private: System::Windows::Forms::Label^ textdenb1;
	private: System::Windows::Forms::Label^ textdenb2;


	private: System::Windows::Forms::Label^ textquatb1;

	private: System::Windows::Forms::Button^ nut_quatb2;
	private: System::Windows::Forms::Label^ textquatb2;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ nut_tuychinh;

	private: System::Windows::Forms::Button^ nut_khuya;

	private: System::Windows::Forms::Button^ nut_dem;

	private: System::Windows::Forms::Button^ nut_ngay;
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	public:  bool a, b, c, d, f, x, y, z, w;

	public:
	private: System::Windows::Forms::Form^ otherform;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->nut_tuychinh = (gcnew System::Windows::Forms::Button());
			this->nut_khuya = (gcnew System::Windows::Forms::Button());
			this->nut_dem = (gcnew System::Windows::Forms::Button());
			this->nut_ngay = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->denbep1 = (gcnew System::Windows::Forms::PictureBox());
			this->denbep2 = (gcnew System::Windows::Forms::PictureBox());
			this->quatbep1 = (gcnew System::Windows::Forms::PictureBox());
			this->quatbep2 = (gcnew System::Windows::Forms::PictureBox());
			this->nut_denb2 = (gcnew System::Windows::Forms::Button());
			this->nut_denb1 = (gcnew System::Windows::Forms::Button());
			this->nut_quatb1 = (gcnew System::Windows::Forms::Button());
			this->textdenb1 = (gcnew System::Windows::Forms::Label());
			this->textdenb2 = (gcnew System::Windows::Forms::Label());
			this->textquatb1 = (gcnew System::Windows::Forms::Label());
			this->nut_quatb2 = (gcnew System::Windows::Forms::Button());
			this->textquatb2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denbep1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denbep2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatbep1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatbep2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGreen;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Snow;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 81);
			this->button1->TabIndex = 0;
			this->button1->Text = L"TRANG CHỦ ";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label1->Location = System::Drawing::Point(710, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 57);
			this->label1->TabIndex = 2;
			this->label1->Text = L"NHÀ BẾP";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::OliveDrab;
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->nut_tuychinh);
			this->panel1->Controls->Add(this->nut_khuya);
			this->panel1->Controls->Add(this->nut_dem);
			this->panel1->Controls->Add(this->nut_ngay);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(10, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(212, 555);
			this->panel1->TabIndex = 3;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(113, 466);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(66, 63);
			this->pictureBox9->TabIndex = 35;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(113, 365);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(66, 63);
			this->pictureBox7->TabIndex = 34;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(113, 247);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(66, 62);
			this->pictureBox6->TabIndex = 33;
			this->pictureBox6->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(12, 438);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(184, 25);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Chế độ tuỳ chỉnh";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(18, 337);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(151, 25);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Chế độ khuya";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(18, 219);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(176, 25);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Chế độ ban đêm";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(12, 104);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(182, 25);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Chế độ ban ngày";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(113, 132);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(66, 60);
			this->pictureBox5->TabIndex = 25;
			this->pictureBox5->TabStop = false;
			// 
			// nut_tuychinh
			// 
			this->nut_tuychinh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_tuychinh.BackgroundImage")));
			this->nut_tuychinh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_tuychinh->FlatAppearance->BorderSize = 0;
			this->nut_tuychinh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_tuychinh->Location = System::Drawing::Point(23, 466);
			this->nut_tuychinh->Name = L"nut_tuychinh";
			this->nut_tuychinh->Size = System::Drawing::Size(62, 60);
			this->nut_tuychinh->TabIndex = 24;
			this->nut_tuychinh->UseVisualStyleBackColor = true;
			this->nut_tuychinh->Click += gcnew System::EventHandler(this, &Form4::nut_tuychinh_Click);
			// 
			// nut_khuya
			// 
			this->nut_khuya->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_khuya.BackgroundImage")));
			this->nut_khuya->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_khuya->FlatAppearance->BorderSize = 0;
			this->nut_khuya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_khuya->Location = System::Drawing::Point(23, 365);
			this->nut_khuya->Name = L"nut_khuya";
			this->nut_khuya->Size = System::Drawing::Size(62, 60);
			this->nut_khuya->TabIndex = 23;
			this->nut_khuya->UseVisualStyleBackColor = true;
			this->nut_khuya->Click += gcnew System::EventHandler(this, &Form4::nut_khuya_Click);
			// 
			// nut_dem
			// 
			this->nut_dem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_dem.BackgroundImage")));
			this->nut_dem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_dem->FlatAppearance->BorderSize = 0;
			this->nut_dem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_dem->Location = System::Drawing::Point(23, 247);
			this->nut_dem->Name = L"nut_dem";
			this->nut_dem->Size = System::Drawing::Size(62, 60);
			this->nut_dem->TabIndex = 22;
			this->nut_dem->UseVisualStyleBackColor = true;
			this->nut_dem->Click += gcnew System::EventHandler(this, &Form4::nut_dem_Click);
			// 
			// nut_ngay
			// 
			this->nut_ngay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_ngay.BackgroundImage")));
			this->nut_ngay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_ngay->FlatAppearance->BorderSize = 0;
			this->nut_ngay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_ngay->Location = System::Drawing::Point(23, 132);
			this->nut_ngay->Name = L"nut_ngay";
			this->nut_ngay->Size = System::Drawing::Size(62, 60);
			this->nut_ngay->TabIndex = 21;
			this->nut_ngay->UseVisualStyleBackColor = true;
			this->nut_ngay->Click += gcnew System::EventHandler(this, &Form4::nut_ngay_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(707, 264);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 247);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// denbep1
			// 
			this->denbep1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"denbep1.BackgroundImage")));
			this->denbep1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->denbep1->Location = System::Drawing::Point(335, 222);
			this->denbep1->Name = L"denbep1";
			this->denbep1->Size = System::Drawing::Size(110, 97);
			this->denbep1->TabIndex = 5;
			this->denbep1->TabStop = false;
			// 
			// denbep2
			// 
			this->denbep2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"denbep2.BackgroundImage")));
			this->denbep2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->denbep2->Location = System::Drawing::Point(335, 414);
			this->denbep2->Name = L"denbep2";
			this->denbep2->Size = System::Drawing::Size(110, 97);
			this->denbep2->TabIndex = 6;
			this->denbep2->TabStop = false;
			// 
			// quatbep1
			// 
			this->quatbep1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quatbep1.BackgroundImage")));
			this->quatbep1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->quatbep1->Location = System::Drawing::Point(574, 222);
			this->quatbep1->Name = L"quatbep1";
			this->quatbep1->Size = System::Drawing::Size(110, 97);
			this->quatbep1->TabIndex = 7;
			this->quatbep1->TabStop = false;
			// 
			// quatbep2
			// 
			this->quatbep2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quatbep2.BackgroundImage")));
			this->quatbep2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->quatbep2->Location = System::Drawing::Point(574, 414);
			this->quatbep2->Name = L"quatbep2";
			this->quatbep2->Size = System::Drawing::Size(110, 97);
			this->quatbep2->TabIndex = 8;
			this->quatbep2->TabStop = false;
			// 
			// nut_denb2
			// 
			this->nut_denb2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_denb2.BackgroundImage")));
			this->nut_denb2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_denb2->FlatAppearance->BorderSize = 0;
			this->nut_denb2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_denb2->Location = System::Drawing::Point(254, 447);
			this->nut_denb2->Name = L"nut_denb2";
			this->nut_denb2->Size = System::Drawing::Size(75, 64);
			this->nut_denb2->TabIndex = 9;
			this->nut_denb2->UseVisualStyleBackColor = true;
			this->nut_denb2->Click += gcnew System::EventHandler(this, &Form4::nut_denb2_Click);
			// 
			// nut_denb1
			// 
			this->nut_denb1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_denb1.BackgroundImage")));
			this->nut_denb1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_denb1->FlatAppearance->BorderSize = 0;
			this->nut_denb1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_denb1->Location = System::Drawing::Point(254, 260);
			this->nut_denb1->Name = L"nut_denb1";
			this->nut_denb1->Size = System::Drawing::Size(75, 64);
			this->nut_denb1->TabIndex = 10;
			this->nut_denb1->UseVisualStyleBackColor = true;
			this->nut_denb1->Click += gcnew System::EventHandler(this, &Form4::nut_denb1_Click);
			// 
			// nut_quatb1
			// 
			this->nut_quatb1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_quatb1.BackgroundImage")));
			this->nut_quatb1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_quatb1->FlatAppearance->BorderSize = 0;
			this->nut_quatb1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_quatb1->Location = System::Drawing::Point(493, 260);
			this->nut_quatb1->Name = L"nut_quatb1";
			this->nut_quatb1->Size = System::Drawing::Size(75, 64);
			this->nut_quatb1->TabIndex = 11;
			this->nut_quatb1->UseVisualStyleBackColor = true;
			this->nut_quatb1->Click += gcnew System::EventHandler(this, &Form4::nut_quatb1_Click);
			// 
			// textdenb1
			// 
			this->textdenb1->AutoSize = true;
			this->textdenb1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdenb1->ForeColor = System::Drawing::Color::Red;
			this->textdenb1->Location = System::Drawing::Point(253, 222);
			this->textdenb1->Name = L"textdenb1";
			this->textdenb1->Size = System::Drawing::Size(76, 35);
			this->textdenb1->TabIndex = 12;
			this->textdenb1->Text = L"OFF";
			// 
			// textdenb2
			// 
			this->textdenb2->AutoSize = true;
			this->textdenb2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdenb2->ForeColor = System::Drawing::Color::Red;
			this->textdenb2->Location = System::Drawing::Point(253, 414);
			this->textdenb2->Name = L"textdenb2";
			this->textdenb2->Size = System::Drawing::Size(76, 35);
			this->textdenb2->TabIndex = 13;
			this->textdenb2->Text = L"OFF";
			// 
			// textquatb1
			// 
			this->textquatb1->AutoSize = true;
			this->textquatb1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textquatb1->ForeColor = System::Drawing::Color::Red;
			this->textquatb1->Location = System::Drawing::Point(492, 222);
			this->textquatb1->Name = L"textquatb1";
			this->textquatb1->Size = System::Drawing::Size(76, 35);
			this->textquatb1->TabIndex = 14;
			this->textquatb1->Text = L"OFF";
			// 
			// nut_quatb2
			// 
			this->nut_quatb2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_quatb2.BackgroundImage")));
			this->nut_quatb2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_quatb2->FlatAppearance->BorderSize = 0;
			this->nut_quatb2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_quatb2->Location = System::Drawing::Point(493, 447);
			this->nut_quatb2->Name = L"nut_quatb2";
			this->nut_quatb2->Size = System::Drawing::Size(75, 64);
			this->nut_quatb2->TabIndex = 15;
			this->nut_quatb2->UseVisualStyleBackColor = true;
			this->nut_quatb2->Click += gcnew System::EventHandler(this, &Form4::nut_quatb2_Click);
			// 
			// textquatb2
			// 
			this->textquatb2->AutoSize = true;
			this->textquatb2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textquatb2->ForeColor = System::Drawing::Color::Red;
			this->textquatb2->Location = System::Drawing::Point(492, 414);
			this->textquatb2->Name = L"textquatb2";
			this->textquatb2->Size = System::Drawing::Size(76, 35);
			this->textquatb2->TabIndex = 16;
			this->textquatb2->Text = L"OFF";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(296, 373);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 38);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Đèn 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(529, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 38);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Quạt 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(529, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 38);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Quạt 1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(296, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 38);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Đèn 1";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->pictureBox16);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1020, 45);
			this->panel2->TabIndex = 21;
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form4::Form4_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form4::Form4_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form4::Form4_MouseUp);
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
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(45, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(416, 29);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Ứng dụng điều khiển nhà thông minh";
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
			this->panel3->TabIndex = 22;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Teal;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(1009, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(11, 565);
			this->panel4->TabIndex = 23;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Teal;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->Location = System::Drawing::Point(10, 599);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(999, 11);
			this->panel5->TabIndex = 24;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(1020, 610);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textquatb2);
			this->Controls->Add(this->nut_quatb2);
			this->Controls->Add(this->textquatb1);
			this->Controls->Add(this->textdenb2);
			this->Controls->Add(this->textdenb1);
			this->Controls->Add(this->nut_quatb1);
			this->Controls->Add(this->nut_denb1);
			this->Controls->Add(this->nut_denb2);
			this->Controls->Add(this->quatbep2);
			this->Controls->Add(this->quatbep1);
			this->Controls->Add(this->denbep2);
			this->Controls->Add(this->denbep1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NHÀ BẾP";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denbep1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denbep2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatbep1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatbep2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
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

private: void batquat(Button^ congtac, Label^ trangthai, PictureBox^ anh)
{
	congtac->BackgroundImage = Image::FromFile("congtacbat.png");
	trangthai->ForeColor = System::Drawing::Color::Green;
	trangthai->Text = L"ON";
	anh->BackgroundImage = Image::FromFile("quatmo.png");

}
private: void tatquat(Button^ congtac, Label^ trangthai, PictureBox^ anh)
{
	congtac->BackgroundImage = Image::FromFile("congtacdong.png");
	trangthai->ForeColor = System::Drawing::Color::Red;
	trangthai->Text = L"OFF";
	anh->BackgroundImage = Image::FromFile("quattat.png");
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
		tatden(nut_denb1, textdenb1, denbep1);
		tatden(nut_denb2, textdenb2, denbep2);
		batquat(nut_quatb1, textquatb1, quatbep1);
		batquat(nut_quatb2, textquatb2, quatbep2);
		x = false;
		y = false;
		z = true;
		w = true;
		a = true;
	}
}

private: void chucnangdem()
{
	if (b == false)
	{
		nut_dem->BackgroundImage = Image::FromFile("congtacbat.png");
		batden(nut_denb1, textdenb1, denbep1);
		tatden(nut_denb2, textdenb2, denbep2);
		batquat(nut_quatb1, textquatb1, quatbep1);
		tatquat(nut_quatb2, textquatb2, quatbep2);
		x = true;
		y = false;
		z = true;
		w = false;
		b = true;
	}
}

private: void chucnangkhuya()
{
	if (c == false)
	{
		nut_khuya->BackgroundImage = Image::FromFile("congtacbat.png");
		tatden(nut_denb1, textdenb1, denbep1);
		tatden(nut_denb2, textdenb2, denbep2);
		tatquat(nut_quatb1, textquatb1, quatbep1);
		tatquat(nut_quatb2, textquatb2, quatbep2);
		x = false;
		y = false;
		z = false;
		w = false;
		c = true;
	}
}

private: void chucnangtuychinh()
{
	if (d == false)
	{
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
private: System::Void Form4_Load(System::Object^ sender, System::EventArgs^ e) {
	a = false;
	b = false;
	c = false;
	d = true;
	x = false;
	y = false;
	z = false;
	w = false;
	nut_tuychinh->BackgroundImage = Image::FromFile("congtacbat.png");
	this->dragging = false;
}
private: System::Void nut_denb1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o nha bep luc " + now); }
	if (x == false)
	{
		batden(nut_denb1, textdenb1, denbep1);
		x = true;
		output_file->WriteLine("Den 1 duoc bat trong nha bep " + now);
	}
	else if (x == true)
	{
		tatden(nut_denb1, textdenb1, denbep1);
		x = false;
		output_file->WriteLine("Den 1 duoc tat trong nha bep " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}

}

private: System::Void nut_denb2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o nha bep luc " + now); }
	if (y == false)
	{
		batden(nut_denb2, textdenb2, denbep2);
		y = true;
		output_file->WriteLine("Den 2 duoc bat trong nha bep " + now);
	}
	else if (y == true)
	{
		tatden(nut_denb2, textdenb2, denbep2);
		y = false;
		output_file->WriteLine("Den 2 duoc tat trong nha bep " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}

private: System::Void nut_quatb1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o nha bep luc " + now); }
	if (z == false)
	{
		batquat(nut_quatb1, textquatb1, quatbep1);
		z = true;
		output_file->WriteLine("Quat 1 duoc bat trong nha bep " + now);
	}
	else if (z == true)
	{
		tatquat(nut_quatb1, textquatb1, quatbep1);
		z = false;
		output_file->WriteLine("Quat 1 duoc bat trong nha bep " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}

}

private: System::Void nut_quatb2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o nha bep luc " + now); }
	if (w == false)
	{
		batquat(nut_quatb2, textquatb2, quatbep2);
		w = true;
		output_file->WriteLine("Quat 2 duoc bat trong nha bep " + now);
	}
	else if (w == true)
	{
		tatquat(nut_quatb2, textquatb2, quatbep2);
		w = false;
		output_file->WriteLine("Quat 2 duoc tat trong nha bep " + now);
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
	output_file->WriteLine("**Che do ban ngay duoc bat o nha bep luc " + now);
	output_file->WriteLine("--Quat 1 va 2 duoc bat, cac thiet bi khac o nha bep tat--");
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
	output_file->WriteLine("**Che do ban dem duoc bat o nha bep luc " + now);
	output_file->WriteLine("--Quat 1, den 1 duoc bat, cac thiet bi khac o nha bep tat--");
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
	output_file->WriteLine("**Che do khuya duoc bat o nha bep luc " + now);
	output_file->WriteLine("--Tat ca cac thiet bi khac trong nha bep tat--");
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
	output_file->WriteLine("**Che do tuy chinh duoc bat o nha bep luc " + now);
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}
private: System::Void Form4_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}

private: System::Void Form4_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}

private: System::Void Form4_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = false; //this bool is awesome
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

};
}
