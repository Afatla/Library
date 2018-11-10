#pragma once
#include "BookWindow.h"
#include "IlustratedBook.h"
namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IlustratedBookWindow
	/// </summary>
	public ref class IlustratedBookWindow : public BookWindow
	{
	public:
		IlustratedBookWindow(void)
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
		~IlustratedBookWindow()
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
	private: System::Windows::Forms::Label^  lbl_genre;
	private: System::Windows::Forms::TextBox^  txt_genre;
	
	private: System::Windows::Forms::TextBox^  txt_ilustrator;
	private: System::Windows::Forms::Label^  lbl_ilustrator;
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
			this->Text = L"IlustratedBookWindow";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->txt_ilustrator = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ilustrator = (gcnew System::Windows::Forms::Label());

			// 
			// txt_ilustrator
			// 
			this->txt_ilustrator->Location = System::Drawing::Point(266, 222);
			this->txt_ilustrator->Name = L"txt_ilustrator";
			this->txt_ilustrator->Size = System::Drawing::Size(100, 20);
			this->txt_ilustrator->TabIndex = 15;
			// 
			// lbl_ilustrator
			// 
			this->lbl_ilustrator->AutoSize = true;
			this->lbl_ilustrator->Location = System::Drawing::Point(25, 230);
			this->lbl_ilustrator->Name = L"lbl_ilustrator";
			this->lbl_ilustrator->Size = System::Drawing::Size(35, 13);
			this->lbl_ilustrator->TabIndex = 16;
			this->lbl_ilustrator->Text = L"lbl_ilustrator";
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
			this->txt_genre->Text = "Ilustrated";
			this->Controls->Add(this->txt_genre);
			this->Controls->Add(this->lbl_genre);
			this->Controls->Add(this->txt_ilustrator);
			this->Controls->Add(this->lbl_ilustrator);
		}
#pragma endregion
		public: void set_txt_ilustrator(IlustratedBook^ b);
			 
	};
}
