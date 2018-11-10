#include "MagazineWindow.h";
	using namespace Library;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	void MagazineWindow::set_txt_subject(Magazine^ b)
			 {
					txt_subject->Text = b->get_subject();
			
			 }
