#pragma once

#include <msclr\marshal_cppstd.h>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdio>

namespace Kks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pnlHowTo->Hide();
			pnlTask->Hide();
			pnlBook->Hide();
			pnlAdd->Hide();
			pnlEdit->Hide();
			pnlShowResult->Hide();
			tbHowTo->Enabled = false;
			tbTask->Enabled = false;
			lblinfo1->Hide();
			lblinfo2->Hide();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnAbout;
	private: System::Windows::Forms::Button^ btnTask;




	private: System::Windows::Forms::Button^ btnHowTo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBookOpen;
	private: System::Windows::Forms::Button^ btnExit;



	private: System::Windows::Forms::Label^ lblinfo1;
	private: System::Windows::Forms::Label^ lblinfo2;
	private: System::Windows::Forms::Panel^ pnlHowTo;
	private: System::Windows::Forms::Button^ HowToMenu;
	private: System::Windows::Forms::TextBox^ tbHowTo;
	private: System::Windows::Forms::Panel^ pnlTask;
	private: System::Windows::Forms::Button^ btnTaskMenu;
	private: System::Windows::Forms::TextBox^ tbTask;
	private: System::Windows::Forms::Panel^ pnlBook;




	private: System::Windows::Forms::Button^ btnBookMenu;
	private: System::Windows::Forms::Label^ FormatName;



	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ FormCount;


	private: System::Windows::Forms::Button^ btnToAdd;
	private: System::Windows::Forms::Label^ SubjectName;
	private: System::Windows::Forms::Panel^ pnlAdd;
	private: System::Windows::Forms::CheckBox^ typeVect;









	private: System::Windows::Forms::CheckBox^ typeRastr;





	private: System::Windows::Forms::Label^ lblType;













	private: System::Windows::Forms::TextBox^ tbProgramsSup;
	private: System::Windows::Forms::Label^ lblPrograms;




	private: System::Windows::Forms::TextBox^ tbRushFile;
	private: System::Windows::Forms::Label^ lblRush;





private: System::Windows::Forms::Label^ lblName;

private: System::Windows::Forms::TextBox^ tbFormName;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnAddMenu;
private: System::Windows::Forms::Panel^ pnlShowResult;


















private: System::Windows::Forms::Button^ btnResultsToBook;
private: System::Windows::Forms::TextBox^ tbRash;


private: System::Windows::Forms::TextBox^ tbName;
private: System::Windows::Forms::TextBox^ tbCol;

private: System::Windows::Forms::TextBox^ tbProg;



private: System::Windows::Forms::Label^ lblColor;

private: System::Windows::Forms::TextBox^ tbColor;
private: System::Windows::Forms::Label^ lblSzhat;



private: System::Windows::Forms::TextBox^ tbSzhat;
private: System::Windows::Forms::TextBox^ tbShat;
private: System::Windows::Forms::TextBox^ tbType;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ btnAll;
private: System::Windows::Forms::Button^ btnDelete;
private: System::Windows::Forms::Button^ btnEdit;
private: System::Windows::Forms::Panel^ pnlEdit;

private: System::Windows::Forms::Label^ lblSzhat1;
private: System::Windows::Forms::TextBox^ tbSzhat1;
private: System::Windows::Forms::Label^ lblColor1;
private: System::Windows::Forms::TextBox^ tbColor1;
private: System::Windows::Forms::CheckBox^ typeVect1;
private: System::Windows::Forms::CheckBox^ typeRastr1;
private: System::Windows::Forms::Label^ lblType1;
private: System::Windows::Forms::TextBox^ tbProgramsSup1;
private: System::Windows::Forms::Label^ lblPrograms1;
private: System::Windows::Forms::TextBox^ tbRushFile1;
private: System::Windows::Forms::Label^ lblRush1;
private: System::Windows::Forms::Label^ lblName1;
private: System::Windows::Forms::TextBox^ tbFormName1;
private: System::Windows::Forms::Button^ btnEditForm;
private: System::Windows::Forms::Button^ btnEditFormMenu1;










































	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->btnTask = (gcnew System::Windows::Forms::Button());
			this->btnHowTo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBookOpen = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblinfo1 = (gcnew System::Windows::Forms::Label());
			this->lblinfo2 = (gcnew System::Windows::Forms::Label());
			this->pnlHowTo = (gcnew System::Windows::Forms::Panel());
			this->HowToMenu = (gcnew System::Windows::Forms::Button());
			this->tbHowTo = (gcnew System::Windows::Forms::TextBox());
			this->pnlTask = (gcnew System::Windows::Forms::Panel());
			this->btnTaskMenu = (gcnew System::Windows::Forms::Button());
			this->tbTask = (gcnew System::Windows::Forms::TextBox());
			this->pnlBook = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAll = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnToAdd = (gcnew System::Windows::Forms::Button());
			this->SubjectName = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->FormCount = (gcnew System::Windows::Forms::Label());
			this->FormatName = (gcnew System::Windows::Forms::Label());
			this->btnBookMenu = (gcnew System::Windows::Forms::Button());
			this->pnlAdd = (gcnew System::Windows::Forms::Panel());
			this->lblSzhat = (gcnew System::Windows::Forms::Label());
			this->tbSzhat = (gcnew System::Windows::Forms::TextBox());
			this->lblColor = (gcnew System::Windows::Forms::Label());
			this->tbColor = (gcnew System::Windows::Forms::TextBox());
			this->typeVect = (gcnew System::Windows::Forms::CheckBox());
			this->typeRastr = (gcnew System::Windows::Forms::CheckBox());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->tbProgramsSup = (gcnew System::Windows::Forms::TextBox());
			this->lblPrograms = (gcnew System::Windows::Forms::Label());
			this->tbRushFile = (gcnew System::Windows::Forms::TextBox());
			this->lblRush = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->tbFormName = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnAddMenu = (gcnew System::Windows::Forms::Button());
			this->pnlShowResult = (gcnew System::Windows::Forms::Panel());
			this->tbType = (gcnew System::Windows::Forms::TextBox());
			this->tbShat = (gcnew System::Windows::Forms::TextBox());
			this->tbCol = (gcnew System::Windows::Forms::TextBox());
			this->tbProg = (gcnew System::Windows::Forms::TextBox());
			this->tbRash = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->btnResultsToBook = (gcnew System::Windows::Forms::Button());
			this->pnlEdit = (gcnew System::Windows::Forms::Panel());
			this->lblSzhat1 = (gcnew System::Windows::Forms::Label());
			this->tbSzhat1 = (gcnew System::Windows::Forms::TextBox());
			this->lblColor1 = (gcnew System::Windows::Forms::Label());
			this->tbColor1 = (gcnew System::Windows::Forms::TextBox());
			this->typeVect1 = (gcnew System::Windows::Forms::CheckBox());
			this->typeRastr1 = (gcnew System::Windows::Forms::CheckBox());
			this->lblType1 = (gcnew System::Windows::Forms::Label());
			this->tbProgramsSup1 = (gcnew System::Windows::Forms::TextBox());
			this->lblPrograms1 = (gcnew System::Windows::Forms::Label());
			this->tbRushFile1 = (gcnew System::Windows::Forms::TextBox());
			this->lblRush1 = (gcnew System::Windows::Forms::Label());
			this->lblName1 = (gcnew System::Windows::Forms::Label());
			this->tbFormName1 = (gcnew System::Windows::Forms::TextBox());
			this->btnEditForm = (gcnew System::Windows::Forms::Button());
			this->btnEditFormMenu1 = (gcnew System::Windows::Forms::Button());
			this->pnlHowTo->SuspendLayout();
			this->pnlTask->SuspendLayout();
			this->pnlBook->SuspendLayout();
			this->pnlAdd->SuspendLayout();
			this->pnlShowResult->SuspendLayout();
			this->pnlEdit->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAbout
			// 
			this->btnAbout->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnAbout->FlatAppearance->BorderSize = 0;
			this->btnAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAbout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAbout->Location = System::Drawing::Point(2, 510);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(492, 58);
			this->btnAbout->TabIndex = 1;
			this->btnAbout->Text = L"О программе";
			this->btnAbout->UseVisualStyleBackColor = false;
			this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::btnAbout_Click);
			// 
			// btnTask
			// 
			this->btnTask->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnTask->FlatAppearance->BorderSize = 0;
			this->btnTask->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTask->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTask->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnTask->Location = System::Drawing::Point(2, 446);
			this->btnTask->Name = L"btnTask";
			this->btnTask->Size = System::Drawing::Size(492, 58);
			this->btnTask->TabIndex = 2;
			this->btnTask->Text = L"Задание";
			this->btnTask->UseVisualStyleBackColor = false;
			this->btnTask->Click += gcnew System::EventHandler(this, &MyForm::btnTask_Click);
			// 
			// btnHowTo
			// 
			this->btnHowTo->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnHowTo->FlatAppearance->BorderSize = 0;
			this->btnHowTo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHowTo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnHowTo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnHowTo->Location = System::Drawing::Point(2, 574);
			this->btnHowTo->Name = L"btnHowTo";
			this->btnHowTo->Size = System::Drawing::Size(492, 58);
			this->btnHowTo->TabIndex = 3;
			this->btnHowTo->Text = L"Руководство";
			this->btnHowTo->UseVisualStyleBackColor = false;
			this->btnHowTo->Click += gcnew System::EventHandler(this, &MyForm::btnHowTo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(656, 37);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Справочник по форматам графических файлов";
			// 
			// btnBookOpen
			// 
			this->btnBookOpen->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnBookOpen->FlatAppearance->BorderSize = 0;
			this->btnBookOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBookOpen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBookOpen->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBookOpen->Location = System::Drawing::Point(2, 350);
			this->btnBookOpen->Name = L"btnBookOpen";
			this->btnBookOpen->Size = System::Drawing::Size(701, 90);
			this->btnBookOpen->TabIndex = 5;
			this->btnBookOpen->Text = L"Открыть справочник";
			this->btnBookOpen->UseVisualStyleBackColor = false;
			this->btnBookOpen->Click += gcnew System::EventHandler(this, &MyForm::btnBookOpen_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::DarkRed;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnExit->Location = System::Drawing::Point(500, 446);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(203, 187);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Выход";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// lblinfo1
			// 
			this->lblinfo1->AutoSize = true;
			this->lblinfo1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblinfo1->Location = System::Drawing::Point(226, 243);
			this->lblinfo1->Name = L"lblinfo1";
			this->lblinfo1->Size = System::Drawing::Size(268, 30);
			this->lblinfo1->TabIndex = 8;
			this->lblinfo1->Text = L"Версия 1.0.0 от 01.09.2022";
			// 
			// lblinfo2
			// 
			this->lblinfo2->AutoSize = true;
			this->lblinfo2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblinfo2->Location = System::Drawing::Point(105, 278);
			this->lblinfo2->Name = L"lblinfo2";
			this->lblinfo2->Size = System::Drawing::Size(448, 30);
			this->lblinfo2->TabIndex = 9;
			this->lblinfo2->Text = L"Связь с разработчиком: kocva2003@mail.ru";
			// 
			// pnlHowTo
			// 
			this->pnlHowTo->Controls->Add(this->HowToMenu);
			this->pnlHowTo->Controls->Add(this->tbHowTo);
			this->pnlHowTo->Location = System::Drawing::Point(2, 0);
			this->pnlHowTo->Name = L"pnlHowTo";
			this->pnlHowTo->Size = System::Drawing::Size(701, 633);
			this->pnlHowTo->TabIndex = 10;
			// 
			// HowToMenu
			// 
			this->HowToMenu->BackColor = System::Drawing::SystemColors::Highlight;
			this->HowToMenu->FlatAppearance->BorderSize = 0;
			this->HowToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HowToMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HowToMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->HowToMenu->Location = System::Drawing::Point(169, 570);
			this->HowToMenu->Name = L"HowToMenu";
			this->HowToMenu->Size = System::Drawing::Size(382, 53);
			this->HowToMenu->TabIndex = 6;
			this->HowToMenu->Text = L"Назад";
			this->HowToMenu->UseVisualStyleBackColor = false;
			this->HowToMenu->Click += gcnew System::EventHandler(this, &MyForm::HowToMenu_Click);
			// 
			// tbHowTo
			// 
			this->tbHowTo->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbHowTo->Location = System::Drawing::Point(10, 149);
			this->tbHowTo->Multiline = true;
			this->tbHowTo->Name = L"tbHowTo";
			this->tbHowTo->Size = System::Drawing::Size(681, 150);
			this->tbHowTo->TabIndex = 0;
			this->tbHowTo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pnlTask
			// 
			this->pnlTask->Controls->Add(this->btnTaskMenu);
			this->pnlTask->Controls->Add(this->tbTask);
			this->pnlTask->Location = System::Drawing::Point(2, 0);
			this->pnlTask->Name = L"pnlTask";
			this->pnlTask->Size = System::Drawing::Size(701, 633);
			this->pnlTask->TabIndex = 11;
			// 
			// btnTaskMenu
			// 
			this->btnTaskMenu->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnTaskMenu->FlatAppearance->BorderSize = 0;
			this->btnTaskMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTaskMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTaskMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnTaskMenu->Location = System::Drawing::Point(169, 570);
			this->btnTaskMenu->Name = L"btnTaskMenu";
			this->btnTaskMenu->Size = System::Drawing::Size(382, 50);
			this->btnTaskMenu->TabIndex = 6;
			this->btnTaskMenu->Text = L"В меню";
			this->btnTaskMenu->UseVisualStyleBackColor = false;
			this->btnTaskMenu->Click += gcnew System::EventHandler(this, &MyForm::btnTaskMenu_Click);
			// 
			// tbTask
			// 
			this->tbTask->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbTask->Location = System::Drawing::Point(12, 32);
			this->tbTask->Multiline = true;
			this->tbTask->Name = L"tbTask";
			this->tbTask->Size = System::Drawing::Size(681, 414);
			this->tbTask->TabIndex = 0;
			this->tbTask->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pnlBook
			// 
			this->pnlBook->Controls->Add(this->label2);
			this->pnlBook->Controls->Add(this->textBox1);
			this->pnlBook->Controls->Add(this->btnAll);
			this->pnlBook->Controls->Add(this->btnDelete);
			this->pnlBook->Controls->Add(this->btnEdit);
			this->pnlBook->Controls->Add(this->btnToAdd);
			this->pnlBook->Controls->Add(this->SubjectName);
			this->pnlBook->Controls->Add(this->textBox2);
			this->pnlBook->Controls->Add(this->btnSearch);
			this->pnlBook->Controls->Add(this->FormCount);
			this->pnlBook->Controls->Add(this->FormatName);
			this->pnlBook->Controls->Add(this->btnBookMenu);
			this->pnlBook->Location = System::Drawing::Point(2, 0);
			this->pnlBook->Name = L"pnlBook";
			this->pnlBook->Size = System::Drawing::Size(701, 632);
			this->pnlBook->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(223, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 32);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Название формата:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(73, 218);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(549, 39);
			this->textBox1->TabIndex = 23;
			// 
			// btnAll
			// 
			this->btnAll->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnAll->FlatAppearance->BorderSize = 0;
			this->btnAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAll->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAll->Location = System::Drawing::Point(73, 405);
			this->btnAll->Name = L"btnAll";
			this->btnAll->Size = System::Drawing::Size(549, 65);
			this->btnAll->TabIndex = 22;
			this->btnAll->Text = L"Просмотреть весь список";
			this->btnAll->UseVisualStyleBackColor = false;
			this->btnAll->Click += gcnew System::EventHandler(this, &MyForm::BtnAll_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDelete->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDelete->Location = System::Drawing::Point(73, 334);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(549, 65);
			this->btnDelete->TabIndex = 21;
			this->btnDelete->Text = L"Удалить запись";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::BtnDelete_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnEdit->FlatAppearance->BorderSize = 0;
			this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEdit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEdit->Location = System::Drawing::Point(73, 263);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(549, 65);
			this->btnEdit->TabIndex = 20;
			this->btnEdit->Text = L"Изменить запись";
			this->btnEdit->UseVisualStyleBackColor = false;
			this->btnEdit->Click += gcnew System::EventHandler(this, &MyForm::BtnEdit_Click);
			// 
			// btnToAdd
			// 
			this->btnToAdd->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnToAdd->FlatAppearance->BorderSize = 0;
			this->btnToAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnToAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnToAdd->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnToAdd->Location = System::Drawing::Point(73, 504);
			this->btnToAdd->Name = L"btnToAdd";
			this->btnToAdd->Size = System::Drawing::Size(549, 60);
			this->btnToAdd->TabIndex = 19;
			this->btnToAdd->Text = L"Добавить запись";
			this->btnToAdd->UseVisualStyleBackColor = false;
			this->btnToAdd->Click += gcnew System::EventHandler(this, &MyForm::btnToAdd_Click);
			// 
			// SubjectName
			// 
			this->SubjectName->AutoSize = true;
			this->SubjectName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->SubjectName->Location = System::Drawing::Point(223, 54);
			this->SubjectName->Name = L"SubjectName";
			this->SubjectName->Size = System::Drawing::Size(238, 32);
			this->SubjectName->TabIndex = 18;
			this->SubjectName->Text = L"Расширение файла:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(73, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(549, 39);
			this->textBox2->TabIndex = 17;
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnSearch->FlatAppearance->BorderSize = 0;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSearch->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSearch->Location = System::Drawing::Point(73, 130);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(549, 49);
			this->btnSearch->TabIndex = 15;
			this->btnSearch->Text = L"Поиск записи";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// FormCount
			// 
			this->FormCount->AutoSize = true;
			this->FormCount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->FormCount->Location = System::Drawing::Point(26, 22);
			this->FormCount->Name = L"FormCount";
			this->FormCount->Size = System::Drawing::Size(308, 32);
			this->FormCount->TabIndex = 14;
			this->FormCount->Text = L"Файлов больше формата:";
			// 
			// FormatName
			// 
			this->FormatName->AutoSize = true;
			this->FormatName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->FormatName->Location = System::Drawing::Point(340, 22);
			this->FormatName->Name = L"FormatName";
			this->FormatName->Size = System::Drawing::Size(25, 32);
			this->FormatName->TabIndex = 12;
			this->FormatName->Text = L"1";
			// 
			// btnBookMenu
			// 
			this->btnBookMenu->BackColor = System::Drawing::Color::DarkRed;
			this->btnBookMenu->FlatAppearance->BorderSize = 0;
			this->btnBookMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBookMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBookMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBookMenu->Location = System::Drawing::Point(73, 570);
			this->btnBookMenu->Name = L"btnBookMenu";
			this->btnBookMenu->Size = System::Drawing::Size(549, 53);
			this->btnBookMenu->TabIndex = 6;
			this->btnBookMenu->Text = L"Назад";
			this->btnBookMenu->UseVisualStyleBackColor = false;
			this->btnBookMenu->Click += gcnew System::EventHandler(this, &MyForm::btnBookMenu_Click);
			// 
			// pnlAdd
			// 
			this->pnlAdd->Controls->Add(this->lblSzhat);
			this->pnlAdd->Controls->Add(this->tbSzhat);
			this->pnlAdd->Controls->Add(this->lblColor);
			this->pnlAdd->Controls->Add(this->tbColor);
			this->pnlAdd->Controls->Add(this->typeVect);
			this->pnlAdd->Controls->Add(this->typeRastr);
			this->pnlAdd->Controls->Add(this->lblType);
			this->pnlAdd->Controls->Add(this->tbProgramsSup);
			this->pnlAdd->Controls->Add(this->lblPrograms);
			this->pnlAdd->Controls->Add(this->tbRushFile);
			this->pnlAdd->Controls->Add(this->lblRush);
			this->pnlAdd->Controls->Add(this->lblName);
			this->pnlAdd->Controls->Add(this->tbFormName);
			this->pnlAdd->Controls->Add(this->btnAdd);
			this->pnlAdd->Controls->Add(this->btnAddMenu);
			this->pnlAdd->Location = System::Drawing::Point(2, 0);
			this->pnlAdd->Name = L"pnlAdd";
			this->pnlAdd->Size = System::Drawing::Size(701, 632);
			this->pnlAdd->TabIndex = 13;
			// 
			// lblSzhat
			// 
			this->lblSzhat->AutoSize = true;
			this->lblSzhat->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblSzhat->Location = System::Drawing::Point(11, 250);
			this->lblSzhat->Name = L"lblSzhat";
			this->lblSzhat->Size = System::Drawing::Size(99, 32);
			this->lblSzhat->TabIndex = 39;
			this->lblSzhat->Text = L"Сжатие";
			// 
			// tbSzhat
			// 
			this->tbSzhat->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbSzhat->Location = System::Drawing::Point(298, 243);
			this->tbSzhat->Name = L"tbSzhat";
			this->tbSzhat->Size = System::Drawing::Size(393, 39);
			this->tbSzhat->TabIndex = 38;
			this->tbSzhat->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbSzhat_KeyPress);
			// 
			// lblColor
			// 
			this->lblColor->AutoSize = true;
			this->lblColor->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblColor->Location = System::Drawing::Point(11, 192);
			this->lblColor->Name = L"lblColor";
			this->lblColor->Size = System::Drawing::Size(287, 32);
			this->lblColor->TabIndex = 37;
			this->lblColor->Text = L"Цветовые возможности";
			// 
			// tbColor
			// 
			this->tbColor->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbColor->Location = System::Drawing::Point(298, 189);
			this->tbColor->Name = L"tbColor";
			this->tbColor->Size = System::Drawing::Size(393, 39);
			this->tbColor->TabIndex = 36;
			this->tbColor->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbColor_KeyPress);
			// 
			// typeVect
			// 
			this->typeVect->AutoSize = true;
			this->typeVect->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->typeVect->Location = System::Drawing::Point(563, 307);
			this->typeVect->Name = L"typeVect";
			this->typeVect->Size = System::Drawing::Size(128, 29);
			this->typeVect->TabIndex = 32;
			this->typeVect->Text = L"Векторный";
			this->typeVect->UseVisualStyleBackColor = true;
			this->typeVect->CheckedChanged += gcnew System::EventHandler(this, &MyForm::typeVect_CheckedChanged);
			// 
			// typeRastr
			// 
			this->typeRastr->AutoSize = true;
			this->typeRastr->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->typeRastr->Location = System::Drawing::Point(298, 307);
			this->typeRastr->Name = L"typeRastr";
			this->typeRastr->Size = System::Drawing::Size(126, 29);
			this->typeRastr->TabIndex = 30;
			this->typeRastr->Text = L"Растровый";
			this->typeRastr->UseVisualStyleBackColor = true;
			this->typeRastr->CheckedChanged += gcnew System::EventHandler(this, &MyForm::typeRastr_CheckedChanged);
			// 
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblType->Location = System::Drawing::Point(11, 302);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(54, 32);
			this->lblType->TabIndex = 23;
			this->lblType->Text = L"Тип";
			// 
			// tbProgramsSup
			// 
			this->tbProgramsSup->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbProgramsSup->Location = System::Drawing::Point(298, 140);
			this->tbProgramsSup->Name = L"tbProgramsSup";
			this->tbProgramsSup->Size = System::Drawing::Size(393, 39);
			this->tbProgramsSup->TabIndex = 22;
			this->tbProgramsSup->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbProgramsSup_KeyPress);
			// 
			// lblPrograms
			// 
			this->lblPrograms->AutoSize = true;
			this->lblPrograms->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblPrograms->Location = System::Drawing::Point(11, 143);
			this->lblPrograms->Name = L"lblPrograms";
			this->lblPrograms->Size = System::Drawing::Size(267, 32);
			this->lblPrograms->TabIndex = 21;
			this->lblPrograms->Text = L"Поддерж. программы";
			// 
			// tbRushFile
			// 
			this->tbRushFile->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbRushFile->Location = System::Drawing::Point(298, 40);
			this->tbRushFile->Name = L"tbRushFile";
			this->tbRushFile->Size = System::Drawing::Size(393, 39);
			this->tbRushFile->TabIndex = 20;
			this->tbRushFile->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbRushFile_KeyPress);
			// 
			// lblRush
			// 
			this->lblRush->AutoSize = true;
			this->lblRush->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblRush->Location = System::Drawing::Point(11, 47);
			this->lblRush->Name = L"lblRush";
			this->lblRush->Size = System::Drawing::Size(232, 32);
			this->lblRush->TabIndex = 19;
			this->lblRush->Text = L"Расширение файла";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblName->Location = System::Drawing::Point(11, 97);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(231, 32);
			this->lblName->TabIndex = 18;
			this->lblName->Text = L"Название формата";
			// 
			// tbFormName
			// 
			this->tbFormName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbFormName->Location = System::Drawing::Point(298, 90);
			this->tbFormName->Name = L"tbFormName";
			this->tbFormName->Size = System::Drawing::Size(393, 39);
			this->tbFormName->TabIndex = 17;
			this->tbFormName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbFormName_KeyPress);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::DarkRed;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAdd->Location = System::Drawing::Point(77, 506);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(549, 58);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Добавить";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnAddMenu
			// 
			this->btnAddMenu->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnAddMenu->FlatAppearance->BorderSize = 0;
			this->btnAddMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAddMenu->Location = System::Drawing::Point(160, 570);
			this->btnAddMenu->Name = L"btnAddMenu";
			this->btnAddMenu->Size = System::Drawing::Size(382, 53);
			this->btnAddMenu->TabIndex = 6;
			this->btnAddMenu->Text = L"Назад";
			this->btnAddMenu->UseVisualStyleBackColor = false;
			this->btnAddMenu->Click += gcnew System::EventHandler(this, &MyForm::btnAddMenu_Click);
			// 
			// pnlShowResult
			// 
			this->pnlShowResult->Controls->Add(this->tbType);
			this->pnlShowResult->Controls->Add(this->tbShat);
			this->pnlShowResult->Controls->Add(this->tbCol);
			this->pnlShowResult->Controls->Add(this->tbProg);
			this->pnlShowResult->Controls->Add(this->tbRash);
			this->pnlShowResult->Controls->Add(this->tbName);
			this->pnlShowResult->Controls->Add(this->btnResultsToBook);
			this->pnlShowResult->Location = System::Drawing::Point(2, 1);
			this->pnlShowResult->Name = L"pnlShowResult";
			this->pnlShowResult->Size = System::Drawing::Size(701, 632);
			this->pnlShowResult->TabIndex = 14;
			// 
			// tbType
			// 
			this->tbType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->tbType->Location = System::Drawing::Point(504, 29);
			this->tbType->Multiline = true;
			this->tbType->Name = L"tbType";
			this->tbType->Size = System::Drawing::Size(100, 435);
			this->tbType->TabIndex = 12;
			// 
			// tbShat
			// 
			this->tbShat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->tbShat->Location = System::Drawing::Point(404, 29);
			this->tbShat->Multiline = true;
			this->tbShat->Name = L"tbShat";
			this->tbShat->Size = System::Drawing::Size(100, 435);
			this->tbShat->TabIndex = 11;
			// 
			// tbCol
			// 
			this->tbCol->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbCol->Location = System::Drawing::Point(304, 30);
			this->tbCol->Multiline = true;
			this->tbCol->Name = L"tbCol";
			this->tbCol->Size = System::Drawing::Size(100, 435);
			this->tbCol->TabIndex = 10;
			// 
			// tbProg
			// 
			this->tbProg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbProg->Location = System::Drawing::Point(204, 29);
			this->tbProg->Multiline = true;
			this->tbProg->Name = L"tbProg";
			this->tbProg->Size = System::Drawing::Size(100, 435);
			this->tbProg->TabIndex = 9;
			// 
			// tbRash
			// 
			this->tbRash->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbRash->Location = System::Drawing::Point(104, 29);
			this->tbRash->Multiline = true;
			this->tbRash->Name = L"tbRash";
			this->tbRash->Size = System::Drawing::Size(100, 435);
			this->tbRash->TabIndex = 8;
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbName->Location = System::Drawing::Point(4, 29);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(100, 435);
			this->tbName->TabIndex = 7;
			// 
			// btnResultsToBook
			// 
			this->btnResultsToBook->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnResultsToBook->FlatAppearance->BorderSize = 0;
			this->btnResultsToBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResultsToBook->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnResultsToBook->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnResultsToBook->Location = System::Drawing::Point(73, 569);
			this->btnResultsToBook->Name = L"btnResultsToBook";
			this->btnResultsToBook->Size = System::Drawing::Size(549, 50);
			this->btnResultsToBook->TabIndex = 6;
			this->btnResultsToBook->Text = L"Назад";
			this->btnResultsToBook->UseVisualStyleBackColor = false;
			this->btnResultsToBook->Click += gcnew System::EventHandler(this, &MyForm::btnResultsToBook_Click);
			// 
			// pnlEdit
			// 
			this->pnlEdit->Controls->Add(this->lblSzhat1);
			this->pnlEdit->Controls->Add(this->tbSzhat1);
			this->pnlEdit->Controls->Add(this->lblColor1);
			this->pnlEdit->Controls->Add(this->tbColor1);
			this->pnlEdit->Controls->Add(this->typeVect1);
			this->pnlEdit->Controls->Add(this->typeRastr1);
			this->pnlEdit->Controls->Add(this->lblType1);
			this->pnlEdit->Controls->Add(this->tbProgramsSup1);
			this->pnlEdit->Controls->Add(this->lblPrograms1);
			this->pnlEdit->Controls->Add(this->tbRushFile1);
			this->pnlEdit->Controls->Add(this->lblRush1);
			this->pnlEdit->Controls->Add(this->lblName1);
			this->pnlEdit->Controls->Add(this->tbFormName1);
			this->pnlEdit->Controls->Add(this->btnEditForm);
			this->pnlEdit->Controls->Add(this->btnEditFormMenu1);
			this->pnlEdit->Location = System::Drawing::Point(2, 0);
			this->pnlEdit->Name = L"pnlEdit";
			this->pnlEdit->Size = System::Drawing::Size(701, 633);
			this->pnlEdit->TabIndex = 15;
			// 
			// lblSzhat1
			// 
			this->lblSzhat1->AutoSize = true;
			this->lblSzhat1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblSzhat1->Location = System::Drawing::Point(11, 250);
			this->lblSzhat1->Name = L"lblSzhat1";
			this->lblSzhat1->Size = System::Drawing::Size(99, 32);
			this->lblSzhat1->TabIndex = 39;
			this->lblSzhat1->Text = L"Сжатие";
			// 
			// tbSzhat1
			// 
			this->tbSzhat1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbSzhat1->Location = System::Drawing::Point(298, 243);
			this->tbSzhat1->Name = L"tbSzhat1";
			this->tbSzhat1->Size = System::Drawing::Size(393, 39);
			this->tbSzhat1->TabIndex = 38;
			this->tbSzhat1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbSzhat1_KeyPress);
			// 
			// lblColor1
			// 
			this->lblColor1->AutoSize = true;
			this->lblColor1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblColor1->Location = System::Drawing::Point(11, 192);
			this->lblColor1->Name = L"lblColor1";
			this->lblColor1->Size = System::Drawing::Size(287, 32);
			this->lblColor1->TabIndex = 37;
			this->lblColor1->Text = L"Цветовые возможности";
			// 
			// tbColor1
			// 
			this->tbColor1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbColor1->Location = System::Drawing::Point(298, 189);
			this->tbColor1->Name = L"tbColor1";
			this->tbColor1->Size = System::Drawing::Size(393, 39);
			this->tbColor1->TabIndex = 36;
			this->tbColor1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbColor1_KeyPress);
			// 
			// typeVect1
			// 
			this->typeVect1->AutoSize = true;
			this->typeVect1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->typeVect1->Location = System::Drawing::Point(563, 307);
			this->typeVect1->Name = L"typeVect1";
			this->typeVect1->Size = System::Drawing::Size(128, 29);
			this->typeVect1->TabIndex = 32;
			this->typeVect1->Text = L"Векторный";
			this->typeVect1->UseVisualStyleBackColor = true;
			this->typeVect1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TypeVect1_CheckedChanged);
			// 
			// typeRastr1
			// 
			this->typeRastr1->AutoSize = true;
			this->typeRastr1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->typeRastr1->Location = System::Drawing::Point(298, 307);
			this->typeRastr1->Name = L"typeRastr1";
			this->typeRastr1->Size = System::Drawing::Size(126, 29);
			this->typeRastr1->TabIndex = 30;
			this->typeRastr1->Text = L"Растровый";
			this->typeRastr1->UseVisualStyleBackColor = true;
			this->typeRastr1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TypeRastr1_CheckedChanged);
			// 
			// lblType1
			// 
			this->lblType1->AutoSize = true;
			this->lblType1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblType1->Location = System::Drawing::Point(11, 302);
			this->lblType1->Name = L"lblType1";
			this->lblType1->Size = System::Drawing::Size(54, 32);
			this->lblType1->TabIndex = 23;
			this->lblType1->Text = L"Тип";
			// 
			// tbProgramsSup1
			// 
			this->tbProgramsSup1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbProgramsSup1->Location = System::Drawing::Point(298, 140);
			this->tbProgramsSup1->Name = L"tbProgramsSup1";
			this->tbProgramsSup1->Size = System::Drawing::Size(393, 39);
			this->tbProgramsSup1->TabIndex = 22;
			this->tbProgramsSup1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbProgramsSup1_KeyPress);
			// 
			// lblPrograms1
			// 
			this->lblPrograms1->AutoSize = true;
			this->lblPrograms1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblPrograms1->Location = System::Drawing::Point(11, 143);
			this->lblPrograms1->Name = L"lblPrograms1";
			this->lblPrograms1->Size = System::Drawing::Size(267, 32);
			this->lblPrograms1->TabIndex = 21;
			this->lblPrograms1->Text = L"Поддерж. программы";
			// 
			// tbRushFile1
			// 
			this->tbRushFile1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbRushFile1->Location = System::Drawing::Point(298, 40);
			this->tbRushFile1->Name = L"tbRushFile1";
			this->tbRushFile1->Size = System::Drawing::Size(393, 39);
			this->tbRushFile1->TabIndex = 20;
			this->tbRushFile1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbRushFile1_KeyPress);
			// 
			// lblRush1
			// 
			this->lblRush1->AutoSize = true;
			this->lblRush1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblRush1->Location = System::Drawing::Point(11, 47);
			this->lblRush1->Name = L"lblRush1";
			this->lblRush1->Size = System::Drawing::Size(232, 32);
			this->lblRush1->TabIndex = 19;
			this->lblRush1->Text = L"Расширение файла";
			// 
			// lblName1
			// 
			this->lblName1->AutoSize = true;
			this->lblName1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblName1->Location = System::Drawing::Point(11, 97);
			this->lblName1->Name = L"lblName1";
			this->lblName1->Size = System::Drawing::Size(231, 32);
			this->lblName1->TabIndex = 18;
			this->lblName1->Text = L"Название формата";
			// 
			// tbFormName1
			// 
			this->tbFormName1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbFormName1->Location = System::Drawing::Point(298, 90);
			this->tbFormName1->Name = L"tbFormName1";
			this->tbFormName1->Size = System::Drawing::Size(393, 39);
			this->tbFormName1->TabIndex = 17;
			this->tbFormName1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbFormName1_KeyPress);
			// 
			// btnEditForm
			// 
			this->btnEditForm->BackColor = System::Drawing::Color::DarkRed;
			this->btnEditForm->FlatAppearance->BorderSize = 0;
			this->btnEditForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditForm->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditForm->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEditForm->Location = System::Drawing::Point(77, 506);
			this->btnEditForm->Name = L"btnEditForm";
			this->btnEditForm->Size = System::Drawing::Size(549, 58);
			this->btnEditForm->TabIndex = 15;
			this->btnEditForm->Text = L"Изменить";
			this->btnEditForm->UseVisualStyleBackColor = false;
			this->btnEditForm->Click += gcnew System::EventHandler(this, &MyForm::BtnEditForm_Click);
			// 
			// btnEditFormMenu1
			// 
			this->btnEditFormMenu1->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnEditFormMenu1->FlatAppearance->BorderSize = 0;
			this->btnEditFormMenu1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditFormMenu1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditFormMenu1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEditFormMenu1->Location = System::Drawing::Point(160, 570);
			this->btnEditFormMenu1->Name = L"btnEditFormMenu1";
			this->btnEditFormMenu1->Size = System::Drawing::Size(382, 53);
			this->btnEditFormMenu1->TabIndex = 6;
			this->btnEditFormMenu1->Text = L"Назад";
			this->btnEditFormMenu1->UseVisualStyleBackColor = false;
			this->btnEditFormMenu1->Click += gcnew System::EventHandler(this, &MyForm::BtnEditFormMenu1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(710, 640);
			this->Controls->Add(this->pnlEdit);
			this->Controls->Add(this->pnlShowResult);
			this->Controls->Add(this->pnlAdd);
			this->Controls->Add(this->pnlBook);
			this->Controls->Add(this->pnlTask);
			this->Controls->Add(this->pnlHowTo);
			this->Controls->Add(this->lblinfo2);
			this->Controls->Add(this->lblinfo1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnBookOpen);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnHowTo);
			this->Controls->Add(this->btnTask);
			this->Controls->Add(this->btnAbout);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник";
			this->pnlHowTo->ResumeLayout(false);
			this->pnlHowTo->PerformLayout();
			this->pnlTask->ResumeLayout(false);
			this->pnlTask->PerformLayout();
			this->pnlBook->ResumeLayout(false);
			this->pnlBook->PerformLayout();
			this->pnlAdd->ResumeLayout(false);
			this->pnlAdd->PerformLayout();
			this->pnlShowResult->ResumeLayout(false);
			this->pnlShowResult->PerformLayout();
			this->pnlEdit->ResumeLayout(false);
			this->pnlEdit->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	bool isShown = false;
	String^ ChosenType;
	String^ ChosenType1;
	String^ specToFind;

	void FillInfo(String^ chosenSpec) {
		StreamReader^ sr = gcnew StreamReader("data1.bin");

		String^ lineReader;
		String^ FileRash;
		String^ FileName;
		String^ FileProg;
		String^ FileColor;
		String^ FileShat;
		String^ FileType;


		lineReader = sr->ReadLine();
		while (lineReader) {
			if (lineReader == chosenSpec) {
				FileRash += lineReader + "\r\n";
				FileName += sr->ReadLine() + "\r\n";
				FileProg += sr->ReadLine() + "\r\n";
				FileColor += sr->ReadLine() + "\r\n";
				FileShat += sr->ReadLine() + "\r\n";
				FileType += sr->ReadLine() + "\r\n";
			}
			else {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
			}
			lineReader = sr->ReadLine();
		}
		sr->Close();

		StreamReader^ sr2 = gcnew StreamReader("data2.bin");
		lineReader = sr2->ReadLine();
		while (lineReader) {
			if (lineReader == chosenSpec) {
				FileRash += lineReader + "\r\n";
				FileName += sr2->ReadLine() + "\r\n";
				FileProg += sr2->ReadLine() + "\r\n";
				FileColor += sr2->ReadLine() + "\r\n";
				FileShat += sr2->ReadLine() + "\r\n";
				FileType += sr2->ReadLine() + "\r\n";
			}
			else {
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
			}
			lineReader = sr2->ReadLine();
		}
		sr2->Close();


		tbName->Text = FileRash;
		tbRash->Text = FileName;
		tbProg->Text = FileProg;
		tbCol->Text = FileColor;
		tbShat->Text = FileShat;
		tbType->Text = FileType;


	}

	void FormatCount() { 
		String^ lineReader;
		int rust = 0;
		int vect = 0;
		StreamReader^ srData = gcnew StreamReader("data1.bin");
		lineReader = srData->ReadLine();
		while (lineReader) {
			srData->ReadLine();
			srData->ReadLine();
			srData->ReadLine();
			srData->ReadLine();
			srData->ReadLine();
			lineReader = srData->ReadLine();
			rust += 1;

		}
		srData->Close();

		StreamReader^ srdata2 = gcnew StreamReader("data2.bin");
		lineReader = srdata2->ReadLine();
		while (lineReader) {
			srdata2->ReadLine();
			srdata2->ReadLine();
			srdata2->ReadLine();
			srdata2->ReadLine();
			srdata2->ReadLine();
			lineReader = srdata2->ReadLine();
			vect += 1;

		}
		srdata2->Close();

		if (vect > rust) {
			FormatName->Text = "векторный";

		}
		else if (vect < rust) {
			FormatName->Text = "растровый";

		}
		else {
			FormatName->Text = "Равное кол-во";
		}
		
	}

	void OutputAll() {
		StreamReader^ sr = gcnew StreamReader("data1.bin");

		String^ lineReader;
		String^ FileRash;
		String^ FileName;
		String^ FileProg;
		String^ FileColor;
		String^ FileShat;
		String^ FileType;


		lineReader = sr->ReadLine();
		while (lineReader) {
				FileRash += lineReader + "\r\n";
				FileName += sr->ReadLine() + "\r\n";
				FileProg += sr->ReadLine() + "\r\n";
				FileColor += sr->ReadLine() + "\r\n";
				FileShat += sr->ReadLine() + "\r\n";
				FileType += sr->ReadLine() + "\r\n";
			
			
			lineReader = sr->ReadLine();
		}
		sr->Close();

		StreamReader^ sr2 = gcnew StreamReader("data2.bin");
		lineReader = sr2->ReadLine();
		while (lineReader) {
			
				FileRash += lineReader + "\r\n";
				FileName += sr2->ReadLine() + "\r\n";
				FileProg += sr2->ReadLine() + "\r\n";
				FileColor += sr2->ReadLine() + "\r\n";
				FileShat += sr2->ReadLine() + "\r\n";
				FileType += sr2->ReadLine() + "\r\n";
			
			lineReader = sr2->ReadLine();
		}
		sr2->Close();


		tbName->Text = FileRash;
		tbRash->Text = FileName;
		tbProg->Text = FileProg;
		tbCol->Text = FileColor;
		tbShat->Text = FileShat;
		tbType->Text = FileType;
	}

	void Delete(String^ chosenSpec) {
		
		StreamReader^ sr = gcnew StreamReader("data1.bin");
		StreamReader^ sr2 = gcnew StreamReader("data1.bin");
		StreamReader^ sr3 = gcnew StreamReader("data1.bin");
		StreamReader^ sr4 = gcnew StreamReader("data1.bin");
		StreamWriter^ sw = gcnew StreamWriter("data3.bin");
		StreamWriter^ sw2 = gcnew StreamWriter("data4.bin");
		String^ lineReader;
		String^ lineReader2;
		String^ lineReader3;
		String^ lineReader4;
		lineReader = sr->ReadLine();
		while (lineReader) {
			
			if (lineReader == chosenSpec) {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				lineReader = sr->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				lineReader2 = sr2->ReadLine();
			}
			else {
				lineReader2 = sr2->ReadLine();
				lineReader = sr->ReadLine();
				if (lineReader != chosenSpec) {
					sw->WriteLine(lineReader2);
					sw->Flush();
				}
			}
			
		}
		sr->Close();
		sr2->Close();
		sw->Close();
		


		lineReader3 = sr3->ReadLine();
		while (lineReader3) {

			if (lineReader3 == chosenSpec) {
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
				lineReader3 = sr3->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				lineReader4 = sr4->ReadLine();
			}
			else {
				lineReader4 = sr4->ReadLine();
				lineReader3 = sr3->ReadLine();
				if (lineReader3 != chosenSpec) {
					sw2->WriteLine(lineReader4);
					sw2->Flush();
				}
			}

		}
		sr3->Close();
		sr4->Close();
		sw2->Close();
		string file_name1 = "data1.bin";
		string file_name2 = "data2.bin";
		string old_file_name1 = "data3.bin";
		string old_file_name2 = "data4.bin";
		remove(file_name2.c_str());
		rename(old_file_name2.c_str(), file_name2.c_str());
		remove(file_name1.c_str());
		rename(old_file_name1.c_str(), file_name1.c_str());
	}

	void edit(String^ chosenSpec) {
		StreamReader^ sr = gcnew StreamReader("data1.bin");
		StreamReader^ sr2 = gcnew StreamReader("data1.bin");
		StreamReader^ sr3 = gcnew StreamReader("data2.bin");
		StreamReader^ sr4 = gcnew StreamReader("data2.bin");
		StreamWriter^ sw = gcnew StreamWriter("data3.bin");
		StreamWriter^ sw2 = gcnew StreamWriter("data4.bin");
		String^ lineReader;
		String^ lineReader2;
		String^ lineReader3;
		String^ lineReader4;
		lineReader = sr->ReadLine();
		while (lineReader) {

			if (lineReader == chosenSpec) {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				lineReader = sr->ReadLine();
				if (ChosenType1 == "Растровый") {
					sw->WriteLine(tbRushFile1->Text);
					sw->WriteLine(tbFormName1->Text);
					sw->WriteLine(tbProgramsSup1->Text);
					sw->WriteLine(tbColor1->Text);
					sw->WriteLine(tbSzhat1->Text);
					sw->WriteLine(ChosenType1);
					sw->Flush();
				}
				else {
					sw2->WriteLine(tbRushFile1->Text);
					sw2->WriteLine(tbFormName1->Text);
					sw2->WriteLine(tbProgramsSup1->Text);
					sw2->WriteLine(tbColor1->Text);
					sw2->WriteLine(tbSzhat1->Text);
					sw2->WriteLine(ChosenType1);
					sw2->Flush();
				}
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				lineReader2 = sr2->ReadLine();
			}
			else {
				lineReader2 = sr2->ReadLine();
				lineReader = sr->ReadLine();
				if (lineReader != chosenSpec) {
					sw->WriteLine(lineReader2);
					sw->Flush();
				}
			}

		}
		sr->Close();
		sr2->Close();
		



		lineReader3 = sr3->ReadLine();
		while (lineReader3) {

			if (lineReader3 == chosenSpec) {
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
				lineReader3 = sr3->ReadLine();
				if (ChosenType1 == "Растровый") {
					sw->WriteLine(tbRushFile1->Text);
					sw->WriteLine(tbFormName1->Text);
					sw->WriteLine(tbProgramsSup1->Text);
					sw->WriteLine(tbColor1->Text);
					sw->WriteLine(tbSzhat1->Text);
					sw->WriteLine(ChosenType1);
					sw->Flush();
				}
				else {
					sw2->WriteLine(tbRushFile1->Text);
					sw2->WriteLine(tbFormName1->Text);
					sw2->WriteLine(tbProgramsSup1->Text);
					sw2->WriteLine(tbColor1->Text);
					sw2->WriteLine(tbSzhat1->Text);
					sw2->WriteLine(ChosenType1);
					sw2->Flush();
				}
				sr4->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				lineReader4 = sr4->ReadLine();
			}
			else {
				lineReader4 = sr4->ReadLine();
				lineReader3 = sr3->ReadLine();
				if (lineReader3 != chosenSpec) {
					sw2->WriteLine(lineReader4);
					sw2->Flush();
				}
			}

		}
		sr3->Close();
		sr4->Close();
		sw->Close();
		sw2->Close();
		string file_name1 = "data1.bin";
		string file_name2 = "data2.bin";
		string old_file_name1 = "data3.bin";
		string old_file_name2 = "data4.bin";
		remove(file_name2.c_str());
		rename(old_file_name2.c_str(), file_name2.c_str());
		remove(file_name1.c_str());
		rename(old_file_name1.c_str(), file_name1.c_str());

	}


	void found(String^ chosenSpec) {
		StreamReader^ sr = gcnew StreamReader("data1.bin");
		StreamReader^ sr2 = gcnew StreamReader("data1.bin");
		StreamReader^ sr3 = gcnew StreamReader("data2.bin");
		StreamReader^ sr4 = gcnew StreamReader("data2.bin");
		String^ lineReader;
		String^ lineReader2;
		String^ lineReader3;
		String^ lineReader4;
		lineReader = sr->ReadLine();
		while (lineReader) {

			if (lineReader == chosenSpec) {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				lineReader = sr->ReadLine();
				tbRushFile1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbFormName1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbProgramsSup1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbColor1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbSzhat1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				if (lineReader2 == "Растровый") {
					typeRastr1->Checked = true;
				}
				else {
					typeVect1->Checked = true;
				}
			}
			else {
				lineReader2 = sr2->ReadLine();
				lineReader = sr->ReadLine();
				
			}

		}
		sr->Close();
		sr2->Close();
		



		lineReader3 = sr3->ReadLine();
		while (lineReader3) {

			if (lineReader3 == chosenSpec) {
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
				lineReader3 = sr3->ReadLine();
				
				tbRushFile1->Text = lineReader4;
				lineReader4 = sr4->ReadLine();
				tbFormName1->Text = lineReader4;
				lineReader4 = sr4->ReadLine();
				tbProgramsSup1->Text = lineReader4;
				lineReader4 = sr4->ReadLine();
				tbColor1->Text = lineReader4;
				lineReader4 = sr4->ReadLine();
				tbSzhat1->Text = lineReader4;
				lineReader4 = sr4->ReadLine();
				if (lineReader4 == "Растровый") {
					typeRastr1->Checked = true;
				}
				else {
					typeVect1->Checked = true;
				}
			}
			else {
				lineReader4 = sr4->ReadLine();
				lineReader3 = sr3->ReadLine();
				
			}

		}
		sr3->Close();
		sr4->Close();
	}


private: System::Void btnBookOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Show();
	FormatCount();
}
private: System::Void btnTask_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTask->Show();
	String^ lineReader;
	StreamReader^ srtask = gcnew StreamReader("Task.txt");
	lineReader = srtask->ReadLine();
	tbTask->Text = lineReader;
	srtask->Close();
}
private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isShown) {
		lblinfo1->Hide();
		lblinfo2->Hide();
		isShown = false;
		btnAbout->Text = "О программе";
	}
	else {
		lblinfo1->Show();
		lblinfo2->Show();
		isShown = true;
		btnAbout->Text = "О программе (скрыть)";
	}
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btnTaskMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTask->Hide();
}
private: System::Void HowToMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlHowTo->Hide();
}
private: System::Void btnHowTo_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlHowTo->Show();
	String^ lineReader;
	StreamReader^ srhow = gcnew StreamReader("HowTo.txt");
	lineReader = srhow->ReadLine();
	tbHowTo->Text = lineReader;
	srhow->Close();
}
private: System::Void btnBookMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Hide();
}
private: System::Void btnToAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Hide();
	pnlAdd->Show();
	btnAdd->Enabled = false;
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	specToFind = textBox2->Text;
	FillInfo(specToFind);
	pnlBook->Hide();
	pnlShowResult->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Hide();
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!tbFormName->TextLength) {
		MessageBox::Show("Название формата не введено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (!tbRushFile->TextLength) {
			MessageBox::Show("Расширение файла не введено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!tbProgramsSup->TextLength) {
				MessageBox::Show("Поддерживаемые программы не введены", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				if (!tbColor->TextLength) {
					MessageBox::Show("Цветовые возможности не введены", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					if (!tbSzhat->TextLength) {
						MessageBox::Show("Сжатие не указано", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					    else { 
						if (ChosenType == "Растровый") {

						

						    StreamWriter^ sw = File::AppendText("data1.bin");
							sw->WriteLine(tbRushFile->Text);
							sw->WriteLine(tbFormName->Text);
							sw->WriteLine(tbProgramsSup->Text);
							sw->WriteLine(tbColor->Text);
						    sw->WriteLine(tbSzhat->Text);
						    sw->WriteLine(ChosenType);
						    sw->Flush();
						    sw->Close();
					        }
						else {
							StreamWriter^ sw = File::AppendText("data2.bin");
							sw->WriteLine(tbRushFile->Text);
							sw->WriteLine(tbFormName->Text);
							sw->WriteLine(tbProgramsSup->Text);
							sw->WriteLine(tbColor->Text);
							sw->WriteLine(tbSzhat->Text);
							sw->WriteLine(ChosenType);
							sw->Flush();
							sw->Close();
						}
					    }
				}

			}
		}
	}
	tbFormName->Clear();
	tbRushFile->Clear();
	tbProgramsSup->Clear();
	tbColor->Clear();
	tbSzhat->Clear();
	typeRastr->Checked = false;
	typeVect->Checked = false;

	FormatCount();
}
private: System::Void btnAddMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
	pnlBook->Show();
}
private: System::Void typeRastr_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (typeRastr->Checked) {
		ChosenType = "Растровый";
		typeVect->Enabled = false;
		btnAdd->Enabled = true;
		
	}
	else {
		btnAdd->Enabled = false;
		typeVect->Enabled = true;
	}
}
private: System::Void typeVect_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (typeVect->Checked) {
		ChosenType = "Векторный";
		typeRastr->Enabled = false;
		btnAdd->Enabled = true;
		
	}
	else {
		btnAdd->Enabled = false;
		typeRastr->Enabled = true;
	}
}
private: System::Void btnResultsToBook_Click(System::Object^ sender, System::EventArgs^ e) {
	tbRash->Text = "";
	tbName->Text = "";
	tbCol->Text = "";
	tbProg->Text = "";
	tbShat->Text = "";
	tbType->Text = "";
	pnlShowResult->Hide();
	pnlBook->Show();
}
private: System::Void BtnAll_Click(System::Object^ sender, System::EventArgs^ e) {
	OutputAll();
	pnlBook->Hide();
	pnlShowResult->Show();
}
private: System::Void BtnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	specToFind = textBox1->Text;
	Delete(specToFind);
	pnlBook->Hide();
	OutputAll();
	pnlShowResult->Show();
}
private: System::Void BtnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	specToFind = textBox1->Text;
	found(specToFind);
	pnlBook->Hide();
	pnlEdit->Show();
	


}
private: System::Void BtnEditForm_Click(System::Object^ sender, System::EventArgs^ e) {
	specToFind = textBox1->Text;
	edit(specToFind);
}
private: System::Void TypeRastr1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (typeRastr1->Checked) {
		ChosenType1 = "Растровый";
		typeVect1->Enabled = false;
		btnEditForm->Enabled = true;

	}
	else {
		btnEditForm->Enabled = false;
		typeVect1->Enabled = true;
	}
}
private: System::Void TypeVect1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (typeVect1->Checked) {
		ChosenType1 = "Векторный";
		typeRastr1->Enabled = false;
		btnEditForm->Enabled = true;

	}
	else {
		btnEditForm->Enabled = false;
		typeRastr1->Enabled = true;
	}
}


private: System::Void BtnEditFormMenu1_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlEdit->Hide();
	pnlBook->Show();
}
private: System::Void TbRushFile_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
	if (tbRushFile->TextLength > tbFormName->TextLength) {
		e->Handled = true;
		MessageBox::Show("Не должно быть больше названия формата!");
	}
}

private: System::Void TbFormName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
private: System::Void TbProgramsSup_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
private: System::Void TbColor_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
private: System::Void TbSzhat_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
private: System::Void TbRushFile1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
	if (tbRushFile->TextLength > tbFormName->TextLength) {
		e->Handled = true;
		MessageBox::Show("Не должно быть больше названия формата!");
	}
}
private: System::Void TbFormName1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
private: System::Void TbProgramsSup1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
private: System::Void TbColor1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
private: System::Void TbSzhat1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	auto l = e->KeyChar;
	if ((l < 65 || l > 122) && l != '\b' && l != '.')
	{
		e->Handled = true;
		MessageBox::Show("Не должно содержать цифр или латинских символов!");
	}
}
};
}
