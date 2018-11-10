#include "ForeignBook.h"
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;

 void ForeignBook:: set_translator( String^ t)
{
	_translator=t;
}

 String^ ForeignBook::get_translator() 
{
	return _translator;
}

ForeignBook::ForeignBook(void)
{
}
