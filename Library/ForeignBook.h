#pragma once
#include"Book.h"
ref class ForeignBook: public Book
{
private:
	String^  _translator;
public:
	void set_translator(String^  t);   
	String^  get_translator();
	ForeignBook(void);
};

