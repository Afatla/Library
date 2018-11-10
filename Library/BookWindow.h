#pragma once
#include "Book.h"

namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Book
	/// </summary>
	public ref class BookWindow : public System::Windows::Forms::Form
	{
	public:
		BookWindow(void)
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
		~BookWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_previous;
	private: System::Windows::Forms::Button^  btn_next;
	private: System::Windows::Forms::Label^  lbl_title;
	private: System::Windows::Forms::Label^  lbl_autor;
	private: System::Windows::Forms::Label^  lbl_r_date;
	private: System::Windows::Forms::Label^  lbl_number;
	protected: 
	
	private: System::Windows::Forms::TextBox^  txt_title;
	private: System::Windows::Forms::TextBox^  txt_autor;
	private: System::Windows::Forms::TextBox^  txt_r_date;
	private: System::Windows::Forms::TextBox^  txt_number;
	private: System::Windows::Forms::Button^  btn_borrow;
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
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->lbl_autor = (gcnew System::Windows::Forms::Label());
			this->lbl_r_date = (gcnew System::Windows::Forms::Label());
			this->lbl_number = (gcnew System::Windows::Forms::Label());
			this->txt_title = (gcnew System::Windows::Forms::TextBox());
			this->txt_autor = (gcnew System::Windows::Forms::TextBox());
			this->txt_r_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_number = (gcnew System::Windows::Forms::TextBox());
			this->btn_borrow = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(12, 362);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(80, 45);
			this->btn_previous->TabIndex = 0;
			this->btn_previous->Text = L"previous";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &BookWindow::btn_previous_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(292, 362);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(80, 45);
			this->btn_next->TabIndex = 1;
			this->btn_next->Text = L"next";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &BookWindow::btn_next_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Location = System::Drawing::Point(22, 28);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(23, 13);
			this->lbl_title->TabIndex = 3;
			this->lbl_title->Text = L"title";
			// 
			// lbl_autor
			// 
			this->lbl_autor->AutoSize = true;
			this->lbl_autor->Location = System::Drawing::Point(22, 72);
			this->lbl_autor->Name = L"lbl_autor";
			this->lbl_autor->Size = System::Drawing::Size(31, 13);
			this->lbl_autor->TabIndex = 4;
			this->lbl_autor->Text = L"autor";
			// 
			// lbl_r_date
			// 
			this->lbl_r_date->AutoSize = true;
			this->lbl_r_date->Location = System::Drawing::Point(22, 127);
			this->lbl_r_date->Name = L"lbl_r_date";
			this->lbl_r_date->Size = System::Drawing::Size(65, 13);
			this->lbl_r_date->TabIndex = 6;
			this->lbl_r_date->Text = L"release date";
			// 
			// lbl_number
			// 
			this->lbl_number->AutoSize = true;
			this->lbl_number->Location = System::Drawing::Point(22, 181);
			this->lbl_number->Name = L"lbl_number";
			this->lbl_number->Size = System::Drawing::Size(42, 13);
			this->lbl_number->TabIndex = 7;
			this->lbl_number->Text = L"number";
			// 
			// txt_title
			// 
			this->txt_title->Location = System::Drawing::Point(135, 21);
			this->txt_title->Name = L"txt_title";
			this->txt_title->Size = System::Drawing::Size(231, 20);
			this->txt_title->TabIndex = 10;
			// 
			// txt_autor
			// 
			this->txt_autor->Location = System::Drawing::Point(135, 65);
			this->txt_autor->Name = L"txt_autor";
			this->txt_autor->Size = System::Drawing::Size(231, 20);
			this->txt_autor->TabIndex = 11;
			// 
			// txt_r_date
			// 
			this->txt_r_date->Location = System::Drawing::Point(135, 120);
			this->txt_r_date->Name = L"txt_r_date";
			this->txt_r_date->Size = System::Drawing::Size(231, 20);
			this->txt_r_date->TabIndex = 12;
			// 
			// txt_number
			// 
			this->txt_number->Location = System::Drawing::Point(135, 174);
			this->txt_number->Name = L"txt_number";
			this->txt_number->Size = System::Drawing::Size(231, 20);
			this->txt_number->TabIndex = 13;
			// 
			// btn_borrow
			// 
			this->btn_borrow->Location = System::Drawing::Point(149, 362);
			this->btn_borrow->Name = L"btn_borrow";
			this->btn_borrow->Size = System::Drawing::Size(80, 45);
			this->btn_borrow->TabIndex = 14;
			this->btn_borrow->Text = L"borrow";
			this->btn_borrow->UseVisualStyleBackColor = true;
			this->btn_borrow->Click += gcnew System::EventHandler(this, &BookWindow::btn_borrow_Click);
			// 
			// BookWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 412);
			this->Controls->Add(this->btn_borrow);
			this->Controls->Add(this->txt_number);
			this->Controls->Add(this->txt_r_date);
			this->Controls->Add(this->txt_autor);
			this->Controls->Add(this->txt_title);
			this->Controls->Add(this->lbl_number);
			this->Controls->Add(this->lbl_r_date);
			this->Controls->Add(this->lbl_autor);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_previous);
			this->Name = L"BookWindow";
			this->Text = L"BookWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: void set_textbox_text(Book^ b);
public: System::Void btn_next_Click(System::Object^  sender, System::EventArgs^  e);
public: System::Void btn_previous_Click(System::Object^  sender, System::EventArgs^  e);	 
public: System::Void btn_borrow_Click(System::Object^  sender, System::EventArgs^  e);
};
}

