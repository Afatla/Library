#pragma once
#include "BookWindow.h"
#include "Magazine.h"
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MagazineWindow
	/// </summary>
	public ref class MagazineWindow : public BookWindow
	{
	public:
		MagazineWindow(void)
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
		~MagazineWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private: System::Windows::Forms::TextBox^  txt_subject;
	private: System::Windows::Forms::Label^  lbl_subject;
	  private: System::Windows::Forms::Label^  lbl_genre;
	private: System::Windows::Forms::TextBox^  txt_genre;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_genre = (gcnew System::Windows::Forms::Label());
			this->txt_genre = (gcnew System::Windows::Forms::TextBox());
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(400,450);
			this->Text = L"MagazineWindow";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->txt_subject = (gcnew System::Windows::Forms::TextBox());
			this->lbl_subject = (gcnew System::Windows::Forms::Label());

			// 
			// lbl_subject
			// 
			this->lbl_subject->AutoSize = true;
			this->lbl_subject->Location = System::Drawing::Point(25, 230);
			this->lbl_subject->Name = L"lbl_subject";
			this->lbl_subject->Size = System::Drawing::Size(35, 13);
			this->lbl_subject->TabIndex = 14;
			this->lbl_subject->Text = L"lbl_subject";

			// 
			// txt_subject
			// 
			this->txt_subject->Location = System::Drawing::Point(266, 222);
			this->txt_subject->Name = L"txt_subject";
			this->txt_subject->Size = System::Drawing::Size(100, 20);
			this->txt_subject->TabIndex = 15;
			// 
			// lbl_genre
			// 
			this->lbl_genre->AutoSize = true;
			this->lbl_genre->Location = System::Drawing::Point(22, 313);
			this->lbl_genre->Name = L"lbl_genre";
			this->lbl_genre->Size = System::Drawing::Size(34, 13);
			this->lbl_genre->TabIndex = 15;
			this->lbl_genre->Text = L"genre";
			// 
			// txt_genre
			// 
			this->txt_genre->Location = System::Drawing::Point(266, 306);
			this->txt_genre->Name = L"txt_genre";
			this->txt_genre->Size = System::Drawing::Size(100, 20);
			this->txt_genre->TabIndex = 16;
			this->txt_genre->Text = "Magazine";
			this->Controls->Add(this->txt_genre);
			this->Controls->Add(this->lbl_genre);
			this->Controls->Add(this->txt_subject);
			this->Controls->Add(this->lbl_subject);
		}
#pragma endregion
		public: void set_txt_subject(Magazine^ b);
		
	};
}
