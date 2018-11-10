#include "IlustratedBookWindow.h";
	using namespace Library;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	void IlustratedBookWindow::set_txt_ilustrator(IlustratedBook^ b)
			 {
					txt_ilustrator->Text = b->get_ilustrator();
			
			 }
