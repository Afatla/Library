#pragma once
#include"Book.h"
ref class IlustratedBook: public Book
{
private:
	String^  _ilustrator;
public:
	void set_ilustrator(String^  i);   
	String^  get_ilustrator();
	IlustratedBook(void);
};

