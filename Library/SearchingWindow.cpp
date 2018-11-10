#include "SearchingWindow.h"
#include "TextFiles.h"
#include "PolishBookWindow.h"
#include "ForeignBookWindow.h"
#include "MagazineWindow.h"
#include "IlustratedBookWindow.h"
#include "PolishBook.h"
#include "Magazine.h"
#include "ForeignBook.h"
#include "IlustratedBook.h";
using namespace Library;
using namespace System;
using namespace System::Windows::Forms;
System::Void SearchingWindow::btn_search_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 TextFiles::load_from_file();
				 results = gcnew List<Book^>();
				 
				 for each (Book^ el in TextFiles::books)
				 { 
					 String^ temp_title=(el->get_title())->ToLower();
					 String^ temp_autor=(el->get_autor())->ToLower();
					 
					 if(temp_title->Contains(txt_searching->Text)||temp_autor->Contains(txt_searching->Text)||el->get_title()->Contains(txt_searching->Text)||el->get_autor()->Contains(txt_searching->Text))
						 {
							 listBox_results->Items->Add(el->get_title()+" "+el->get_autor()+"\n");
							  results->Add(el);
					 }
				 }
				 
			 }
System::Void SearchingWindow::returnWindows(System::Object^  sender, System::EventArgs^  e)
		 {
		windows = gcnew List<BookWindow^>();
		for each(Book^ el in results)
		{
			 if (el->genre=="Polish book")
			 {
				 BookWindow^ pbw = gcnew PolishBookWindow();
				 windows->Add(pbw);
			 }
			 else if (el->genre=="Foreign book")
			 {
				 ForeignBookWindow^ fbw = gcnew ForeignBookWindow();
				 windows->Add(fbw);
			 }
			  else if (el->genre=="Ilustrated book")
			 {
				 BookWindow^ ibw = gcnew IlustratedBookWindow();
				 windows->Add(ibw);
			 }
			  else if(el->genre=="Magazine")
			 {
				 BookWindow^ mw = gcnew MagazineWindow();
				 windows->Add(mw);
			 }
		}
			  
		 }
System::Void SearchingWindow:: button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[0]->Show();
			windows[0]->set_textbox_text(results[0]);
		
			 if (results[0]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[0]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[0]);
				bw->set_txt_translator(b);
			}
			 else if (results[0]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[0]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[0]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[0]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[0]);
				Magazine^ b = safe_cast<Magazine^>(results[0]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[0]);
				PolishBook^ b = safe_cast<PolishBook^>(results[0]);
			  }
			
		 }
 System::Void SearchingWindow:: button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[1]->Show();
			windows[1]->set_textbox_text( results[1]);
			if (results[1]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[1]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[1]);
				bw->set_txt_translator(b);
			}
			 else if (results[1]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[1]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[1]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[1]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[1]);
				Magazine^ b = safe_cast<Magazine^>(results[1]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[1]);
				PolishBook^ b = safe_cast<PolishBook^>(results[1]);
			  }
		 }
 System::Void SearchingWindow:: button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[2]->Show();
			windows[2]->set_textbox_text( results[2]);
			if (results[2]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[2]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[2]);
				bw->set_txt_translator(b);
			}
			 else if (results[2]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[2]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[2]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[2]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[2]);
				Magazine^ b = safe_cast<Magazine^>(results[2]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[2]);
				PolishBook^ b = safe_cast<PolishBook^>(results[2]);
			  }
		 }
 System::Void SearchingWindow:: button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[3]->Show();
			windows[3]->set_textbox_text( results[3]);
			if (results[3]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[3]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[3]);
				bw->set_txt_translator(b);
			}
			 else if (results[3]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[3]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[3]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[3]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[3]);
				Magazine^ b = safe_cast<Magazine^>(results[3]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[3]);
				PolishBook^ b = safe_cast<PolishBook^>(results[3]);
			  }
		 }
 System::Void SearchingWindow:: button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			returnWindows(sender, e);
			windows[4]->Show();
			windows[4]->set_textbox_text( results[4]);
			if (results[4]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[4]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[4]);
				bw->set_txt_translator(b);
			}
			 else if (results[4]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[4]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[4]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[4]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[4]);
				Magazine^ b = safe_cast<Magazine^>(results[4]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[4]);
				PolishBook^ b = safe_cast<PolishBook^>(results[4]);
			  }
		 }
 System::Void SearchingWindow:: button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[5]->Show();
			windows[5]->set_textbox_text( results[5]);
			if (results[5]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[5]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[5]);
				bw->set_txt_translator(b);
			}
			 else if (results[5]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[5]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[5]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[5]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[5]);
				Magazine^ b = safe_cast<Magazine^>(results[5]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[5]);
				PolishBook^ b = safe_cast<PolishBook^>(results[5]);
			  }
		 }
 System::Void SearchingWindow:: button7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[6]->Show();
			windows[6]->set_textbox_text( results[6]);
			if (results[6]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[6]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[6]);
				bw->set_txt_translator(b);
			}
			 else if (results[6]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[6]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[6]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[6]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[6]);
				Magazine^ b = safe_cast<Magazine^>(results[6]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[6]);
				PolishBook^ b = safe_cast<PolishBook^>(results[6]);
			  }
		 }
 System::Void SearchingWindow:: button8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[7]->Show();
			windows[7]->set_textbox_text( results[7]);
			if (results[7]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[7]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[7]);
				bw->set_txt_translator(b);
			}
			 else if (results[7]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[7]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[7]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[7]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[7]);
				Magazine^ b = safe_cast<Magazine^>(results[7]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[7]);
				PolishBook^ b = safe_cast<PolishBook^>(results[7]);
			  }
		 }
 System::Void SearchingWindow:: button9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[8]->Show();
			windows[8]->set_textbox_text( results[8]);
			if (results[8]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[8]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[8]);
				bw->set_txt_translator(b);
			}
			 else if (results[8]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[8]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[8]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[8]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[8]);
				Magazine^ b = safe_cast<Magazine^>(results[8]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[8]);
				PolishBook^ b = safe_cast<PolishBook^>(results[8]);
			  }
		 }
 System::Void SearchingWindow:: button10_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[9]->Show();
			windows[9]->set_textbox_text( results[9]);
			if (results[9]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[9]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[9]);
				bw->set_txt_translator(b);
			}
			 else if (results[9]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[9]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[9]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[9]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[9]);
				Magazine^ b = safe_cast<Magazine^>(results[9]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[9]);
				PolishBook^ b = safe_cast<PolishBook^>(results[9]);
			  }
		 }
 System::Void SearchingWindow:: button11_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			returnWindows(sender, e);
			windows[10]->Show();
			windows[10]->set_textbox_text( results[10]);
			if (results[10]->genre=="Foreign book")
			 {
				ForeignBookWindow^ bw = safe_cast<ForeignBookWindow^>(windows[10]);
				ForeignBook^ b = safe_cast<ForeignBook^>(results[10]);
				bw->set_txt_translator(b);
			}
			 else if (results[10]->genre == "Ilustrated book")
			 {
				IlustratedBookWindow^ bw = safe_cast<IlustratedBookWindow^>(windows[10]);
				IlustratedBook^ b = safe_cast<IlustratedBook^>(results[10]);
				bw->set_txt_ilustrator(b);
			 }
			  else if(results[10]->genre=="Magazine")
			 {
				MagazineWindow^ bw = safe_cast<MagazineWindow^>(windows[10]);
				Magazine^ b = safe_cast<Magazine^>(results[10]);
				bw->set_txt_subject(b);
			 }
			  else
			  {
				PolishBookWindow^ bw = safe_cast<PolishBookWindow^>(windows[10]);
				PolishBook^ b = safe_cast<PolishBook^>(results[10]);
			  }
		 }
 
[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Library::SearchingWindow);

}


