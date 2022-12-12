#pragma once
#include"stdafx.h"
#include "Form4.h"
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
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(System::Windows::Forms::Form^ form1)
		{
			
			otherform = form1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Form^ otherform;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ denphongngu;
	private: System::Windows::Forms::PictureBox^ quatn;



	private: System::Windows::Forms::PictureBox^ denngu;


	private: System::Windows::Forms::Button^ nut_denn;
	private: System::Windows::Forms::Label^ textden;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ nut_denngu;
	private: System::Windows::Forms::Label^ textdenn;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ textquat;

	private: System::Windows::Forms::Button^ nut_quatn;
	private: System::Windows::Forms::Button^ nut_tuychinh;

	private: System::Windows::Forms::Button^ nut_dem;
	private: System::Windows::Forms::Button^ nut_khuya;


	private: System::Windows::Forms::Button^ nut_ngay;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->nut_tuychinh = (gcnew System::Windows::Forms::Button());
			this->nut_dem = (gcnew System::Windows::Forms::Button());
			this->nut_khuya = (gcnew System::Windows::Forms::Button());
			this->nut_ngay = (gcnew System::Windows::Forms::Button());
			this->denphongngu = (gcnew System::Windows::Forms::PictureBox());
			this->quatn = (gcnew System::Windows::Forms::PictureBox());
			this->denngu = (gcnew System::Windows::Forms::PictureBox());
			this->nut_denn = (gcnew System::Windows::Forms::Button());
			this->textden = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->nut_denngu = (gcnew System::Windows::Forms::Button());
			this->textdenn = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textquat = (gcnew System::Windows::Forms::Label());
			this->nut_quatn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denphongngu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denngu))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Goldenrod;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 81);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Quay lại \r\ntrang chủ ";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(742, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(221, 114);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PHÒNG \r\nNGỦ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(706, 250);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(268, 268);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SaddleBrown;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->nut_tuychinh);
			this->panel1->Controls->Add(this->nut_dem);
			this->panel1->Controls->Add(this->nut_khuya);
			this->panel1->Controls->Add(this->nut_ngay);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(10, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 555);
			this->panel1->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(3, 428);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(184, 25);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Chế độ tuỳ chỉnh";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(20, 311);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 25);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Chế độ khuya";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(13, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 25);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Chế độ ban đêm";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(7, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 25);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Chế độ ban ngày";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(105, 456);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(66, 63);
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(105, 339);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(66, 63);
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(105, 233);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(66, 62);
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(105, 130);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(66, 60);
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// nut_tuychinh
			// 
			this->nut_tuychinh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_tuychinh.BackgroundImage")));
			this->nut_tuychinh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_tuychinh->FlatAppearance->BorderSize = 0;
			this->nut_tuychinh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_tuychinh->Location = System::Drawing::Point(12, 456);
			this->nut_tuychinh->Name = L"nut_tuychinh";
			this->nut_tuychinh->Size = System::Drawing::Size(62, 60);
			this->nut_tuychinh->TabIndex = 25;
			this->nut_tuychinh->UseVisualStyleBackColor = true;
			this->nut_tuychinh->Click += gcnew System::EventHandler(this, &Form3::nut_tuychinh_Click);
			// 
			// nut_dem
			// 
			this->nut_dem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_dem.BackgroundImage")));
			this->nut_dem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_dem->FlatAppearance->BorderSize = 0;
			this->nut_dem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_dem->Location = System::Drawing::Point(12, 233);
			this->nut_dem->Name = L"nut_dem";
			this->nut_dem->Size = System::Drawing::Size(62, 60);
			this->nut_dem->TabIndex = 24;
			this->nut_dem->UseVisualStyleBackColor = true;
			this->nut_dem->Click += gcnew System::EventHandler(this, &Form3::nut_dem_Click);
			// 
			// nut_khuya
			// 
			this->nut_khuya->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_khuya.BackgroundImage")));
			this->nut_khuya->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_khuya->FlatAppearance->BorderSize = 0;
			this->nut_khuya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_khuya->Location = System::Drawing::Point(12, 339);
			this->nut_khuya->Name = L"nut_khuya";
			this->nut_khuya->Size = System::Drawing::Size(62, 60);
			this->nut_khuya->TabIndex = 24;
			this->nut_khuya->UseVisualStyleBackColor = true;
			this->nut_khuya->Click += gcnew System::EventHandler(this, &Form3::nut_khuya_Click);
			// 
			// nut_ngay
			// 
			this->nut_ngay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_ngay.BackgroundImage")));
			this->nut_ngay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_ngay->FlatAppearance->BorderSize = 0;
			this->nut_ngay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_ngay->Location = System::Drawing::Point(12, 130);
			this->nut_ngay->Name = L"nut_ngay";
			this->nut_ngay->Size = System::Drawing::Size(62, 60);
			this->nut_ngay->TabIndex = 23;
			this->nut_ngay->UseVisualStyleBackColor = true;
			this->nut_ngay->Click += gcnew System::EventHandler(this, &Form3::nut_ngay_Click);
			// 
			// denphongngu
			// 
			this->denphongngu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"denphongngu.BackgroundImage")));
			this->denphongngu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->denphongngu->Location = System::Drawing::Point(332, 241);
			this->denphongngu->Name = L"denphongngu";
			this->denphongngu->Size = System::Drawing::Size(110, 97);
			this->denphongngu->TabIndex = 6;
			this->denphongngu->TabStop = false;
			this->denphongngu->Click += gcnew System::EventHandler(this, &Form3::denphongngu_Click);
			// 
			// quatn
			// 
			this->quatn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quatn.BackgroundImage")));
			this->quatn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->quatn->Location = System::Drawing::Point(332, 421);
			this->quatn->Name = L"quatn";
			this->quatn->Size = System::Drawing::Size(110, 97);
			this->quatn->TabIndex = 7;
			this->quatn->TabStop = false;
			// 
			// denngu
			// 
			this->denngu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"denngu.BackgroundImage")));
			this->denngu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->denngu->Location = System::Drawing::Point(561, 241);
			this->denngu->Name = L"denngu";
			this->denngu->Size = System::Drawing::Size(110, 97);
			this->denngu->TabIndex = 8;
			this->denngu->TabStop = false;
			// 
			// nut_denn
			// 
			this->nut_denn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_denn.BackgroundImage")));
			this->nut_denn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_denn->FlatAppearance->BorderSize = 0;
			this->nut_denn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_denn->Location = System::Drawing::Point(251, 274);
			this->nut_denn->Name = L"nut_denn";
			this->nut_denn->Size = System::Drawing::Size(75, 64);
			this->nut_denn->TabIndex = 9;
			this->nut_denn->UseVisualStyleBackColor = true;
			this->nut_denn->Click += gcnew System::EventHandler(this, &Form3::nut_denn_Click);
			// 
			// textden
			// 
			this->textden->AutoSize = true;
			this->textden->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textden->ForeColor = System::Drawing::Color::Red;
			this->textden->Location = System::Drawing::Point(250, 241);
			this->textden->Name = L"textden";
			this->textden->Size = System::Drawing::Size(76, 35);
			this->textden->TabIndex = 12;
			this->textden->Text = L"OFF";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gold;
			this->label6->Location = System::Drawing::Point(304, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 38);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Đèn";
			// 
			// nut_denngu
			// 
			this->nut_denngu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_denngu.BackgroundImage")));
			this->nut_denngu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_denngu->FlatAppearance->BorderSize = 0;
			this->nut_denngu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_denngu->Location = System::Drawing::Point(480, 274);
			this->nut_denngu->Name = L"nut_denngu";
			this->nut_denngu->Size = System::Drawing::Size(75, 64);
			this->nut_denngu->TabIndex = 17;
			this->nut_denngu->UseVisualStyleBackColor = true;
			this->nut_denngu->Click += gcnew System::EventHandler(this, &Form3::nut_denngu_Click);
			// 
			// textdenn
			// 
			this->textdenn->AutoSize = true;
			this->textdenn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdenn->ForeColor = System::Drawing::Color::Red;
			this->textdenn->Location = System::Drawing::Point(474, 241);
			this->textdenn->Name = L"textdenn";
			this->textdenn->Size = System::Drawing::Size(76, 35);
			this->textdenn->TabIndex = 18;
			this->textdenn->Text = L"OFF";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(523, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 38);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Đèn ngủ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(304, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 38);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Quạt";
			// 
			// textquat
			// 
			this->textquat->AutoSize = true;
			this->textquat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textquat->ForeColor = System::Drawing::Color::Red;
			this->textquat->Location = System::Drawing::Point(250, 421);
			this->textquat->Name = L"textquat";
			this->textquat->Size = System::Drawing::Size(76, 35);
			this->textquat->TabIndex = 21;
			this->textquat->Text = L"OFF";
			// 
			// nut_quatn
			// 
			this->nut_quatn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_quatn.BackgroundImage")));
			this->nut_quatn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_quatn->FlatAppearance->BorderSize = 0;
			this->nut_quatn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_quatn->Location = System::Drawing::Point(251, 454);
			this->nut_quatn->Name = L"nut_quatn";
			this->nut_quatn->Size = System::Drawing::Size(75, 64);
			this->nut_quatn->TabIndex = 22;
			this->nut_quatn->UseVisualStyleBackColor = true;
			this->nut_quatn->Click += gcnew System::EventHandler(this, &Form3::nut_quatn_Click);
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
			this->panel2->TabIndex = 23;
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form3::Form3_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form3::Form3_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form3::Form3_MouseUp);
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
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
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
			this->panel3->TabIndex = 24;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Teal;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(1009, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(11, 565);
			this->panel4->TabIndex = 25;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Teal;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->Location = System::Drawing::Point(10, 599);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(999, 11);
			this->panel5->TabIndex = 26;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Indigo;
			this->ClientSize = System::Drawing::Size(1020, 610);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->nut_quatn);
			this->Controls->Add(this->textquat);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textdenn);
			this->Controls->Add(this->nut_denngu);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textden);
			this->Controls->Add(this->nut_denn);
			this->Controls->Add(this->denngu);
			this->Controls->Add(this->quatn);
			this->Controls->Add(this->denphongngu);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PHÒNG NGỦ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denphongngu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denngu))->EndInit();
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
private: void batdenngu(Button^ congtac, Label^ trangthai, PictureBox^ anh)
{
	congtac->BackgroundImage = Image::FromFile("congtacbat.png");
	trangthai->ForeColor = System::Drawing::Color::Green;
	trangthai->Text = L"ON";
	anh->BackgroundImage = Image::FromFile("denngubat.png");

}
private: void tatdenngu(Button^ congtac, Label^ trangthai, PictureBox^ anh)
{
	congtac->BackgroundImage = Image::FromFile("congtacdong.png");
	trangthai->ForeColor = System::Drawing::Color::Red;
	trangthai->Text = L"OFF";
	anh->BackgroundImage = Image::FromFile("denngutat.png");
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
		tatden(nut_denn, textden, denphongngu);
		tatdenngu(nut_denngu, textdenn, denngu);
		tatquat(nut_quatn, textquat, quatn);
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
		batden(nut_denn, textden, denphongngu);
		tatdenngu(nut_denngu, textdenn, denngu);
		batquat(nut_quatn, textquat, quatn);
		x = true;
		y = false;
		z = true;
		b = true;
	}
}

private: void chucnangkhuya()
{
	if (c == false)
	{
		nut_khuya->BackgroundImage = Image::FromFile("congtacbat.png");
		tatden(nut_denn, textden, denphongngu);
		batdenngu(nut_denngu, textdenn, denngu);
		batquat(nut_quatn, textquat, quatn);
		x = false;
		y = true;
		z = true;
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
	if (a == true || b == true || c == true) { f =true; }
	else { f = false; }
	nut_tuychinh->BackgroundImage = Image::FromFile("congtacbat.png");
	d = true;
	checktrangthai4();
}

private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void nut_denn_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now); }
	if (x == false)
	{
		batden(nut_denn, textden, denphongngu);
		x = true;
		output_file->WriteLine("Den duoc bat trong phong ngu " + now);
	}
	else if (x == true)
	{
		tatden(nut_denn, textden, denphongngu);
		x = false;
		output_file->WriteLine("Den duoc tat trong phong ngu " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}
private: System::Void nut_quatn_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now); }
	if (z == false)
	{
		batquat(nut_quatn, textquat, quatn);
		z = true;
		output_file->WriteLine("Quat duoc bat trong phong ngu luc " + now);
	}
	else if (z == true)
	{
		tatquat(nut_quatn, textquat, quatn);
		z = false;
		output_file->WriteLine("Quat duoc tat trong phong ngu luc " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}
private: System::Void nut_denngu_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now); }
	if (y == false)
	{
		batdenngu(nut_denngu, textdenn, denngu);
		y = true;
		output_file->WriteLine("Den ngu duoc bat trong phong ngu luc" + now);

	}
	else if (y == true)
	{
		tatdenngu(nut_denngu, textdenn, denngu);
		y = false;
		output_file->WriteLine("Den ngu duoc tat trong phong ngu luc" + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
	
}
private: System::Void nut_ngay_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	chucnangngay();
	checktrangthai1();
	output_file->WriteLine("**Che do ban ngay duoc bat o phong ngu luc " + now);
	output_file->WriteLine("--Tat ca cac thiet bi trong phong ngu tat--");
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
	output_file->WriteLine("**Che do ban dem duoc bat o phong ngu luc " + now);
	output_file->WriteLine("--Quat vaf den duoc bat, cac thiet bi khac o phong ngu tat--");
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
	output_file->WriteLine("**Che do khuya duoc bat o phong ngu luc " + now);
	output_file->WriteLine("--Den ngu duoc bat, cac thiet bi con lai trong phong ngu tat--");
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
	output_file->WriteLine("**Che do tuy chinh duoc bat o phong ngu luc " + now);
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}
private: System::Void denphongngu_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void Form3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}

private: System::Void Form3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = false; //this bool is awesome
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
