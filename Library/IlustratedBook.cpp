#include "IlustratedBook.h"
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;
 void IlustratedBook:: set_ilustrator( String^ i)
{
	_ilustrator=i;
}

 String^ IlustratedBook::get_ilustrator()
{
	return _ilustrator;
}
IlustratedBook::IlustratedBook(void)
{
}
