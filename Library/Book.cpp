#include "Book.h"
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;
void Book:: set_title( String^  tit)
{
	_title=tit;
}
 String^  Book::get_title()
{
	return _title;
}
void Book:: set_autor( String^  a)
{
	_autor=a;
}

 String^  Book::get_autor() 
{
	return _autor;
}
 void Book:: set_r_date( String^  rd)
{
	_r_date=rd;
}

 String^  Book::get_r_date() 
{
	return _r_date;
}
  void Book:: set_number( String^  n)
{
	_number=n;
}

 String^  Book::get_number() 
{
	return _number;
}

Book::Book(void)
{
}
