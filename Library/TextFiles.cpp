#include "TextFiles.h"
#include"BorrowingWindow.h"
using namespace Library;
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;
void TextFiles::load_from_file()
{
	    books = gcnew List<Book^>();
		for each(auto line in File::ReadAllLines("Positions.txt"))
	{
 		auto wordsInLine = line->Split(';');
			if(wordsInLine[0]->StartsWith("P"))
			{
				Book ^b = gcnew PolishBook();
				b->genre = wordsInLine[0];
				b->set_title(wordsInLine[1]);
				b->set_autor(wordsInLine[2]);
				b->set_r_date(wordsInLine[3]);
				b->set_number(wordsInLine[4]);
				books->Add(b);
			}
			else if(wordsInLine[0]->StartsWith("F"))
			{
				Book ^b = gcnew ForeignBook();
				ForeignBook^ b1 = static_cast<ForeignBook^>(b);
				b1->genre = wordsInLine[0];
				b1->set_title(wordsInLine[1]);
				b1->set_autor(wordsInLine[2]);
				b1->set_r_date(wordsInLine[3]);
				b1->set_number(wordsInLine[4]);
				b1->set_translator(wordsInLine[5]);
				books->Add(b1);
			}
			else if(wordsInLine[0]->StartsWith("I"))
			{
				Book ^b = gcnew IlustratedBook();
				IlustratedBook^ b1 = static_cast<IlustratedBook^>(b);
				b1->genre = wordsInLine[0];
				b1->set_title(wordsInLine[1]);
				b1->set_autor(wordsInLine[2]);
				b1->set_r_date(wordsInLine[3]);
				b1->set_number(wordsInLine[4]);
				b1->set_ilustrator(wordsInLine[5]);
				books->Add(b1);
			}
			else if(wordsInLine[0]->StartsWith("M"))
			{
				Book ^b = gcnew Magazine();
				Magazine^ b1 = static_cast<Magazine^>(b);
				b1->genre = wordsInLine[0];
				b1->set_title(wordsInLine[1]);
				b1->set_autor(wordsInLine[2]);
				b1->set_r_date(wordsInLine[3]);
				b1->set_number(wordsInLine[4]);
				b1->set_subject(wordsInLine[5]);
				books->Add(b1);
			}

	}	
		
}
void TextFiles::safe_to_file()
{

	
	String^ text=BorrowingWindow::txt_title->Text+";"+BorrowingWindow::txt_id_number->Text+";"+BorrowingWindow::txt_date_back->Text+"# ";
	
	System::IO::File::AppendAllText ("Borrow.txt", text);
	
}
TextFiles::TextFiles(void)
{
	
}
