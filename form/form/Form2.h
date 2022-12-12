#pragma once
#include"stdafx.h"
#include "Form3.h"
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
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(System::Windows::Forms::Form^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ denkhach1;
	private: System::Windows::Forms::PictureBox^ denkhach2;
	private: System::Windows::Forms::PictureBox^ quatkhach1;
	private: System::Windows::Forms::PictureBox^ quatkhach2;
	private: System::Windows::Forms::Button^ nut_denk1;
	private: System::Windows::Forms::Button^ nut_denk2;



	private: System::Windows::Forms::Button^ nut_quatk1;
	private: System::Windows::Forms::Button^ nut_quatk2;



	private: System::Windows::Forms::Label^ textdenk1;
	private: System::Windows::Forms::Label^ textdenk2;
	private: System::Windows::Forms::Label^ textquatk2;
	private: System::Windows::Forms::Label^ textquatk1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ nut_tuychinh;
	private: System::Windows::Forms::Button^ nut_khuya;
	private: System::Windows::Forms::Button^ nut_dem;
	private: System::Windows::Forms::Button^ nut_ngay;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Button^ button2;
	



	public: bool a, b, c, d, f, x, y, z, w;

	public:





	public:







	public:
	private: System::Windows::Forms::Form^ otherform;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->denkhach1 = (gcnew System::Windows::Forms::PictureBox());
			this->denkhach2 = (gcnew System::Windows::Forms::PictureBox());
			this->quatkhach1 = (gcnew System::Windows::Forms::PictureBox());
			this->quatkhach2 = (gcnew System::Windows::Forms::PictureBox());
			this->nut_denk1 = (gcnew System::Windows::Forms::Button());
			this->nut_denk2 = (gcnew System::Windows::Forms::Button());
			this->nut_quatk1 = (gcnew System::Windows::Forms::Button());
			this->nut_quatk2 = (gcnew System::Windows::Forms::Button());
			this->textdenk1 = (gcnew System::Windows::Forms::Label());
			this->textdenk2 = (gcnew System::Windows::Forms::Label());
			this->textquatk2 = (gcnew System::Windows::Forms::Label());
			this->textquatk1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->nut_tuychinh = (gcnew System::Windows::Forms::Button());
			this->nut_khuya = (gcnew System::Windows::Forms::Button());
			this->nut_dem = (gcnew System::Windows::Forms::Button());
			this->nut_ngay = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denkhach1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denkhach2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatkhach1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatkhach2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MidnightBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, -2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 81);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Quay lại trang chủ";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(740, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 114);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PHÒNG \r\nKHÁCH";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(709, 269);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 247);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// denkhach1
			// 
			this->denkhach1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"denkhach1.BackgroundImage")));
			this->denkhach1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->denkhach1->Location = System::Drawing::Point(342, 196);
			this->denkhach1->Name = L"denkhach1";
			this->denkhach1->Size = System::Drawing::Size(110, 97);
			this->denkhach1->TabIndex = 3;
			this->denkhach1->TabStop = false;
			this->denkhach1->Click += gcnew System::EventHandler(this, &Form2::denkhach1_Click);
			// 
			// denkhach2
			// 
			this->denkhach2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"denkhach2.BackgroundImage")));
			this->denkhach2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->denkhach2->Location = System::Drawing::Point(342, 409);
			this->denkhach2->Name = L"denkhach2";
			this->denkhach2->Size = System::Drawing::Size(110, 101);
			this->denkhach2->TabIndex = 4;
			this->denkhach2->TabStop = false;
			// 
			// quatkhach1
			// 
			this->quatkhach1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quatkhach1.BackgroundImage")));
			this->quatkhach1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->quatkhach1->Location = System::Drawing::Point(573, 196);
			this->quatkhach1->Name = L"quatkhach1";
			this->quatkhach1->Size = System::Drawing::Size(100, 97);
			this->quatkhach1->TabIndex = 5;
			this->quatkhach1->TabStop = false;
			// 
			// quatkhach2
			// 
			this->quatkhach2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quatkhach2.BackgroundImage")));
			this->quatkhach2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->quatkhach2->Location = System::Drawing::Point(573, 409);
			this->quatkhach2->Name = L"quatkhach2";
			this->quatkhach2->Size = System::Drawing::Size(100, 101);
			this->quatkhach2->TabIndex = 6;
			this->quatkhach2->TabStop = false;
			// 
			// nut_denk1
			// 
			this->nut_denk1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_denk1.BackgroundImage")));
			this->nut_denk1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_denk1->FlatAppearance->BorderSize = 0;
			this->nut_denk1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_denk1->Location = System::Drawing::Point(261, 229);
			this->nut_denk1->Name = L"nut_denk1";
			this->nut_denk1->Size = System::Drawing::Size(75, 64);
			this->nut_denk1->TabIndex = 7;
			this->nut_denk1->UseVisualStyleBackColor = true;
			this->nut_denk1->Click += gcnew System::EventHandler(this, &Form2::nut_denk1_Click);
			// 
			// nut_denk2
			// 
			this->nut_denk2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_denk2.BackgroundImage")));
			this->nut_denk2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_denk2->FlatAppearance->BorderSize = 0;
			this->nut_denk2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_denk2->Location = System::Drawing::Point(261, 446);
			this->nut_denk2->Name = L"nut_denk2";
			this->nut_denk2->Size = System::Drawing::Size(75, 64);
			this->nut_denk2->TabIndex = 8;
			this->nut_denk2->UseVisualStyleBackColor = true;
			this->nut_denk2->Click += gcnew System::EventHandler(this, &Form2::nut_denk2_Click);
			// 
			// nut_quatk1
			// 
			this->nut_quatk1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_quatk1.BackgroundImage")));
			this->nut_quatk1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_quatk1->FlatAppearance->BorderSize = 0;
			this->nut_quatk1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_quatk1->Location = System::Drawing::Point(492, 229);
			this->nut_quatk1->Name = L"nut_quatk1";
			this->nut_quatk1->Size = System::Drawing::Size(75, 64);
			this->nut_quatk1->TabIndex = 9;
			this->nut_quatk1->UseVisualStyleBackColor = true;
			this->nut_quatk1->Click += gcnew System::EventHandler(this, &Form2::nut_quatk1_Click);
			// 
			// nut_quatk2
			// 
			this->nut_quatk2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nut_quatk2.BackgroundImage")));
			this->nut_quatk2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nut_quatk2->FlatAppearance->BorderSize = 0;
			this->nut_quatk2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nut_quatk2->Location = System::Drawing::Point(492, 446);
			this->nut_quatk2->Name = L"nut_quatk2";
			this->nut_quatk2->Size = System::Drawing::Size(75, 64);
			this->nut_quatk2->TabIndex = 10;
			this->nut_quatk2->UseVisualStyleBackColor = true;
			this->nut_quatk2->Click += gcnew System::EventHandler(this, &Form2::nut_quatk2_Click);
			// 
			// textdenk1
			// 
			this->textdenk1->AutoSize = true;
			this->textdenk1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdenk1->ForeColor = System::Drawing::Color::Red;
			this->textdenk1->Location = System::Drawing::Point(260, 196);
			this->textdenk1->Name = L"textdenk1";
			this->textdenk1->Size = System::Drawing::Size(76, 35);
			this->textdenk1->TabIndex = 11;
			this->textdenk1->Text = L"OFF";
			// 
			// textdenk2
			// 
			this->textdenk2->AutoSize = true;
			this->textdenk2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdenk2->ForeColor = System::Drawing::Color::Red;
			this->textdenk2->Location = System::Drawing::Point(260, 409);
			this->textdenk2->Name = L"textdenk2";
			this->textdenk2->Size = System::Drawing::Size(76, 35);
			this->textdenk2->TabIndex = 12;
			this->textdenk2->Text = L"OFF";
			// 
			// textquatk2
			// 
			this->textquatk2->AutoSize = true;
			this->textquatk2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textquatk2->ForeColor = System::Drawing::Color::Red;
			this->textquatk2->Location = System::Drawing::Point(491, 409);
			this->textquatk2->Name = L"textquatk2";
			this->textquatk2->Size = System::Drawing::Size(76, 35);
			this->textquatk2->TabIndex = 13;
			this->textquatk2->Text = L"OFF";
			// 
			// textquatk1
			// 
			this->textquatk1->AutoSize = true;
			this->textquatk1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textquatk1->ForeColor = System::Drawing::Color::Red;
			this->textquatk1->Location = System::Drawing::Point(491, 196);
			this->textquatk1->Name = L"textquatk1";
			this->textquatk1->Size = System::Drawing::Size(76, 35);
			this->textquatk1->TabIndex = 14;
			this->textquatk1->Text = L"OFF";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(312, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 38);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Đèn 1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(322, 368);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 38);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Đèn 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(534, 155);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 38);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Quạt 1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(534, 368);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 38);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Quạt 2";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkRed;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
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
			this->panel1->TabIndex = 19;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Chế độ ban ngày";
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
			this->nut_tuychinh->Click += gcnew System::EventHandler(this, &Form2::nut_tuychinh_Click);
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
			this->nut_khuya->Click += gcnew System::EventHandler(this, &Form2::nut_khuya_Click);
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
			this->nut_dem->Click += gcnew System::EventHandler(this, &Form2::nut_dem_Click);
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
			this->nut_ngay->Click += gcnew System::EventHandler(this, &Form2::nut_ngay_Click);
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
			this->panel2->TabIndex = 20;
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::Form2_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::Form2_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::Form2_MouseUp);
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
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
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
			this->panel3->TabIndex = 21;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Teal;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(1009, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(11, 565);
			this->panel4->TabIndex = 22;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Teal;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->Location = System::Drawing::Point(10, 599);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(999, 11);
			this->panel5->TabIndex = 23;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->ClientSize = System::Drawing::Size(1020, 610);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textquatk1);
			this->Controls->Add(this->textquatk2);
			this->Controls->Add(this->textdenk2);
			this->Controls->Add(this->textdenk1);
			this->Controls->Add(this->nut_quatk2);
			this->Controls->Add(this->nut_quatk1);
			this->Controls->Add(this->nut_denk2);
			this->Controls->Add(this->nut_denk1);
			this->Controls->Add(this->quatkhach2);
			this->Controls->Add(this->quatkhach1);
			this->Controls->Add(this->denkhach2);
			this->Controls->Add(this->denkhach1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PHÒNG KHÁCH ";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denkhach1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->denkhach2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatkhach1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quatkhach2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
		tatden(nut_denk1, textdenk1, denkhach1);
		tatden(nut_denk2, textdenk2, denkhach2);
		batquat(nut_quatk1, textquatk1, quatkhach1);
		batquat(nut_quatk2, textquatk2, quatkhach2);
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
		batden(nut_denk1, textdenk1, denkhach1);
		batden(nut_denk2, textdenk2, denkhach2);
		batquat(nut_quatk1, textquatk1, quatkhach1);
		tatquat(nut_quatk2, textquatk2, quatkhach2);
		x = true;
		y = true;
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
		tatden(nut_denk1, textdenk1, denkhach1);
		tatden(nut_denk2, textdenk2, denkhach2);
		tatquat(nut_quatk1, textquatk1, quatkhach1);
		tatquat(nut_quatk2, textquatk2, quatkhach2);
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
	if (a == true || b == true || c == true) { f =true; }
	else { f = false; }
	d = true;
	checktrangthai4();
	nut_tuychinh->BackgroundImage = Image::FromFile("congtacbat.png");
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	a = false;
	b = false;
	c = false;
	d = false;
	x = false;
	y = false;
	z = false;
	w = false;
	this->dragging = false;
}
private: System::Void nut_denk1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now); }
	if (x == false)
	{
		batden(nut_denk1, textdenk1, denkhach1);
		x = true;
		output_file->WriteLine("Den 1 duoc bat trong phong khach luc " + now);
	}
	else if (x == true)
	{
		tatden(nut_denk1, textdenk1, denkhach1);
		x = false;
		output_file->WriteLine("Den 1 duoc tat trong phong khach luc " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
	
}

private: System::Void nut_denk2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now); }
	if (y == false)
	{
		batden(nut_denk2, textdenk2, denkhach2);
		y = true;
		output_file->WriteLine("Den 2 duoc bat trong phong khach luc " + now);
	}
	else if (y == true)
	{
		tatden(nut_denk2, textdenk2, denkhach2);
		y = false;
		output_file->WriteLine("Den 2 duoc tat trong phong khach luc " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
}

private: System::Void nut_quatk1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now); }
	if (z == false)
	{
		batquat(nut_quatk1, textquatk1, quatkhach1);
		z = true;
		output_file->WriteLine("Quat 1 duoc bat trong phong khach luc " + now);
	}
	else if (z == true)
	{
		tatquat(nut_quatk1, textquatk1, quatkhach1);
		z = false;
		output_file->WriteLine("Quat 1 duoc tat trong phong khach luc " + now);
	}
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}

}

private: System::Void nut_quatk2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ input_file = File::OpenText("LICHSU.txt");
	StreamWriter^ output_file = File::AppendText("LICHSU.txt.out");
	DateTime now = DateTime::Now;
	batnuttuychinh();
	if (f == true) { output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now); }
	if (w == false)
	{
		batquat(nut_quatk2, textquatk2, quatkhach2);
		w = true;
		output_file->WriteLine("Quat 2 duoc bat trong phong khach luc " + now);
	}
	else if (w == true)
	{
		tatquat(nut_quatk2, textquatk2, quatkhach2);
		w = false;
		output_file->WriteLine("Quat 2 duoc tat trong phong khach luc " + now);
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
	output_file->WriteLine("--Quat 1 va 2 duoc bat, cac thiet bi khac o phong khach tat--");
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
	output_file->WriteLine("--Quat 1, den 1, den 2 duoc bat, cac thiet bi khac o phong khach tat--");
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
	output_file->WriteLine("**Che do khuya duoc bat o phong khach luc " + now);
	output_file->WriteLine("--Tat ca cac thiet bi khac trong phong khach tat--");
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
	output_file->WriteLine("**Che do tuy chinh duoc bat o phong khach luc " + now);
	if (input_file)
	{
		input_file->Close();
		output_file->Close();
	}
	
}
private: System::Void Form2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}

private: System::Void Form2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}

private: System::Void Form2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->dragging = false; //this bool is awesome
}
private: System::Void denkhach1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form2::Close();
	Application::Exit();
}
};
}
