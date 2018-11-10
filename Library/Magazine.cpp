#include "Magazine.h"
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;
 void Magazine:: set_subject( String^  s)
{
	_subject=s;
}

 String^  Magazine::get_subject() 
{
	return _subject;
}

Magazine::Magazine(void)
{
}
