#include "ForeignBookWindow.h"
#include "ForeignBook.h";

	using namespace Library;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	void ForeignBookWindow::set_txt_translator(ForeignBook^ b)
			 {
					txt_translator->Text = b->get_translator();
			
			 }


