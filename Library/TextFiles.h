#pragma once
#include<string>
#include<fstream>
#include<iostream>
#include<list>
#include"ForeignBook.h"
#include"Magazine.h"
#include"IlustratedBook.h"
#include"PolishBook.h"

using namespace System::Collections::Generic;
ref class TextFiles
{
public:
	
	static List<Book^>^ books;
	static void load_from_file();
	static void safe_to_file();
	TextFiles(void);
};

