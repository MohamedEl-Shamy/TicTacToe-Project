#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->buttonsFriend = gcnew array<Button^>(9);
			this->buttonsFriend[0] = this->button14;
			this->buttonsFriend[1] = this->button15;
			this->buttonsFriend[2] = this->button16;
			this->buttonsFriend[3] = this->button17;
			this->buttonsFriend[4] = this->button18;
			this->buttonsFriend[5] = this->button19;
			this->buttonsFriend[6] = this->button20;
			this->buttonsFriend[7] = this->button21;
			this->buttonsFriend[8] = this->button22;

			// Initialization of buttons for AI mode (button23 to button31)
			this->buttonsAI = gcnew array<Button^>(9);
			this->buttonsAI[0] = this->button23;
			this->buttonsAI[1] = this->button24;
			this->buttonsAI[2] = this->button25;
			this->buttonsAI[3] = this->button26;
			this->buttonsAI[4] = this->button27;
			this->buttonsAI[5] = this->button28;
			this->buttonsAI[6] = this->button29;
			this->buttonsAI[7] = this->button30;
			this->buttonsAI[8] = this->button31;

			this->currentPlayer = 'X';

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

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ pn_con_bar;
	private: System::Windows::Forms::Panel^ pn_game_history_bar;
	private: System::Windows::Forms::Panel^ main_page_bar;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pn_login;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ pn_register;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::Panel^ pn_playerFriend;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ pn_playAi;


	protected:

	protected:

	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Button^ button29;


	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button37;

	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Label^ label23;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pn_con_bar = (gcnew System::Windows::Forms::Panel());
			this->main_page_bar = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pn_game_history_bar = (gcnew System::Windows::Forms::Panel());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pn_login = (gcnew System::Windows::Forms::Panel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pn_register = (gcnew System::Windows::Forms::Panel());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pn_playerFriend = (gcnew System::Windows::Forms::Panel());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pn_playAi = (gcnew System::Windows::Forms::Panel());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->pn_con_bar->SuspendLayout();
			this->main_page_bar->SuspendLayout();
			this->pn_game_history_bar->SuspendLayout();
			this->pn_login->SuspendLayout();
			this->pn_register->SuspendLayout();
			this->pn_playerFriend->SuspendLayout();
			this->pn_playAi->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label3->Location = System::Drawing::Point(614, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 58);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Play VS Friend";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->button7);
			this->panel6->Controls->Add(this->button6);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel6->Location = System::Drawing::Point(999, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(5, 524);
			this->panel6->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(32, 373);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(193, 33);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Game History";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(52, 202);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 33);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Main Page";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Transparent;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(4, 279);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(209, 91);
			this->button7->TabIndex = 1;
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Transparent;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->Location = System::Drawing::Point(6, 125);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(208, 74);
			this->button6->TabIndex = 0;
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Controls->Add(this->button4);
			this->panel7->Controls->Add(this->button3);
			this->panel7->Controls->Add(this->button2);
			this->panel7->Controls->Add(this->button1);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(999, 86);
			this->panel7->TabIndex = 8;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(913, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 80);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(178, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 80);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(95, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 80);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 80);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label4->Location = System::Drawing::Point(670, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 50);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Log In";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label5->Location = System::Drawing::Point(253, 353);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 50);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Register";
			// 
			// pn_con_bar
			// 
			this->pn_con_bar->Controls->Add(this->main_page_bar);
			this->pn_con_bar->Controls->Add(this->pn_game_history_bar);
			this->pn_con_bar->Controls->Add(this->pn_login);
			this->pn_con_bar->Controls->Add(this->pn_register);
			this->pn_con_bar->Controls->Add(this->pn_playerFriend);
			this->pn_con_bar->Controls->Add(this->pn_playAi);
			this->pn_con_bar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con_bar->Location = System::Drawing::Point(0, 86);
			this->pn_con_bar->Name = L"pn_con_bar";
			this->pn_con_bar->Size = System::Drawing::Size(999, 438);
			this->pn_con_bar->TabIndex = 15;
			// 
			// main_page_bar
			// 
			this->main_page_bar->BackColor = System::Drawing::Color::Black;
			this->main_page_bar->Controls->Add(this->label2);
			this->main_page_bar->Controls->Add(this->button11);
			this->main_page_bar->Controls->Add(this->button10);
			this->main_page_bar->Controls->Add(this->button9);
			this->main_page_bar->Controls->Add(this->label1);
			this->main_page_bar->Controls->Add(this->button8);
			this->main_page_bar->Controls->Add(this->button5);
			this->main_page_bar->Controls->Add(this->label3);
			this->main_page_bar->Controls->Add(this->label5);
			this->main_page_bar->Controls->Add(this->label4);
			this->main_page_bar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_page_bar->Location = System::Drawing::Point(0, 0);
			this->main_page_bar->Name = L"main_page_bar";
			this->main_page_bar->Size = System::Drawing::Size(999, 438);
			this->main_page_bar->TabIndex = 0;
			this->main_page_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::main_page_bar_Paint);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(431, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 39);
			this->label2->TabIndex = 15;
			this->label2->Text = L"X-O ZONE";
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(438, -1);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(151, 134);
			this->button11->TabIndex = 14;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(376, 332);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(118, 79);
			this->button10->TabIndex = 13;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(773, 328);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 86);
			this->button9->TabIndex = 12;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Location = System::Drawing::Point(257, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"play Vs AI";
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Tomato;
			this->button8->Location = System::Drawing::Point(676, 168);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 51);
			this->button8->TabIndex = 10;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Tomato;
			this->button5->Location = System::Drawing::Point(294, 168);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 51);
			this->button5->TabIndex = 10;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pn_game_history_bar
			// 
			this->pn_game_history_bar->Controls->Add(this->button33);
			this->pn_game_history_bar->Controls->Add(this->textBox4);
			this->pn_game_history_bar->Controls->Add(this->label9);
			this->pn_game_history_bar->Controls->Add(this->textBox3);
			this->pn_game_history_bar->Controls->Add(this->label8);
			this->pn_game_history_bar->Controls->Add(this->textBox2);
			this->pn_game_history_bar->Controls->Add(this->label7);
			this->pn_game_history_bar->Controls->Add(this->textBox1);
			this->pn_game_history_bar->Controls->Add(this->label6);
			this->pn_game_history_bar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_game_history_bar->Location = System::Drawing::Point(0, 0);
			this->pn_game_history_bar->Name = L"pn_game_history_bar";
			this->pn_game_history_bar->Size = System::Drawing::Size(999, 438);
			this->pn_game_history_bar->TabIndex = 1;
			// 
			// button33
			// 
			this->button33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button33->BackColor = System::Drawing::Color::Black;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button33->Location = System::Drawing::Point(12, 326);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(77, 80);
			this->button33->TabIndex = 18;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->Location = System::Drawing::Point(576, 254);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(162, 30);
			this->textBox4->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label9->Location = System::Drawing::Point(344, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 32);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Lost :";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(576, 184);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(162, 30);
			this->textBox3->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label8->Location = System::Drawing::Point(344, 175);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 32);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Draw :";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(576, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 30);
			this->textBox2->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label7->Location = System::Drawing::Point(344, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 32);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Won :";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(576, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 30);
			this->textBox1->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label6->Location = System::Drawing::Point(330, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(207, 32);
			this->label6->TabIndex = 0;
			this->label6->Text = L" played games :";
			// 
			// pn_login
			// 
			this->pn_login->Controls->Add(this->button34);
			this->pn_login->Controls->Add(this->label20);
			this->pn_login->Controls->Add(this->button12);
			this->pn_login->Controls->Add(this->textBox13);
			this->pn_login->Controls->Add(this->label21);
			this->pn_login->Controls->Add(this->textBox14);
			this->pn_login->Controls->Add(this->label22);
			this->pn_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_login->Location = System::Drawing::Point(0, 0);
			this->pn_login->Name = L"pn_login";
			this->pn_login->Size = System::Drawing::Size(999, 438);
			this->pn_login->TabIndex = 3;
			// 
			// button34
			// 
			this->button34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button34->BackColor = System::Drawing::Color::Black;
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button34->Location = System::Drawing::Point(12, 326);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(77, 80);
			this->button34->TabIndex = 18;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label20->Location = System::Drawing::Point(504, 351);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(88, 36);
			this->label20->TabIndex = 13;
			this->label20->Text = L"log in";
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->Location = System::Drawing::Point(497, 273);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(92, 64);
			this->button12->TabIndex = 12;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// textBox13
			// 
			this->textBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox13->BackColor = System::Drawing::Color::White;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(424, 135);
			this->textBox13->Name = L"textBox13";
			this->textBox13->PasswordChar = '*';
			this->textBox13->Size = System::Drawing::Size(342, 36);
			this->textBox13->TabIndex = 10;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label21->Location = System::Drawing::Point(233, 131);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(185, 39);
			this->label21->TabIndex = 8;
			this->label21->Text = L"Password :";
			// 
			// textBox14
			// 
			this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(424, 62);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(342, 36);
			this->textBox14->TabIndex = 11;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Black;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label22->Location = System::Drawing::Point(232, 58);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(154, 48);
			this->label22->TabIndex = 9;
			this->label22->Text = L"Name :";
			// 
			// pn_register
			// 
			this->pn_register->Controls->Add(this->button35);
			this->pn_register->Controls->Add(this->label12);
			this->pn_register->Controls->Add(this->button13);
			this->pn_register->Controls->Add(this->label13);
			this->pn_register->Controls->Add(this->textBox5);
			this->pn_register->Controls->Add(this->label14);
			this->pn_register->Controls->Add(this->textBox6);
			this->pn_register->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_register->Location = System::Drawing::Point(0, 0);
			this->pn_register->Name = L"pn_register";
			this->pn_register->Size = System::Drawing::Size(999, 438);
			this->pn_register->TabIndex = 2;
			// 
			// button35
			// 
			this->button35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button35->BackColor = System::Drawing::Color::Black;
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button35->Location = System::Drawing::Point(12, 326);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(77, 80);
			this->button35->TabIndex = 24;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label12->Location = System::Drawing::Point(475, 372);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(126, 36);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Register";
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->Location = System::Drawing::Point(481, 305);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(92, 64);
			this->button13->TabIndex = 22;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label13->Location = System::Drawing::Point(234, 38);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(126, 39);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Name :";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(427, 116);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(342, 36);
			this->textBox5->TabIndex = 18;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label14->Location = System::Drawing::Point(221, 112);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(185, 39);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Password :";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(427, 42);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(342, 36);
			this->textBox6->TabIndex = 19;
			// 
			// pn_playerFriend
			// 
			this->pn_playerFriend->Controls->Add(this->button36);
			this->pn_playerFriend->Controls->Add(this->button22);
			this->pn_playerFriend->Controls->Add(this->button21);
			this->pn_playerFriend->Controls->Add(this->button20);
			this->pn_playerFriend->Controls->Add(this->button19);
			this->pn_playerFriend->Controls->Add(this->button18);
			this->pn_playerFriend->Controls->Add(this->button17);
			this->pn_playerFriend->Controls->Add(this->button16);
			this->pn_playerFriend->Controls->Add(this->button15);
			this->pn_playerFriend->Controls->Add(this->button14);
			this->pn_playerFriend->Controls->Add(this->label18);
			this->pn_playerFriend->Controls->Add(this->label17);
			this->pn_playerFriend->Controls->Add(this->label16);
			this->pn_playerFriend->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_playerFriend->Location = System::Drawing::Point(0, 0);
			this->pn_playerFriend->Name = L"pn_playerFriend";
			this->pn_playerFriend->Size = System::Drawing::Size(999, 438);
			this->pn_playerFriend->TabIndex = 4;
			this->pn_playerFriend->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_playerAi_Paint);
			// 
			// button36
			// 
			this->button36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button36->BackColor = System::Drawing::Color::Black;
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button36->Location = System::Drawing::Point(12, 326);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(77, 80);
			this->button36->TabIndex = 18;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button22->Location = System::Drawing::Point(564, 271);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(107, 82);
			this->button22->TabIndex = 7;
			this->button22->Tag = L"8";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button21
			// 
			this->button21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button21->Location = System::Drawing::Point(432, 274);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(107, 82);
			this->button21->TabIndex = 6;
			this->button21->Tag = L"7";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button20
			// 
			this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button20->Location = System::Drawing::Point(300, 274);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(107, 82);
			this->button20->TabIndex = 5;
			this->button20->Tag = L"6";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button19->Location = System::Drawing::Point(564, 172);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(107, 82);
			this->button19->TabIndex = 4;
			this->button19->Tag = L"5";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button18->Location = System::Drawing::Point(432, 172);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(107, 82);
			this->button18->TabIndex = 3;
			this->button18->Tag = L"4";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->Location = System::Drawing::Point(300, 172);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(107, 82);
			this->button17->TabIndex = 2;
			this->button17->Tag = L"3";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->Location = System::Drawing::Point(564, 73);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(107, 82);
			this->button16->TabIndex = 1;
			this->button16->Tag = L"2";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->Location = System::Drawing::Point(432, 70);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(107, 82);
			this->button15->TabIndex = 0;
			this->button15->Tag = L"1";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->Location = System::Drawing::Point(300, 70);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(107, 82);
			this->button14->TabIndex = 10;
			this->button14->Tag = L"0";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonClickFriend);
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label18->Location = System::Drawing::Point(430, 383);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(125, 23);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Winner Label";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Black;
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label17->Location = System::Drawing::Point(428, 21);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(240, 23);
			this->label17->TabIndex = 0;
			this->label17->Text = L"currentPlayerSymbolLabel";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label16->Location = System::Drawing::Point(308, 19);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(131, 23);
			this->label16->TabIndex = 1;
			this->label16->Text = L"It\'s your turn, ";
			// 
			// pn_playAi
			// 
			this->pn_playAi->Controls->Add(this->button37);
			this->pn_playAi->Controls->Add(this->label24);
			this->pn_playAi->Controls->Add(this->label23);
			this->pn_playAi->Controls->Add(this->label19);
			this->pn_playAi->Controls->Add(this->button31);
			this->pn_playAi->Controls->Add(this->button30);
			this->pn_playAi->Controls->Add(this->button28);
			this->pn_playAi->Controls->Add(this->button27);
			this->pn_playAi->Controls->Add(this->button29);
			this->pn_playAi->Controls->Add(this->button26);
			this->pn_playAi->Controls->Add(this->button25);
			this->pn_playAi->Controls->Add(this->button24);
			this->pn_playAi->Controls->Add(this->button23);
			this->pn_playAi->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_playAi->Location = System::Drawing::Point(0, 0);
			this->pn_playAi->Name = L"pn_playAi";
			this->pn_playAi->Size = System::Drawing::Size(999, 438);
			this->pn_playAi->TabIndex = 5;
			this->pn_playAi->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_playAi_Paint);
			// 
			// button37
			// 
			this->button37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button37->BackColor = System::Drawing::Color::Black;
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button37->Location = System::Drawing::Point(12, 326);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(77, 80);
			this->button37->TabIndex = 33;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label24->Location = System::Drawing::Point(421, 372);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(125, 23);
			this->label24->TabIndex = 32;
			this->label24->Text = L"Winner Label";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label23->Location = System::Drawing::Point(420, 6);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(73, 23);
			this->label23->TabIndex = 32;
			this->label23->Text = L"label23";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label19->Location = System::Drawing::Point(499, 6);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 23);
			this->label19->TabIndex = 32;
			this->label19->Text = L"VS AI";
			// 
			// button31
			// 
			this->button31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button31->Location = System::Drawing::Point(564, 262);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(107, 82);
			this->button31->TabIndex = 7;
			this->button31->Tag = L"8";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button30
			// 
			this->button30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button30->Location = System::Drawing::Point(430, 262);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(107, 82);
			this->button30->TabIndex = 6;
			this->button30->Tag = L"7";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button28
			// 
			this->button28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button28->Location = System::Drawing::Point(564, 158);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(107, 82);
			this->button28->TabIndex = 4;
			this->button28->Tag = L"5";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button27
			// 
			this->button27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button27->Location = System::Drawing::Point(430, 158);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(107, 82);
			this->button27->TabIndex = 3;
			this->button27->Tag = L"4";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button29
			// 
			this->button29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button29->Location = System::Drawing::Point(296, 260);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(107, 82);
			this->button29->TabIndex = 5;
			this->button29->Tag = L"6";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button26
			// 
			this->button26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button26->Location = System::Drawing::Point(296, 156);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(107, 82);
			this->button26->TabIndex = 2;
			this->button26->Tag = L"3";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button25
			// 
			this->button25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button25->Location = System::Drawing::Point(564, 54);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(107, 82);
			this->button25->TabIndex = 1;
			this->button25->Tag = L"2";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button24
			// 
			this->button24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button24->Location = System::Drawing::Point(430, 54);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(107, 82);
			this->button24->TabIndex = 0;
			this->button24->Tag = L"1";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// button23
			// 
			this->button23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button23->Location = System::Drawing::Point(296, 52);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(107, 82);
			this->button23->TabIndex = 10;
			this->button23->Tag = L"0";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::buttonClickAI);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1004, 524);
			this->Controls->Add(this->pn_con_bar);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->pn_con_bar->ResumeLayout(false);
			this->main_page_bar->ResumeLayout(false);
			this->main_page_bar->PerformLayout();
			this->pn_game_history_bar->ResumeLayout(false);
			this->pn_game_history_bar->PerformLayout();
			this->pn_login->ResumeLayout(false);
			this->pn_login->PerformLayout();
			this->pn_register->ResumeLayout(false);
			this->pn_register->PerformLayout();
			this->pn_playerFriend->ResumeLayout(false);
			this->pn_playerFriend->PerformLayout();
			this->pn_playAi->ResumeLayout(false);
			this->pn_playAi->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:  char currentPlayer;
		   array<Button^>^ buttonsFriend;
		   array<Button^>^ buttonsAI;
		   array<array<char>^>^ board;



		   // Click event handler for friend mode buttons
		   System::Void buttonClickFriend(System::Object^ sender, System::EventArgs^ e)
		   {

			   Button^ button = safe_cast<Button^>(sender);
			   int buttonIndex = Convert::ToInt32(button->Tag);
			   int row = buttonIndex / 3;
			   int col = buttonIndex % 3;

			   if (button->Text == "" && !checkWin() && !checkTie())
			   {
				   button->Text = gcnew System::String(currentPlayer, 1);

				   board[row][col] = currentPlayer;


				   if (checkWin())
				   {
					   label18->Text = "Player " + gcnew System::String(currentPlayer, 1) + " wins!";
					   if (currentPlayer == 'O')
						   switchPlayer();
				   }
				   else if (checkTie())
				   {
					   label18->Text = "It's a tie!";
					   if (currentPlayer == 'O')
						   switchPlayer();
				   }
				   else
				   {
					   switchPlayer();
				   }
			   }
		   }

		   // Click event handler for AI mode buttons
		   System::Void buttonClickAI(System::Object^ sender, System::EventArgs^ e)
		   {

			   Button^ button = safe_cast<Button^>(sender);
			   int buttonIndex = Convert::ToInt32(button->Tag);
			   int row = buttonIndex / 3;
			   int col = buttonIndex % 3;

			   if (button->Text == "" && !checkWin() && !checkTie())
			   {
				   button->Text = gcnew System::String(currentPlayer, 1);

				   board[row][col] = currentPlayer;

				   if (checkWin())
				   {
					   label24->Text = "Player " + Convert::ToString(currentPlayer) + " wins!";
				   }
				   else if (checkTie())
				   {
					   label24->Text = "It's a tie!";

				   }
				   else
				   {
					   switchPlayer();
					   if (currentPlayer == 'O')
					   {
						   makeAIMove();
					   }
				   }
			   }
		   }

		   System::Void switchPlayer()
		   {
			   currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
			   if (this->pn_playerFriend->Visible)
			   {
				   label17->Text = "Player " + gcnew System::String(currentPlayer, 1) + "'s turn";
			   }
			   else if (this->pn_playAi->Visible)
			   {
				   label23->Text = "Player " + gcnew System::String(currentPlayer, 1) + "'s turn";
			   }
		   }

		   bool checkWin()
		   {
			   // Check rows
			   for (int i = 0; i < 3; i++)
			   {
				   if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
				   {
					   return true;
				   }
			   }
			   // Check columns
			   for (int j = 0; j < 3; j++)
			   {
				   if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
				   {
					   return true;
				   }
			   }
			   // Check diagonals
			   if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			   {
				   return true;
			   }
			   if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
			   {
				   return true;
			   }
			   return false;
		   }

		   bool checkTie()
		   {
			   for (int i = 0; i < 3; i++)
			   {
				   for (int j = 0; j < 3; j++)
				   {
					   if (board[i][j] == ' ')
					   {
						   return false;
					   }
				   }
			   }
			   return true;
		   }

		   void makeAIMove()
		   {


			   int bestScore = -1000;
			   int bestRow = -1;
			   int bestCol = -1;
			   for (int i = 0; i < 3; i++)
			   {
				   for (int j = 0; j < 3; j++)
				   {
					   if (board[i][j] == ' ')
					   {
						   board[i][j] = 'O';
						   int score = minimax(0, false);
						   board[i][j] = ' ';
						   if (score > bestScore)
						   {
							   bestScore = score;
							   bestRow = i;
							   bestCol = j;
						   }
					   }
				   }
			   }
			   board[bestRow][bestCol] = 'O';
			   buttonsAI[bestRow * 3 + bestCol]->Text = "O";

			   if (checkWin())
			   {
				   label24->Text = "Player O wins!";
				   switchPlayer();

			   }
			   else if (checkTie())
			   {
				   label24->Text = "It's a tie!";
				   switchPlayer();

			   }
			   else
			   {

				   switchPlayer();
			   }

		   }


		   int minimax(int depth, bool isMaximizingPlayer)
		   {
			   if (checkWin())
			   {
				   return isMaximizingPlayer ? -10 + depth : 10 - depth;
			   }
			   if (checkTie())
			   {
				   return 0;
			   }

			   if (isMaximizingPlayer)
			   {
				   int bestScore = -1000;
				   for (int i = 0; i < 3; i++)
				   {
					   for (int j = 0; j < 3; j++)
					   {
						   if (board[i][j] == ' ')
						   {
							   board[i][j] = 'O';
							   int score = minimax(depth + 1, false);
							   board[i][j] = ' ';
							   bestScore = Math::Max(bestScore, score);
						   }
					   }
				   }
				   return bestScore;
			   }
			   else
			   {
				   int bestScore = 1000;
				   for (int i = 0; i < 3; i++)
				   {
					   for (int j = 0; j < 3; j++)
					   {
						   if (board[i][j] == ' ')
						   {
							   board[i][j] = 'X';
							   int score = minimax(depth + 1, true);
							   board[i][j] = ' ';
							   bestScore = Math::Min(bestScore, score);
						   }
					   }
				   }
				   return bestScore;
			   }
		   }


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel6->Width == 5)
			panel6->Width = 225;
		else
			panel6->Width = 5;

	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
		}
		else {
			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel6->Width == 5) {
			panel6->Width = 225;
		}
		else {
			panel6->Width = 5;
		}
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		main_page_bar->BringToFront();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_game_history_bar->BringToFront();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_register->BringToFront();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_login->BringToFront();
	}
	private: System::Void main_page_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}

	private: System::Void pn_playerAi_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_playerFriend->BringToFront();
		InitializeBoard();
		label17->Text = "Player X's turn";
		label18->Text = "Winner Label";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_playAi->BringToFront();
		InitializeBoard();
		label23->Text = "Player X's turn";
		label24->Text = "Winner Label";
	}
		   void InitializeBoard()
		   {
			   this->board = gcnew array<array<char>^>(3);
			   for (int i = 0; i < 3; i++)
			   {
				   this->board[i] = gcnew array<char>(3);
				   for (int j = 0; j < 3; j++)
				   {
					   this->board[i][j] = ' '; // Initialize all positions as empty
				   }
			   }

			   // Clear the text of all buttons
			   for each (Button ^ button in this->buttonsFriend)
			   {
				   button->Text = "";
			   }
			   for each (Button ^ button in this->buttonsAI)
			   {
				   button->Text = "";
			   }
		   }

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		main_page_bar->BringToFront();
	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
		main_page_bar->BringToFront();
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		main_page_bar->BringToFront();
	}
	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
		main_page_bar->BringToFront();
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		main_page_bar->BringToFront();
	}
	private: System::Void pn_playAi_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	};
}
