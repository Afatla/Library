#pragma once

#include<string>
using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;
ref class Book
{
protected:
	String^ _title;
	String^ _autor;
	String^ _r_date;
	String^ _number;
	//String^ _translator;
	//String^ _ilustrator;
	//String^ _subject;

public:
	String^ genre;
	void set_title(String^ tit);   
	String^ get_title();
	void set_autor(String^ a);   
	String^ get_autor();
	void set_r_date(String^ rd);   
	String^ get_r_date();
	void set_number(String^ n);   
	String^ get_number();
	/*virtual void set_translator(String^ t)=0;   
	virtual String^ get_translator()=0;
	virtual void set_ilustrator(String^ i)=0;   
	virtual String^ get_ilustrator()=0;
	virtual void set_subject(String^ s)=0;   
	virtual String^ get_subject()=0;*/
	Book(void);
};

