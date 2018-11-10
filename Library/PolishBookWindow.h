#pragma once
#include"BookWindow.h"
#include"PolishBook.h"
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PolishBookWindow
	/// </summary>
	public ref class PolishBookWindow : public BookWindow
	{
	public:
		PolishBookWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
    private: System::Windows::Forms::Label^  lbl_genre;
	private: System::Windows::Forms::TextBox^  txt_genre;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PolishBookWindow()
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

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_genre = (gcnew System::Windows::Forms::Label());
			this->txt_genre = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// PolishBookWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 450);
			this->Name = L"PolishBookWindow";
			this->Text = L"PolishBookWindow";
			this->ResumeLayout(false);
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
			this->txt_genre->Text = "Polish";
			this->Controls->Add(this->txt_genre);
			this->Controls->Add(this->lbl_genre);
			
		}
#pragma endregion
	};
}
