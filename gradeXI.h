#include "gradeXII.h"
#pragma once
namespace ScienceFriction {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gradeXI
	/// </summary>
	public ref class gradeXI : public System::Windows::Forms::Form
	{
	public:
		gradeXI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gradeXI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ general;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ heatandthermo;
	private: System::Windows::Forms::Panel^ mechanics;
	private: System::Windows::Forms::Panel^ Optics;
	private: System::Windows::Forms::Panel^ Electrostatics;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ mechanics1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;

	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ pictureBox28;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gradeXI::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Optics = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->general = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->heatandthermo = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Electrostatics = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->mechanics = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->mechanics1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Optics->SuspendLayout();
			this->general->SuspendLayout();
			this->heatandthermo->SuspendLayout();
			this->Electrostatics->SuspendLayout();
			this->mechanics->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &gradeXI::panel1_Paint);
			// 
			// pictureBox8
			// 
			resources->ApplyResources(this->pictureBox8, L"pictureBox8");
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->TabStop = false;
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Name = L"label5";
			// 
			// pictureBox7
			// 
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &gradeXI::pictureBox7_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &gradeXI::pictureBox1_Click);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &gradeXI::label4_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::Color::Brown;
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &gradeXI::label1_Click);
			// 
			// panel2
			// 
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Name = L"panel2";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Name = L"label9";
			this->label9->Click += gcnew System::EventHandler(this, &gradeXI::label9_Click);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Name = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &gradeXI::label8_Click);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Name = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &gradeXI::label7_Click);
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Name = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &gradeXI::label6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &gradeXI::pictureBox2_Click);
			// 
			// Optics
			// 
			resources->ApplyResources(this->Optics, L"Optics");
			this->Optics->Controls->Add(this->pictureBox32);
			this->Optics->Controls->Add(this->pictureBox31);
			this->Optics->Controls->Add(this->pictureBox30);
			this->Optics->Controls->Add(this->pictureBox29);
			this->Optics->Controls->Add(this->pictureBox28);
			this->Optics->Controls->Add(this->label33);
			this->Optics->Controls->Add(this->label32);
			this->Optics->Controls->Add(this->label31);
			this->Optics->Controls->Add(this->label10);
			this->Optics->Controls->Add(this->label30);
			this->Optics->Controls->Add(this->label18);
			this->Optics->Name = L"Optics";
			// 
			// label33
			// 
			resources->ApplyResources(this->label33, L"label33");
			this->label33->Name = L"label33";
			// 
			// label32
			// 
			resources->ApplyResources(this->label32, L"label32");
			this->label32->Name = L"label32";
			this->label32->Click += gcnew System::EventHandler(this, &gradeXI::label32_Click);
			// 
			// label31
			// 
			resources->ApplyResources(this->label31, L"label31");
			this->label31->Name = L"label31";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// label30
			// 
			resources->ApplyResources(this->label30, L"label30");
			this->label30->Name = L"label30";
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->Name = L"label18";
			// 
			// general
			// 
			resources->ApplyResources(this->general, L"general");
			this->general->Controls->Add(this->pictureBox6);
			this->general->Controls->Add(this->pictureBox11);
			this->general->Controls->Add(this->pictureBox10);
			this->general->Controls->Add(this->pictureBox9);
			this->general->Controls->Add(this->label37);
			this->general->Controls->Add(this->label36);
			this->general->Controls->Add(this->label35);
			this->general->Controls->Add(this->label34);
			this->general->Controls->Add(this->label19);
			this->general->Name = L"general";
			this->general->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &gradeXI::panel3_Paint);
			// 
			// label19
			// 
			resources->ApplyResources(this->label19, L"label19");
			this->label19->Name = L"label19";
			this->label19->Click += gcnew System::EventHandler(this, &gradeXI::label6_Click);
			// 
			// heatandthermo
			// 
			resources->ApplyResources(this->heatandthermo, L"heatandthermo");
			this->heatandthermo->Controls->Add(this->pictureBox17);
			this->heatandthermo->Controls->Add(this->pictureBox16);
			this->heatandthermo->Controls->Add(this->pictureBox15);
			this->heatandthermo->Controls->Add(this->pictureBox14);
			this->heatandthermo->Controls->Add(this->pictureBox13);
			this->heatandthermo->Controls->Add(this->label24);
			this->heatandthermo->Controls->Add(this->label22);
			this->heatandthermo->Controls->Add(this->label21);
			this->heatandthermo->Controls->Add(this->label20);
			this->heatandthermo->Controls->Add(this->label17);
			this->heatandthermo->Controls->Add(this->label23);
			this->heatandthermo->Name = L"heatandthermo";
			// 
			// label24
			// 
			resources->ApplyResources(this->label24, L"label24");
			this->label24->Name = L"label24";
			// 
			// label22
			// 
			resources->ApplyResources(this->label22, L"label22");
			this->label22->Name = L"label22";
			// 
			// label21
			// 
			resources->ApplyResources(this->label21, L"label21");
			this->label21->Name = L"label21";
			// 
			// label20
			// 
			resources->ApplyResources(this->label20, L"label20");
			this->label20->Name = L"label20";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->Name = L"label17";
			// 
			// label23
			// 
			resources->ApplyResources(this->label23, L"label23");
			this->label23->Name = L"label23";
			this->label23->Click += gcnew System::EventHandler(this, &gradeXI::label23_Click);
			// 
			// Electrostatics
			// 
			resources->ApplyResources(this->Electrostatics, L"Electrostatics");
			this->Electrostatics->Controls->Add(this->pictureBox22);
			this->Electrostatics->Controls->Add(this->pictureBox21);
			this->Electrostatics->Controls->Add(this->pictureBox20);
			this->Electrostatics->Controls->Add(this->pictureBox19);
			this->Electrostatics->Controls->Add(this->pictureBox18);
			this->Electrostatics->Controls->Add(this->label29);
			this->Electrostatics->Controls->Add(this->label28);
			this->Electrostatics->Controls->Add(this->label27);
			this->Electrostatics->Controls->Add(this->label26);
			this->Electrostatics->Controls->Add(this->label25);
			this->Electrostatics->Controls->Add(this->label16);
			this->Electrostatics->Name = L"Electrostatics";
			// 
			// label29
			// 
			resources->ApplyResources(this->label29, L"label29");
			this->label29->Name = L"label29";
			this->label29->Click += gcnew System::EventHandler(this, &gradeXI::label29_Click);
			// 
			// label28
			// 
			resources->ApplyResources(this->label28, L"label28");
			this->label28->Name = L"label28";
			this->label28->Click += gcnew System::EventHandler(this, &gradeXI::label28_Click);
			// 
			// label27
			// 
			resources->ApplyResources(this->label27, L"label27");
			this->label27->Name = L"label27";
			// 
			// label26
			// 
			resources->ApplyResources(this->label26, L"label26");
			this->label26->Name = L"label26";
			// 
			// label25
			// 
			resources->ApplyResources(this->label25, L"label25");
			this->label25->Name = L"label25";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// mechanics
			// 
			resources->ApplyResources(this->mechanics, L"mechanics");
			this->mechanics->Controls->Add(this->pictureBox27);
			this->mechanics->Controls->Add(this->pictureBox26);
			this->mechanics->Controls->Add(this->pictureBox25);
			this->mechanics->Controls->Add(this->pictureBox24);
			this->mechanics->Controls->Add(this->pictureBox23);
			this->mechanics->Controls->Add(this->label15);
			this->mechanics->Controls->Add(this->label14);
			this->mechanics->Controls->Add(this->label13);
			this->mechanics->Controls->Add(this->label12);
			this->mechanics->Controls->Add(this->label11);
			this->mechanics->Controls->Add(this->mechanics1);
			this->mechanics->Name = L"mechanics";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->Name = L"label15";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			this->label14->Click += gcnew System::EventHandler(this, &gradeXI::label14_Click);
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			this->label13->Click += gcnew System::EventHandler(this, &gradeXI::label13_Click);
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->Name = L"label12";
			this->label12->Click += gcnew System::EventHandler(this, &gradeXI::label12_Click);
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// mechanics1
			// 
			resources->ApplyResources(this->mechanics1, L"mechanics1");
			this->mechanics1->Name = L"mechanics1";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gradeXI::button1_Click);
			// 
			// linkLabel3
			// 
			resources->ApplyResources(this->linkLabel3, L"linkLabel3");
			this->linkLabel3->LinkColor = System::Drawing::Color::IndianRed;
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->TabStop = true;
			// 
			// linkLabel2
			// 
			resources->ApplyResources(this->linkLabel2, L"linkLabel2");
			this->linkLabel2->LinkColor = System::Drawing::Color::IndianRed;
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->TabStop = true;
			// 
			// linkLabel1
			// 
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->LinkColor = System::Drawing::Color::IndianRed;
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			// 
			// label34
			// 
			resources->ApplyResources(this->label34, L"label34");
			this->label34->Name = L"label34";
			// 
			// label35
			// 
			resources->ApplyResources(this->label35, L"label35");
			this->label35->Name = L"label35";
			this->label35->Click += gcnew System::EventHandler(this, &gradeXI::label35_Click);
			// 
			// label36
			// 
			resources->ApplyResources(this->label36, L"label36");
			this->label36->Name = L"label36";
			// 
			// label37
			// 
			resources->ApplyResources(this->label37, L"label37");
			this->label37->Name = L"label37";
			this->label37->Click += gcnew System::EventHandler(this, &gradeXI::label37_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->mechanics);
			this->panel3->Controls->Add(this->Optics);
			this->panel3->Controls->Add(this->general);
			this->panel3->Controls->Add(this->heatandthermo);
			this->panel3->Controls->Add(this->Electrostatics);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox9
			// 
			resources->ApplyResources(this->pictureBox9, L"pictureBox9");
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &gradeXI::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			resources->ApplyResources(this->pictureBox10, L"pictureBox10");
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox13
			// 
			resources->ApplyResources(this->pictureBox13, L"pictureBox13");
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			resources->ApplyResources(this->pictureBox14, L"pictureBox14");
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			resources->ApplyResources(this->pictureBox15, L"pictureBox15");
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			resources->ApplyResources(this->pictureBox16, L"pictureBox16");
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			resources->ApplyResources(this->pictureBox17, L"pictureBox17");
			this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			resources->ApplyResources(this->pictureBox18, L"pictureBox18");
			this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			resources->ApplyResources(this->pictureBox19, L"pictureBox19");
			this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			resources->ApplyResources(this->pictureBox20, L"pictureBox20");
			this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			resources->ApplyResources(this->pictureBox21, L"pictureBox21");
			this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			resources->ApplyResources(this->pictureBox22, L"pictureBox22");
			this->pictureBox22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			resources->ApplyResources(this->pictureBox23, L"pictureBox23");
			this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &gradeXI::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			resources->ApplyResources(this->pictureBox24, L"pictureBox24");
			this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &gradeXI::pictureBox24_Click);
			// 
			// pictureBox25
			// 
			resources->ApplyResources(this->pictureBox25, L"pictureBox25");
			this->pictureBox25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			resources->ApplyResources(this->pictureBox26, L"pictureBox26");
			this->pictureBox26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			resources->ApplyResources(this->pictureBox27, L"pictureBox27");
			this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			resources->ApplyResources(this->pictureBox28, L"pictureBox28");
			this->pictureBox28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			resources->ApplyResources(this->pictureBox29, L"pictureBox29");
			this->pictureBox29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			resources->ApplyResources(this->pictureBox30, L"pictureBox30");
			this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			resources->ApplyResources(this->pictureBox31, L"pictureBox31");
			this->pictureBox31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			resources->ApplyResources(this->pictureBox32, L"pictureBox32");
			this->pictureBox32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->TabStop = false;
			// 
			// gradeXI
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"gradeXI";
			this->Opacity = 0.95;
			this->Load += gcnew System::EventHandler(this, &gradeXI::gradeXI_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Optics->ResumeLayout(false);
			this->Optics->PerformLayout();
			this->general->ResumeLayout(false);
			this->general->PerformLayout();
			this->heatandthermo->ResumeLayout(false);
			this->heatandthermo->PerformLayout();
			this->Electrostatics->ResumeLayout(false);
			this->Electrostatics->PerformLayout();
			this->mechanics->ResumeLayout(false);
			this->mechanics->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gradeXI_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	gradeXII^ gxii = gcnew gradeXII();
	gxii->Show();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mechanics->Enabled = true;
	this->mechanics->Visible = true;

	this->Electrostatics->Enabled = false;
	this->Electrostatics->Visible = false;

	this->heatandthermo->Enabled = false;
	this->heatandthermo->Visible = false;

	this->Optics->Enabled = false;
	this->Optics->Visible = false;

	this->general->Enabled = false;
	this->general->Visible = false;
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mechanics->Enabled = false;
	this->mechanics->Visible = false;

	this->Electrostatics->Enabled = false;
	this->Electrostatics->Visible = false;

	this->heatandthermo->Enabled = true;
	this->heatandthermo->Visible = true;

	this->Optics->Enabled = false;
	this->Optics->Visible = false;

	this->general->Enabled = false;
	this->general->Visible = false;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mechanics->Enabled = false;
	this->mechanics->Visible = false;

	this->Electrostatics->Enabled = false;
	this->Electrostatics->Visible = false;

	this->heatandthermo->Enabled = false;
	this->heatandthermo->Visible = false;

	this->Optics->Enabled = true;
	this->Optics->Visible = true;

	this->general->Enabled = false;
	this->general->Visible = false;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mechanics->Enabled = false;
	this->mechanics->Visible = false;

	this->Electrostatics->Enabled = true;
	this->Electrostatics->Visible = true;

	this->heatandthermo->Enabled = false;
	this->heatandthermo->Visible = false;

	this->Optics->Enabled = false;
	this->Optics->Visible = false;

	this->general->Enabled = false;
	this->general->Visible = false;
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
