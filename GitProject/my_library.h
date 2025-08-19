#pragma once

#include <unordered_map>
#include "book.h"

class MyLibrary {

private:
	std::unordered_map<int, Book> books;
public:
	void addBook(Book book);
	void removeBook(int bookId);
	void userCheckoutBook(int bookId);
	void userReturnBook(int bookId);
	void printBookByBookId(int bookId);

};