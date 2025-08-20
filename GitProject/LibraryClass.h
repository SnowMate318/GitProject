#pragma once
#include "book.h"

class LibraryClass
{
public:
	void createBook(Book* book);
	void deleteBook(int bookId);
	void findBook(int bookId);
	bool rentBook(int bookId);
	void returnBook(int bookId);

};