#include "LibraryClass.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

static map<int, Book*> bookList;

void LibraryClass::createBook(Book* book)
{
	bookList[book->get_id()] = book;
}

void LibraryClass::findBook(int bookId)
{	
	// 책이 등록되어 있는지 확인
	if (bookList[bookId] != nullptr) {
		if (bookList[bookId]->loan_book()) {
			cout << "책이 있습니다. " << "대여 가능합니다." << endl;
		}
		else {
			cout << "책이 있습니다. " << "현재 대여중." << endl;
		}
	}
	else {
		cout << "등록된 책이 아닙니다. " << endl;
	}
}

void LibraryClass::rentBook(int bookId)
{
	// 책이 등록되어 있는지 확인
	if (bookList[bookId] != nullptr) {
		// 책의 재고가 남아 있는지 확인
		if (bookList[bookId]->loan_book()) {
			// 남아 있으면 빌려주고
			cout << "대여 완료" << endl;
		}
		else {
			// 없으면 못빌려준다는 메시지를 출력한다.
			cout << "대여 불가. 재고 없음." << endl;
		}
	}
	else {
		// 등록되어 있지 않은 책이면 등록 안됨 메시지 출력
		cout << "등록되어 있지 않은 책입니다." << endl;
	}
}

void LibraryClass::rentBook(int bookId)
{
}

void LibraryClass::returnBook(int bookId)
{
}

void LibraryClass::deleteBook(int bookId)
{
	// bookList에서 bookId에 해당하는 항목 삭제 후 
	bookList.erase(bookId);

	// 완료 메시지 출력
	cout << "삭제되었습니다." << endl;
}


//void LibraryClass::returnBook(int bookId)
//{
//
//}