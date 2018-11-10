#include"Book.h"
#include "SearchingWindow.h"
#include"MagazineWindow.h"
#include"ForeignBookWindow.h"
#include"PolishBookWindow.h"
#include "IlustratedBookWindow.h";
#include "BorrowingWindow.h"
    using namespace Library;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	void BookWindow::set_textbox_text(Book^ b)
	{
			txt_title->Text = b->get_title();
			txt_autor->Text = b->get_autor();
			txt_r_date->Text = b->get_r_date();
			txt_number->Text = b->get_number();
				    
	}
	System::Void BookWindow:: btn_next_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 
			 for (int i=0; i<TextFiles::books->Count-1; i++)
			 {
				 if(i==TextFiles::books->Count-1)
				 {
					 i=0;
				 }
				 else{
						 if(TextFiles::books[i]->get_title()==txt_title->Text)
						 {
							SearchingWindow::windows[i]->Close();
							
							SearchingWindow::windows[i+1]->Show();
							SearchingWindow::windows[i+1]->set_textbox_text( TextFiles::books[i+1]);
								if (TextFiles::books[i+1]->genre=="Foreign book")
								 {
									ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(SearchingWindow::windows[i+1]);
									ForeignBook^ b = safe_cast<ForeignBook^>(TextFiles::books[i+1]);
									bw->set_txt_translator(b);
								}
								 else if (TextFiles::books[i]->genre == "Ilustrated book")
								 {
									IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(SearchingWindow::windows[i+1]);
									IlustratedBook^ b = safe_cast<IlustratedBook^>(TextFiles::books[i+1]);
									bw->set_txt_ilustrator(b);
								 }
								  else if(TextFiles::books[i]->genre=="Magazine")
								 {
									MagazineWindow^ bw = safe_cast<MagazineWindow^>(SearchingWindow::windows[i+1]);
									Magazine^ b = safe_cast<Magazine^>(TextFiles::books[i+1]);
									bw->set_txt_subject(b);
								 }
								  else
								  {
									PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(SearchingWindow::windows[i+1]);
									PolishBook^ b = safe_cast<PolishBook^>(TextFiles::books[i+1]);
								  }
						 }
			 }
			 }
		 }
	System::Void BookWindow:: btn_previous_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			  for (int i=TextFiles::books->Count-1; i>0; i--)
			 {
				  if(i==0)
				 {
					 i=TextFiles::books->Count-1;
				 }
				  else{
						 if(TextFiles::books[i]->get_title()==txt_title->Text)
						 {
							 SearchingWindow::windows[i]->Close();
							SearchingWindow::windows[i-1]->Show();
							SearchingWindow::windows[i-1]->set_textbox_text( TextFiles::books[i-1]);
							
								if (TextFiles::books[i-1]->genre=="Foreign book")
								 {
									ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(SearchingWindow::windows[i-1]);
									ForeignBook^ b = safe_cast<ForeignBook^>(TextFiles::books[i-1]);
									bw->set_txt_translator(b);
								}
								 else if (TextFiles::books[i-1]->genre == "Ilustrated book")
								 {
									IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(SearchingWindow::windows[i-1]);
									IlustratedBook^ b = safe_cast<IlustratedBook^>(TextFiles::books[i-1]);
									bw->set_txt_ilustrator(b);
								 }
								  else if(TextFiles::books[i-1]->genre=="Magazine")
								 {
									MagazineWindow^ bw = safe_cast<MagazineWindow^>(SearchingWindow::windows[i-1]);
									Magazine^ b = safe_cast<Magazine^>(TextFiles::books[i-1]);
									bw->set_txt_subject(b);
								 }
								  else
								  {
									PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(SearchingWindow::windows[i-1]);
									PolishBook^ b = safe_cast<PolishBook^>(TextFiles::books[i-1]);
								  }
							 }
						 }
			  }
			 
		 }
System::Void BookWindow::btn_borrow_Click(System::Object^  sender, System::EventArgs^  e)
{
	BorrowingWindow^ w = gcnew BorrowingWindow();
	w->Show();

}


