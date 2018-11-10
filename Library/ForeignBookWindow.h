#pragma once
#include "BookWindow.h"
#include "ForeignBook.h"
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ForeignBookWindow
	/// </summary>
	public ref class ForeignBookWindow : public BookWindow
	{
	public:
		ForeignBookWindow(void)
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
		~ForeignBookWindow()
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

		private: System::Windows::Forms::Label^  lbl_translator;
		private: System::Windows::Forms::TextBox^  txt_translator;
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
			this->Text = L"ForeignBookWindow";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->lbl_translator = (gcnew System::Windows::Forms::Label());
			this->txt_translator = (gcnew System::Windows::Forms::TextBox());

			// 
			// lbl_translator
			// 
			this->lbl_translator->AutoSize = true;
			this->lbl_translator->Location = System::Drawing::Point(25, 230);
			this->lbl_translator->Name = L"lbl_translator";
			this->lbl_translator->Size = System::Drawing::Size(35, 13);
			this->lbl_translator->TabIndex = 14;
			this->lbl_translator->Text = L"lbl_translator";

			// 
			// txt_translator
			// 
			this->txt_translator->Location = System::Drawing::Point(266, 222);
			this->txt_translator->Name = L"txt_translator";
			this->txt_translator->Size = System::Drawing::Size(100, 20);
			this->txt_translator->TabIndex = 15;
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
			this->txt_genre->Text = "Foreign";
			this->Controls->Add(this->txt_genre);
			this->Controls->Add(this->lbl_genre);
			this->Controls->Add(this->txt_translator);
			this->Controls->Add(this->lbl_translator);
		}
#pragma endregion
		public: void set_txt_translator(ForeignBook^ b);
		
	};
}
