#pragma once

#include <string>
#include <vector>

static const std::vector<std::string> QuestionList{ "What does “www” stand for in a website browser?", "What geometric shape is generally used for stop signs?", "What is cynophobia?", "What is the name of the biggest technology company in South Korea?", "Which animal can be seen on the Porsche logo?", "Which country invented ice cream?", "Which is the only edible food that never goes bad?", "What is the rarest M&M color?", "When Walt Disney was a child, which character did he play in his school function?", "How many colors are there in the rainbow?" };
static const std::vector<std::string> AnswerList{ "World Wide Web", "Octagon", "Fear of dogs", "Samsung", "Horse", "China", "Honey", "Brown", "Peter Pan", "Seven" };

namespace Team34GUi {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ PRESS;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Button^ button27;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->PRESS = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(30, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(392, 622);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(206, 278);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(186, 70);
			this->pictureBox9->TabIndex = 4;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(74, 387);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(226, 232);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 69);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome!";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(26, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 98);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Go To Dashboard\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gold;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(392, 224);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"NSimSun", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(30, 45);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(392, 622);
			this->panel2->TabIndex = 4;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(218, 409);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(165, 69);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(305, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L" \r\n";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Orange;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Location = System::Drawing::Point(234, 519);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 85);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Back To Start\r\n";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Desktop;
			this->button4->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button4->Location = System::Drawing::Point(145, 172);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 87);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Moderator";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(354, 96);
			this->label2->TabIndex = 3;
			this->label2->Text = L"\r\nChoose Your Gamemode\r\n ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(4, 405);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(220, 216);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(250, 282);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 85);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Team 2\r\n";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(43, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 85);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Team 1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Red;
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->PRESS);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Location = System::Drawing::Point(30, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(392, 622);
			this->panel3->TabIndex = 7;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(108, 116);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(201, 97);
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(65, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(264, 54);
			this->label5->TabIndex = 4;
			this->label5->Text = L"RED TEAM";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(58, 566);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"SCORE\r\n";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// PRESS
			// 
			this->PRESS->BackColor = System::Drawing::Color::Red;
			this->PRESS->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PRESS->Location = System::Drawing::Point(130, 314);
			this->PRESS->Name = L"PRESS";
			this->PRESS->Size = System::Drawing::Size(140, 125);
			this->PRESS->TabIndex = 2;
			this->PRESS->Text = L"PRESS";
			this->PRESS->UseVisualStyleBackColor = false;
			this->PRESS->Click += gcnew System::EventHandler(this, &MyForm::PRESS_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(163, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"BUZZER\r\n";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->ForeColor = System::Drawing::Color::Snow;
			this->button6->Location = System::Drawing::Point(268, 566);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Menu";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel4->Controls->Add(this->pictureBox6);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(30, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(392, 622);
			this->panel4->TabIndex = 8;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(109, 107);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(176, 103);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::RoyalBlue;
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(288, 566);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Menu";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::RoyalBlue;
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(43, 566);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Score";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::RoyalBlue;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(119, 331);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(166, 148);
			this->button8->TabIndex = 2;
			this->button8->Text = L"PRESS\r\n";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(163, 278);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"BUZZER";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::RoyalBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(88, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 46);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Blue Team\r\n";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Location = System::Drawing::Point(30, 45);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(392, 622);
			this->panel5->TabIndex = 9;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(215, 534);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(168, 85);
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(59, 405);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 6;
			this->button12->Text = L"BACK";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(268, 405);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 5;
			this->button11->Text = L"NEXT";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(185, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(20, 182);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 16);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Bonus Points Value: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(185, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(20, 129);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 16);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Name Of Game: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(58, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(282, 48);
			this->label8->TabIndex = 0;
			this->label8->Text = L"MODERATOR";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlText;
			this->panel6->Controls->Add(this->button14);
			this->panel6->Controls->Add(this->button13);
			this->panel6->Controls->Add(this->textBox27);
			this->panel6->Controls->Add(this->textBox28);
			this->panel6->Controls->Add(this->label28);
			this->panel6->Controls->Add(this->textBox29);
			this->panel6->Controls->Add(this->textBox30);
			this->panel6->Controls->Add(this->label29);
			this->panel6->Controls->Add(this->textBox31);
			this->panel6->Controls->Add(this->textBox32);
			this->panel6->Controls->Add(this->label30);
			this->panel6->Controls->Add(this->textBox33);
			this->panel6->Controls->Add(this->textBox34);
			this->panel6->Controls->Add(this->label31);
			this->panel6->Controls->Add(this->textBox35);
			this->panel6->Controls->Add(this->textBox36);
			this->panel6->Controls->Add(this->label32);
			this->panel6->Controls->Add(this->textBox37);
			this->panel6->Controls->Add(this->textBox38);
			this->panel6->Controls->Add(this->label33);
			this->panel6->Controls->Add(this->textBox15);
			this->panel6->Controls->Add(this->textBox16);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(this->textBox17);
			this->panel6->Controls->Add(this->textBox18);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->textBox19);
			this->panel6->Controls->Add(this->textBox20);
			this->panel6->Controls->Add(this->label24);
			this->panel6->Controls->Add(this->textBox21);
			this->panel6->Controls->Add(this->textBox22);
			this->panel6->Controls->Add(this->label25);
			this->panel6->Controls->Add(this->textBox23);
			this->panel6->Controls->Add(this->textBox24);
			this->panel6->Controls->Add(this->label26);
			this->panel6->Controls->Add(this->textBox25);
			this->panel6->Controls->Add(this->textBox26);
			this->panel6->Controls->Add(this->label27);
			this->panel6->Controls->Add(this->textBox9);
			this->panel6->Controls->Add(this->textBox10);
			this->panel6->Controls->Add(this->label19);
			this->panel6->Controls->Add(this->textBox11);
			this->panel6->Controls->Add(this->textBox12);
			this->panel6->Controls->Add(this->label20);
			this->panel6->Controls->Add(this->textBox13);
			this->panel6->Controls->Add(this->textBox14);
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->textBox7);
			this->panel6->Controls->Add(this->textBox8);
			this->panel6->Controls->Add(this->label18);
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Controls->Add(this->textBox6);
			this->panel6->Controls->Add(this->label17);
			this->panel6->Controls->Add(this->textBox4);
			this->panel6->Controls->Add(this->textBox3);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(30, 46);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(392, 621);
			this->panel6->TabIndex = 7;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(224, 8);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 63;
			this->button14->Text = L"BACK";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(308, 8);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 62;
			this->button13->Text = L"NEXT";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(209, 580);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 22);
			this->textBox27->TabIndex = 61;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(88, 580);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 22);
			this->textBox28->TabIndex = 60;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label28->Location = System::Drawing::Point(43, 583);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(30, 16);
			this->label28->TabIndex = 59;
			this->label28->Text = L"18:  ";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(209, 552);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 22);
			this->textBox29->TabIndex = 58;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(88, 552);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 22);
			this->textBox30->TabIndex = 57;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label29->Location = System::Drawing::Point(43, 555);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(30, 16);
			this->label29->TabIndex = 56;
			this->label29->Text = L"17:  ";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(209, 521);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(100, 22);
			this->textBox31->TabIndex = 55;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(88, 521);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 22);
			this->textBox32->TabIndex = 54;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label30->Location = System::Drawing::Point(43, 524);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(30, 16);
			this->label30->TabIndex = 53;
			this->label30->Text = L"16:  ";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(209, 493);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(100, 22);
			this->textBox33->TabIndex = 52;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(88, 493);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(100, 22);
			this->textBox34->TabIndex = 51;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label31->Location = System::Drawing::Point(43, 496);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(30, 16);
			this->label31->TabIndex = 50;
			this->label31->Text = L"15:  ";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(209, 465);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 22);
			this->textBox35->TabIndex = 49;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(88, 465);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(100, 22);
			this->textBox36->TabIndex = 48;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label32->Location = System::Drawing::Point(43, 468);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(30, 16);
			this->label32->TabIndex = 47;
			this->label32->Text = L"14:  ";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(209, 434);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(100, 22);
			this->textBox37->TabIndex = 46;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(88, 434);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(100, 22);
			this->textBox38->TabIndex = 45;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label33->Location = System::Drawing::Point(43, 437);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(30, 16);
			this->label33->TabIndex = 44;
			this->label33->Text = L"13:  ";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(209, 400);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 43;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(88, 400);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 22);
			this->textBox16->TabIndex = 42;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label22->Location = System::Drawing::Point(43, 403);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(30, 16);
			this->label22->TabIndex = 41;
			this->label22->Text = L"12:  ";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(209, 372);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 40;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(88, 372);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 39;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label23->Location = System::Drawing::Point(43, 375);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(30, 16);
			this->label23->TabIndex = 38;
			this->label23->Text = L"11:  ";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(209, 341);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 22);
			this->textBox19->TabIndex = 37;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(88, 341);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 36;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label24->Location = System::Drawing::Point(43, 344);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 16);
			this->label24->TabIndex = 35;
			this->label24->Text = L"10:  ";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(209, 313);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 34;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(88, 313);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 22);
			this->textBox22->TabIndex = 33;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label25->Location = System::Drawing::Point(43, 316);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(23, 16);
			this->label25->TabIndex = 32;
			this->label25->Text = L"9:  ";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(209, 285);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 22);
			this->textBox23->TabIndex = 31;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(88, 285);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 22);
			this->textBox24->TabIndex = 30;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label26->Location = System::Drawing::Point(43, 288);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(23, 16);
			this->label26->TabIndex = 29;
			this->label26->Text = L"8:  ";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(209, 254);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 22);
			this->textBox25->TabIndex = 28;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(88, 254);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 22);
			this->textBox26->TabIndex = 27;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label27->Location = System::Drawing::Point(43, 257);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(23, 16);
			this->label27->TabIndex = 26;
			this->label27->Text = L"7:  ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(209, 221);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 25;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(88, 221);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 24;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label19->Location = System::Drawing::Point(43, 224);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 16);
			this->label19->TabIndex = 23;
			this->label19->Text = L"6:  ";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(209, 193);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 22;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(88, 193);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 21;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label20->Location = System::Drawing::Point(43, 196);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(23, 16);
			this->label20->TabIndex = 20;
			this->label20->Text = L"5:  ";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(209, 162);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 19;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(88, 162);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 18;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label21->Location = System::Drawing::Point(43, 165);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(23, 16);
			this->label21->TabIndex = 17;
			this->label21->Text = L"4:  ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(209, 134);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(88, 134);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 15;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label18->Location = System::Drawing::Point(43, 137);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(23, 16);
			this->label18->TabIndex = 14;
			this->label18->Text = L"3:  ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(209, 106);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(88, 106);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 12;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label17->Location = System::Drawing::Point(43, 109);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 16);
			this->label17->TabIndex = 11;
			this->label17->Text = L"2:  ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(209, 75);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(88, 75);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label16->Location = System::Drawing::Point(43, 78);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 16);
			this->label16->TabIndex = 5;
			this->label16->Text = L"1:  ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(0, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 16);
			this->label15->TabIndex = 4;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(231, 41);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 16);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Answer:";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(106, 41);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 16);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Question: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(0, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 16);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Enter Questions";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 16);
			this->label11->TabIndex = 0;
			this->label11->Text = L"label11";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Controls->Add(this->pictureBox4);
			this->panel7->Controls->Add(this->label42);
			this->panel7->Controls->Add(this->textBox41);
			this->panel7->Controls->Add(this->button21);
			this->panel7->Controls->Add(this->label41);
			this->panel7->Controls->Add(this->textBox40);
			this->panel7->Controls->Add(this->label40);
			this->panel7->Controls->Add(this->label39);
			this->panel7->Controls->Add(this->label38);
			this->panel7->Controls->Add(this->button20);
			this->panel7->Controls->Add(this->label37);
			this->panel7->Controls->Add(this->textBox39);
			this->panel7->Controls->Add(this->button19);
			this->panel7->Controls->Add(this->button18);
			this->panel7->Controls->Add(this->label36);
			this->panel7->Controls->Add(this->button17);
			this->panel7->Controls->Add(this->label35);
			this->panel7->Controls->Add(this->button16);
			this->panel7->Controls->Add(this->button15);
			this->panel7->Controls->Add(this->label34);
			this->panel7->Location = System::Drawing::Point(30, 45);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(395, 622);
			this->panel7->TabIndex = 10;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(33, 51);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(186, 72);
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(7, 503);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(63, 18);
			this->label42->TabIndex = 18;
			this->label42->Text = L"Change:";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(84, 503);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(23, 22);
			this->textBox41->TabIndex = 17;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(119, 473);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(127, 53);
			this->button21->TabIndex = 16;
			this->button21->Text = L"Press To Change Score";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(10, 469);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(56, 20);
			this->label41->TabIndex = 15;
			this->label41->Text = L"Team:";
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(79, 469);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(23, 22);
			this->textBox40->TabIndex = 14;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label40->Location = System::Drawing::Point(185, 9);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(84, 16);
			this->label40->TabIndex = 13;
			this->label40->Text = L"Game Name";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label39->Location = System::Drawing::Point(23, 387);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(51, 16);
			this->label39->TabIndex = 12;
			this->label39->Text = L"Answer";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label38->Location = System::Drawing::Point(22, 314);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(60, 16);
			this->label38->TabIndex = 11;
			this->label38->Text = L"Question";
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(128, 268);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(127, 23);
			this->button20->TabIndex = 10;
			this->button20->Text = L"Press To Show";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(20, 268);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(41, 20);
			this->label37->TabIndex = 9;
			this->label37->Text = L"Q#: ";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(75, 268);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(23, 22);
			this->textBox39->TabIndex = 8;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(288, 497);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 7;
			this->button19->Text = L"Start";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(288, 537);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 6;
			this->button18->Text = L"Stop";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label36->Location = System::Drawing::Point(288, 85);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(44, 16);
			this->label36->TabIndex = 5;
			this->label36->Text = L"Time: ";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(288, 576);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 4;
			this->button17->Text = L"Reset";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label35->Location = System::Drawing::Point(285, 41);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(69, 16);
			this->label35->TabIndex = 3;
			this->label35->Text = L"WINNER\?";
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(7, 584);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 2;
			this->button16->Text = L"Points!";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(25, 9);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 1;
			this->button15->Text = L"Back To Questions";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label34->Location = System::Drawing::Point(20, 106);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(343, 135);
			this->label34->TabIndex = 0;
			this->label34->Text = L"TIME";
			this->label34->Click += gcnew System::EventHandler(this, &MyForm::label34_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlText;
			this->panel8->Controls->Add(this->button23);
			this->panel8->Controls->Add(this->button22);
			this->panel8->Controls->Add(this->textBox44);
			this->panel8->Controls->Add(this->textBox45);
			this->panel8->Controls->Add(this->label45);
			this->panel8->Controls->Add(this->label50);
			this->panel8->Controls->Add(this->label51);
			this->panel8->Controls->Add(this->label52);
			this->panel8->Controls->Add(this->label53);
			this->panel8->Controls->Add(this->textBox43);
			this->panel8->Controls->Add(this->textBox42);
			this->panel8->Controls->Add(this->label49);
			this->panel8->Controls->Add(this->label48);
			this->panel8->Controls->Add(this->label47);
			this->panel8->Controls->Add(this->label46);
			this->panel8->Controls->Add(this->label44);
			this->panel8->Controls->Add(this->label43);
			this->panel8->Controls->Add(this->pictureBox10);
			this->panel8->Location = System::Drawing::Point(30, 43);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(395, 624);
			this->panel8->TabIndex = 11;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(308, 583);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 18;
			this->button23->Text = L"Back";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Gold;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(84, 487);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(238, 72);
			this->button22->TabIndex = 17;
			this->button22->Text = L"REFRESH";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(124, 383);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(100, 22);
			this->textBox44->TabIndex = 16;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(124, 349);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(100, 22);
			this->textBox45->TabIndex = 15;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label45->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label45->Location = System::Drawing::Point(124, 319);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(51, 16);
			this->label45->TabIndex = 14;
			this->label45->Text = L"label45";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label50->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label50->Location = System::Drawing::Point(15, 389);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(51, 16);
			this->label50->TabIndex = 13;
			this->label50->Text = L"Bonus: ";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label51->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label51->Location = System::Drawing::Point(16, 355);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(91, 16);
			this->label51->TabIndex = 12;
			this->label51->Text = L"ChangePoints";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label52->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label52->Location = System::Drawing::Point(15, 320);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(49, 16);
			this->label52->TabIndex = 11;
			this->label52->Text = L"Score: ";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label53->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label53->Location = System::Drawing::Point(15, 289);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(92, 18);
			this->label53->TabIndex = 10;
			this->label53->Text = L"Team 1 (Red)";
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(119, 224);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(100, 22);
			this->textBox43->TabIndex = 9;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(119, 190);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(100, 22);
			this->textBox42->TabIndex = 8;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::Red;
			this->label49->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label49->Location = System::Drawing::Point(119, 160);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(51, 16);
			this->label49->TabIndex = 7;
			this->label49->Text = L"label49";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Red;
			this->label48->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label48->Location = System::Drawing::Point(10, 230);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(51, 16);
			this->label48->TabIndex = 6;
			this->label48->Text = L"Bonus: ";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Red;
			this->label47->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label47->Location = System::Drawing::Point(11, 196);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(91, 16);
			this->label47->TabIndex = 5;
			this->label47->Text = L"ChangePoints";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Red;
			this->label46->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label46->Location = System::Drawing::Point(10, 161);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(49, 16);
			this->label46->TabIndex = 4;
			this->label46->Text = L"Score: ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Red;
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label44->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label44->Location = System::Drawing::Point(10, 130);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(92, 18);
			this->label44->TabIndex = 2;
			this->label44->Text = L"Team 1 (Red)";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::SystemColors::ControlText;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label43->Location = System::Drawing::Point(6, 5);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(221, 92);
			this->label43->TabIndex = 1;
			this->label43->Text = L"Moderator\r\nScoreCard";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(235, 3);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(157, 88);
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Red;
			this->panel9->Controls->Add(this->button25);
			this->panel9->Controls->Add(this->pictureBox11);
			this->panel9->Controls->Add(this->label55);
			this->panel9->Controls->Add(this->label54);
			this->panel9->Controls->Add(this->button24);
			this->panel9->Location = System::Drawing::Point(30, 40);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(395, 627);
			this->panel9->TabIndex = 12;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Red;
			this->button25->Location = System::Drawing::Point(19, 560);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 4;
			this->button25->Text = L"Back";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(194, 519);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(180, 85);
			this->pictureBox11->TabIndex = 3;
			this->pictureBox11->TabStop = false;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(40, 103);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(323, 91);
			this->label55->TabIndex = 2;
			this->label55->Text = L"SCORE";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(43, 30);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(46, 16);
			this->label54->TabIndex = 1;
			this->label54->Text = L"Score:";
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Red;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(110, 406);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(199, 84);
			this->button24->TabIndex = 0;
			this->button24->Text = L"Refresh";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel10->Controls->Add(this->button26);
			this->panel10->Controls->Add(this->pictureBox12);
			this->panel10->Controls->Add(this->label56);
			this->panel10->Controls->Add(this->label57);
			this->panel10->Controls->Add(this->button27);
			this->panel10->Location = System::Drawing::Point(30, 40);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(395, 627);
			this->panel10->TabIndex = 13;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button26->Location = System::Drawing::Point(19, 560);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 4;
			this->button26->Text = L"Back";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(194, 519);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(180, 85);
			this->pictureBox12->TabIndex = 3;
			this->pictureBox12->TabStop = false;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(40, 103);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(323, 91);
			this->label56->TabIndex = 2;
			this->label56->Text = L"SCORE";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(43, 30);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(46, 16);
			this->label57->TabIndex = 1;
			this->label57->Text = L"Score:";
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(110, 406);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(209, 77);
			this->button27->TabIndex = 0;
			this->button27->Text = L"Refresh";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(733, 821);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Name = L"MyForm";
			this->Text = L"Trivia Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->ResumeLayout(false);

		}
		//panel 1 is dashboard
		//panel 2 is choose the mode you want
		//panel 3 is red team
		//panel 4 is blue team
		//panel 5 is moderator set up 1
		//panel 6 is moderator set up 2 (questions)
		//panel 7 is moderator page
		//panel 8 is moderator score page
		//panel 9 is red team score page
		//panel 10 is blue team score page
#pragma endregion
		int team1Score = 0;
		int team2Score = 0;
		bool team1Buzz;
		bool team2Buzz;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = false;
		panel3->Visible = true;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = false;
		panel1->Visible = true;
		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		panel7->Visible = false;
		panel8->Visible = false;
		panel9->Visible = false;
		panel10->Visible = false;
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		//team1 selected
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//team2 selected
		panel2->Visible = false;
		panel4->Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//moderator selected
		//label3->Text = System::Convert::ToString(team1Score);
		panel2->Visible = false;
		panel5->Visible = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = false;
		panel1->Visible = true;
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = System::Convert::ToString(team1Score);
	}


	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PRESS_Click(System::Object^ sender, System::EventArgs^ e) {
		//Red Button CLicker
		team1Buzz = true;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Visible = false;
		panel2->Visible = true;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//score from panel3/red team
		panel9->Visible = true;
		panel3->Visible = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		team2Buzz = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		//score from panel4/blue team
		panel10->Visible = true;
		panel4->Visible = false;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Visible = true;
		panel5->Visible = false;

	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		//timer from question insert
		panel6->Visible = false;
		panel7->Visible = true;
		//timer1.Value = 0;
		label40->Text = textBox1->Text;
		label34->Text = "0";
		i = 0;
		timer1->Stop();
		i = 0;



	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		//prev from question insert
		panel6->Visible = false;
		panel5->Visible = true;
	}
	private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		panel6->Visible = true;
		panel5->Visible = false;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Visible = true;
		panel5->Visible = false;
	}
	private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   int i = 0;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		label34->Text = i.ToString();
		i++;
		if (team1Buzz == true) {
			int timer = i;
			label35->Text = "RED TEAM";
			timer1->Stop();
			team1Buzz = false;
			label36->Text = "Time" + timer;
		}
		else if (team2Buzz == true) {
			int timer = i;
			label35->Text = "BLUE TEAM";
			timer1->Stop();
			team2Buzz = false;
			label36->Text = "Time: " + timer + "s";
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		panel7->Visible = false;
		panel6->Visible = true;
		//back from timer to questions

	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		//reset timer button
		i = 0;
		label35->Text = "Winner?";
		timer1->Stop();
		label34->Text = "0";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		//timer stop
		timer1->Stop();
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		//timer start
		timer1->Start();
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		//press to show question and answer. Label 38 = question. Label 39 = Answer
		int input = System::Convert::ToInt16(textBox39->Text) - 1;
		if (input < 0 || input >= QuestionList.size()) {
			label38->Text = "Invalid Index";
			label39->Text = "Invalid Index";
		}
		else {
			label38->Text = gcnew String(QuestionList[input].c_str());
			label39->Text = gcnew String(AnswerList[input].c_str());
		}
		/*
		if (input == 1) {
			label38->Text = textBox3->Text;
			label39->Text = textBox4->Text;
		}
		else if (input == 2) {
			label38->Text = textBox6->Text;
			label39->Text = textBox5->Text;
	}
		else if (input == 3) {
			label38->Text = textBox8->Text;
			label39->Text = textBox7->Text;
		}
		else if (input == 4) {
			label38->Text = textBox14->Text;
			label39->Text = textBox13->Text;
		}
		else if (input == 5) {
			label38->Text = textBox12->Text;
			label39->Text = textBox11->Text;
		}
		else if (input == 6) {
			label38->Text = textBox10->Text;
			label39->Text = textBox9->Text;
		}
		else if (input == 7) {
			label38->Text = textBox26->Text;
			label39->Text = textBox25->Text;
		}
		else if (input == 8) {
			label38->Text = textBox24->Text;
			label39->Text = textBox23->Text;
		}
		else if (input == 9) {
			label38->Text = textBox22->Text;
			label39->Text = textBox21->Text;
		}
		else if (input == 10) {
			label38->Text = textBox20->Text;
			label39->Text = textBox19->Text;
		}
		else if (input == 11) {
			label38->Text = textBox18->Text;
			label39->Text = textBox17->Text;
		}
		else if (input == 12) {
			label38->Text = textBox16->Text;
			label39->Text = textBox15->Text;
		}
		else if (input == 13) {
			label38->Text = textBox38->Text;
			label39->Text = textBox37->Text;
		}
		else if (input == 14) {
			label38->Text = textBox36->Text;
			label39->Text = textBox35->Text;
		}
		else if (input == 15) {
			label38->Text = textBox34->Text;
			label39->Text = textBox33->Text;
		}
		else if (input == 16) {
			label38->Text = textBox32->Text;
			label39->Text = textBox31->Text;
		}
		else if (input == 17) {
			label38->Text = textBox30->Text;
			label39->Text = textBox29->Text;
		}
		else if (input == 18) {
			label38->Text = textBox28->Text;
			label39->Text = textBox27->Text;
		}
		else {
			label38->Text = "Invalid Index";
			label39->Text = "Invalid Index";
		}
		*/


	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		//points from moderator
		panel8->Visible = true;
		panel7->Visible = false;
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		int team = System::Convert::ToInt16(textBox40->Text);
		int scoreChange = System::Convert::ToInt16(textBox41->Text);
		if (team == 1) {
			team1Score += scoreChange;
		}
		else if (team == 2) {
			team2Score += scoreChange;
		}

	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		//label49 is red score, tb42 is changescore, tb43 is bonus
		//label45 is blue score, tb45 is changescore, tb44 is bonus
		int team1Change = System::Convert::ToInt16(textBox42->Text);
		int team1Bonus = System::Convert::ToInt16(textBox43->Text);
		team1Score = team1Score + team1Change + team1Bonus;
		int output1 = team1Score;
		label49->Text = System::Convert::ToString(output1);

		int team2Change = System::Convert::ToInt16(textBox45->Text);
		int team2Bonus = System::Convert::ToInt16(textBox44->Text);
		team2Score = team2Score + team2Change + team2Bonus;
		int output2 = team2Score;
		label45->Text = System::Convert::ToString(output2);


	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		//back from moderator score editor page
		panel7->Visible = true;
		panel8->Visible = false;
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		label55->Text = System::Convert::ToString(team1Score);
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		panel9->Visible = false;
		panel3->Visible = true;

	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		label56->Text = System::Convert::ToString(team2Score);
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		panel10->Visible = false;
		panel4->Visible = true;
	}
	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		panel9->Visible = true;
		panel3->Visible = false;
	}
	};
}