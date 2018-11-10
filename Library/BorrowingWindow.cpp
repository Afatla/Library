#include "BorrowingWindow.h";
#include"Book.h";
#include"BookWindow.h";
#include"TextFiles.h";
using namespace Library;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	System::Void BorrowingWindow::btn_borrow_Click(System::Object^  sender, System::EventArgs^  e)
	{
		TextFiles::safe_to_file();
		this->Close();
		MessageBox::Show("You borrowed this position, thanks for visiting us!");
	}

