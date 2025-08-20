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
			cout << "å�� �ֽ��ϴ�. " << "�뿩 �����մϴ�." << endl;
		}
		else {
			cout << "å�� �ֽ��ϴ�. " << "���� �뿩��." << endl;
		}
	}
	else {
		cout << "å�� �����ϴ�. " << endl;
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