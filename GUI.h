#pragma once


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	char currentPlayerSymbol = 'X';
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
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Panel^ pn_playerFriend;






private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;








	protected:

	protected:



























































































private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
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
			this->pn_playerFriend = (gcnew System::Windows::Forms::Panel());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->main_page_bar = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pn_game_history_bar = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pn_login = (gcnew System::Windows::Forms::Panel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pn_register = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->pn_con_bar->SuspendLayout();
			this->pn_playerFriend->SuspendLayout();
			this->main_page_bar->SuspendLayout();
			this->pn_game_history_bar->SuspendLayout();
			this->pn_login->SuspendLayout();
			this->pn_register->SuspendLayout();
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
			this->label3->Location = System::Drawing::Point(616, 237);
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
			this->panel6->Location = System::Drawing::Point(1005, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(5, 539);
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
			this->panel7->Size = System::Drawing::Size(1005, 86);
			this->panel7->TabIndex = 14;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(919, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 80);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(178, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 80);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->label4->Location = System::Drawing::Point(688, 368);
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
			this->label5->Location = System::Drawing::Point(257, 363);
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
			this->pn_con_bar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con_bar->Location = System::Drawing::Point(0, 86);
			this->pn_con_bar->Name = L"pn_con_bar";
			this->pn_con_bar->Size = System::Drawing::Size(1005, 453);
			this->pn_con_bar->TabIndex = 15;
			// 
			// pn_playerFriend
			// 
			this->pn_playerFriend->Controls->Add(this->button26);
			this->pn_playerFriend->Controls->Add(this->label18);
			this->pn_playerFriend->Controls->Add(this->label17);
			this->pn_playerFriend->Controls->Add(this->label16);
			this->pn_playerFriend->Controls->Add(this->button22);
			this->pn_playerFriend->Controls->Add(this->button19);
			this->pn_playerFriend->Controls->Add(this->button21);
			this->pn_playerFriend->Controls->Add(this->button18);
			this->pn_playerFriend->Controls->Add(this->button16);
			this->pn_playerFriend->Controls->Add(this->button20);
			this->pn_playerFriend->Controls->Add(this->button17);
			this->pn_playerFriend->Controls->Add(this->button15);
			this->pn_playerFriend->Controls->Add(this->button14);
			this->pn_playerFriend->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_playerFriend->Location = System::Drawing::Point(0, 0);
			this->pn_playerFriend->Name = L"pn_playerFriend";
			this->pn_playerFriend->Size = System::Drawing::Size(1005, 453);
			this->pn_playerFriend->TabIndex = 4;
			this->pn_playerFriend->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_playerFriend_Paint);
			// 
			// button26
			// 
			this->button26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button26->BackColor = System::Drawing::Color::Black;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Location = System::Drawing::Point(12, 333);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(83, 80);
			this->button26->TabIndex = 4;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(339, 394);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(321, 44);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Result";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Black;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(464, 18);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(240, 23);
			this->label17->TabIndex = 2;
			this->label17->Text = L"currentPlayerSymbolLabel";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(275, 18);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(183, 23);
			this->label16->TabIndex = 1;
			this->label16->Text = L"it\'s your turn, player";
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button22->Location = System::Drawing::Point(582, 293);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(134, 95);
			this->button22->TabIndex = 0;
			this->button22->Text = L"9";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button19->Location = System::Drawing::Point(579, 179);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(134, 95);
			this->button19->TabIndex = 0;
			this->button19->Text = L"6";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button21
			// 
			this->button21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button21->Location = System::Drawing::Point(430, 293);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(134, 95);
			this->button21->TabIndex = 0;
			this->button21->Text = L"8";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button18->Location = System::Drawing::Point(427, 179);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(134, 95);
			this->button18->TabIndex = 0;
			this->button18->Text = L"5";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click_1);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->Location = System::Drawing::Point(579, 65);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(134, 95);
			this->button16->TabIndex = 0;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button20
			// 
			this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button20->Location = System::Drawing::Point(278, 292);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(134, 95);
			this->button20->TabIndex = 0;
			this->button20->Text = L"7";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->Location = System::Drawing::Point(275, 178);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(134, 95);
			this->button17->TabIndex = 0;
			this->button17->Text = L"4";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->Location = System::Drawing::Point(427, 65);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(134, 95);
			this->button15->TabIndex = 0;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->Location = System::Drawing::Point(275, 64);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(134, 95);
			this->button14->TabIndex = 0;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
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
			this->main_page_bar->Size = System::Drawing::Size(1005, 453);
			this->main_page_bar->TabIndex = 0;
			this->main_page_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::main_page_bar_Paint);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(434, 143);
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
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Location = System::Drawing::Point(441, 6);
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
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Location = System::Drawing::Point(379, 339);
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
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Location = System::Drawing::Point(776, 343);
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
			this->label1->Location = System::Drawing::Point(275, 247);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Play VS AI";
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(679, 175);
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
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(297, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 51);
			this->button5->TabIndex = 10;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// pn_game_history_bar
			// 
			this->pn_game_history_bar->Controls->Add(this->button23);
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
			this->pn_game_history_bar->Size = System::Drawing::Size(1005, 453);
			this->pn_game_history_bar->TabIndex = 1;
			// 
			// button23
			// 
			this->button23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button23->BackColor = System::Drawing::Color::Black;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Location = System::Drawing::Point(12, 333);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(83, 80);
			this->button23->TabIndex = 2;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->Location = System::Drawing::Point(579, 263);
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
			this->label9->Location = System::Drawing::Point(358, 255);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 32);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Lost :";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(579, 190);
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
			this->label8->Location = System::Drawing::Point(347, 182);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 32);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Draw :";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(579, 119);
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
			this->label7->Location = System::Drawing::Point(347, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 32);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Won :";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(579, 51);
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
			this->label6->Location = System::Drawing::Point(333, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(207, 32);
			this->label6->TabIndex = 0;
			this->label6->Text = L" played games :";
			// 
			// pn_login
			// 
			this->pn_login->Controls->Add(this->button24);
			this->pn_login->Controls->Add(this->label20);
			this->pn_login->Controls->Add(this->button12);
			this->pn_login->Controls->Add(this->textBox13);
			this->pn_login->Controls->Add(this->label21);
			this->pn_login->Controls->Add(this->textBox14);
			this->pn_login->Controls->Add(this->label22);
			this->pn_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_login->Location = System::Drawing::Point(0, 0);
			this->pn_login->Name = L"pn_login";
			this->pn_login->Size = System::Drawing::Size(1005, 453);
			this->pn_login->TabIndex = 3;
			// 
			// button24
			// 
			this->button24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button24->BackColor = System::Drawing::Color::Black;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Location = System::Drawing::Point(12, 333);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(83, 80);
			this->button24->TabIndex = 14;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label20->Location = System::Drawing::Point(507, 358);
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
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->Location = System::Drawing::Point(500, 280);
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
			this->textBox13->Location = System::Drawing::Point(427, 142);
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
			this->label21->Location = System::Drawing::Point(236, 138);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(176, 39);
			this->label21->TabIndex = 8;
			this->label21->Text = L"Password:";
			// 
			// textBox14
			// 
			this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(427, 69);
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
			this->label22->Location = System::Drawing::Point(235, 65);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(149, 48);
			this->label22->TabIndex = 9;
			this->label22->Text = L"Email :";
			// 
			// pn_register
			// 
			this->pn_register->Controls->Add(this->button25);
			this->pn_register->Controls->Add(this->label12);
			this->pn_register->Controls->Add(this->button13);
			this->pn_register->Controls->Add(this->label13);
			this->pn_register->Controls->Add(this->textBox5);
			this->pn_register->Controls->Add(this->label14);
			this->pn_register->Controls->Add(this->textBox6);
			this->pn_register->Controls->Add(this->textBox7);
			this->pn_register->Controls->Add(this->label15);
			this->pn_register->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_register->Location = System::Drawing::Point(0, 0);
			this->pn_register->Name = L"pn_register";
			this->pn_register->Size = System::Drawing::Size(1005, 453);
			this->pn_register->TabIndex = 2;
			// 
			// button25
			// 
			this->button25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button25->BackColor = System::Drawing::Color::Black;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Location = System::Drawing::Point(12, 333);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(83, 80);
			this->button25->TabIndex = 24;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label12->Location = System::Drawing::Point(478, 379);
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
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->Location = System::Drawing::Point(484, 312);
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
			this->label13->Location = System::Drawing::Point(237, 45);
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
			this->textBox5->Location = System::Drawing::Point(430, 200);
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
			this->label14->Location = System::Drawing::Point(233, 196);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(176, 39);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Password:";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(430, 49);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(342, 36);
			this->textBox6->TabIndex = 19;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(430, 127);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(342, 36);
			this->textBox7->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label15->Location = System::Drawing::Point(233, 123);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(121, 39);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Email :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1010, 539);
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
			this->pn_playerFriend->ResumeLayout(false);
			this->pn_playerFriend->PerformLayout();
			this->main_page_bar->ResumeLayout(false);
			this->main_page_bar->PerformLayout();
			this->pn_game_history_bar->ResumeLayout(false);
			this->pn_game_history_bar->PerformLayout();
			this->pn_login->ResumeLayout(false);
			this->pn_login->PerformLayout();
			this->pn_register->ResumeLayout(false);
			this->pn_register->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
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
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	
	button14->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button14->Enabled = false;

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	button15->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button15->Enabled = false;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	button16->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button16->Enabled = false;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	button17->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button17->Enabled = false;
}
private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e) {
	button18->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button18->Enabled = false;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	button19->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button19->Enabled = false;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	button20->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button20->Enabled = false;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	button21->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button21->Enabled = false;
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	button22->Text = gcnew System::String(currentPlayerSymbol, 1);
	if (currentPlayerSymbol == 'X')
		currentPlayerSymbol = 'O';
	else
		currentPlayerSymbol = 'X';
	label17->Text = gcnew System::String(currentPlayerSymbol, 1);
	button22->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_playerFriend->BringToFront();
	button14->Enabled = true;
	button15->Enabled = true;
	button16->Enabled = true;
	button17->Enabled = true;
	button18->Enabled = true;
	button19->Enabled = true;
	button20->Enabled = true;
	button21->Enabled = true;
	button22->Enabled = true;
	
}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	main_page_bar->BringToFront();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	main_page_bar->BringToFront();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	main_page_bar->BringToFront();
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	main_page_bar->BringToFront();
}
private: System::Void pn_playerFriend_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
