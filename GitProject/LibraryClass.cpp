#include "LibraryClass.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

static map<int, Book*>bookList;
static map<int, bool> bookRent;

void LibraryClass::createBook(Book* book)
{
	bookList[book->get_id()] = book;
	bookRent[book->get_id()] = false;
}

void LibraryClass::findBook(int bookId)
{
	if (bookList[bookId] != nullptr) {
		if (bookRent[bookId]) {
			cout << "책이 있습니다. " << "대여 가능합니다." << endl;
		}
		else {
			cout << "책이 있습니다. " << "현재 대여중." << endl;
		}
	}
	else {
		cout << "책이 없습니다. " << endl;
	}
}

void LibraryClass::deleteBook(int bookId)
{

}

//void LibraryClass::rentBook(int bookId)
//{
//
//}
//void LibraryClass::returnBook(int bookId)
//{
//
//}