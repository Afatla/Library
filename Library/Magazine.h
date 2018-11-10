#pragma once
#include "Book.h"
ref class Magazine: public Book
{
private:
	String ^ _subject;
public:
	void set_subject(String^ s);   
	String^ get_subject();
	Magazine(void);
};

