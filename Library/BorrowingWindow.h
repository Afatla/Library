#pragma once
#include"Book.h"
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BorrowingWindow
	/// </summary>
	public ref class BorrowingWindow : public System::Windows::Forms::Form
	{
	public:
		BorrowingWindow(void)
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
		~BorrowingWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	public: static System::Windows::Forms::TextBox^  txt_id_number;
	protected: 
	private: System::Windows::Forms::Label^  lbl_id_number;
	private: System::Windows::Forms::Label^  lbl_title;
	public: static System::Windows::Forms::TextBox^  txt_title;
	public: static System::Windows::Forms::TextBox^  txt_date_back;
	private: System::Windows::Forms::Label^  lbl_date_back;
	private: System::Windows::Forms::Button^  btn_borrow;

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
			this->txt_id_number = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_number = (gcnew System::Windows::Forms::Label());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->txt_title = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_back = (gcnew System::Windows::Forms::TextBox());
			this->lbl_date_back = (gcnew System::Windows::Forms::Label());
			this->btn_borrow = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_id_number
			// 
			this->txt_id_number->Location = System::Drawing::Point(212, 56);
			this->txt_id_number->Name = L"txt_id_number";
			this->txt_id_number->Size = System::Drawing::Size(100, 20);
			this->txt_id_number->TabIndex = 0;

			// 
			// lbl_id_number
			// 
			this->lbl_id_number->AutoSize = true;
			this->lbl_id_number->Location = System::Drawing::Point(59, 63);
			this->lbl_id_number->Name = L"lbl_id_number";
			this->lbl_id_number->Size = System::Drawing::Size(53, 13);
			this->lbl_id_number->TabIndex = 1;
			this->lbl_id_number->Text = L"id number";
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Location = System::Drawing::Point(59, 136);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(23, 13);
			this->lbl_title->TabIndex = 2;
			this->lbl_title->Text = L"title";
			// 
			// txt_title
			// 
			this->txt_title->Location = System::Drawing::Point(212, 129);
			this->txt_title->Name = L"txt_title";
			this->txt_title->Size = System::Drawing::Size(100, 20);
			this->txt_title->TabIndex = 3;
			
			// 
			// txt_date_back
			// 
			this->txt_date_back->Location = System::Drawing::Point(212, 206);
			this->txt_date_back->Name = L"txt_date_back";
			this->txt_date_back->Size = System::Drawing::Size(100, 20);
			this->txt_date_back->TabIndex = 4;

			// 
			// lbl_date_back
			// 
			this->lbl_date_back->AutoSize = true;
			this->lbl_date_back->Location = System::Drawing::Point(59, 213);
			this->lbl_date_back->Name = L"lbl_date_back";
			this->lbl_date_back->Size = System::Drawing::Size(85, 13);
			this->lbl_date_back->TabIndex = 5;
			this->lbl_date_back->Text = L"return back date";
			// 
			// btn_borrow
			// 
			this->btn_borrow->Location = System::Drawing::Point(237, 278);
			this->btn_borrow->Name = L"btn_borrow";
			this->btn_borrow->Size = System::Drawing::Size(75, 48);
			this->btn_borrow->TabIndex = 6;
			this->btn_borrow->Text = L"borrow";
			this->btn_borrow->UseVisualStyleBackColor = true;
			this->btn_borrow->Click += gcnew System::EventHandler(this, &BorrowingWindow::btn_borrow_Click);
			// 
			// BorrowingWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(355, 362);
			this->Controls->Add(this->btn_borrow);
			this->Controls->Add(this->lbl_date_back);
			this->Controls->Add(this->txt_date_back);
			this->Controls->Add(this->txt_title);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->lbl_id_number);
			this->Controls->Add(this->txt_id_number);
			this->Name = L"BorrowingWindow";
			this->Text = L"BorrowingWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn_borrow_Click(System::Object^  sender, System::EventArgs^  e);

};
}
