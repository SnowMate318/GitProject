#include "LibraryClass.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

static map<int, Book> bookList;
static map<int, bool> bookRent;

void LibraryClass::createBook(Book* book)
{
	bookList[book->getId()] = *book;
	bookRent[book->getId()] = false;
}

//void LibraryClass::deleteBook(int bookId)
//{
//
//}
//
//void LibraryClass::findBook(int bookId)
//{
//	bool bookExists = bookList.find(bookId);
//
//	if (bookExists) {
//		cout << "책이 있습니다. " << endl;
//	}
//}
//void LibraryClass::rentBook(int bookId)
//{
//
//}
//void LibraryClass::returnBook(int bookId)
//{
//
//}