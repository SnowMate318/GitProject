//
// Created by DSO8 on 25. 8. 20.
//

#include "Admin.h"
#include "LibraryClass.h"
#include "book.h"

LibraryClass lib;

void Admin::printMenu(){
	while (true) {
		cout << "== 관리자 모드 ==\n\n";
		cout << "메뉴를 선택하세요\n";
		cout << "1. 책 조회하기 \n2. 책 등록하기 \n3. 책 삭제하기 \n4. 나가기 \n\n";

		int select;
		cin >> select;

		switch (select) {
		case 1:
			// 책 조회
			findBookFromAdmin();
			break;
		case 2:
			// 책 등록
			addBookFromAdmin();
			break;
		case 3:
			// 책 삭제
			removeBookFromAdmin();
			break;
		case 4:
			return;
		default:
			cout << "입력이 올바르지 않습니다\n";
			break;
		}
	}

}

void Admin::findBookFromAdmin(){
	int bookId;

	cout << "조회할 책 아이디를 작성하세요: ";
	cin >> bookId;

	lib.findBook(bookId);
}

void Admin::addBookFromAdmin(){
	string name, author;
	int ID, num_of_book;

	cout << "등록할 책 정보를 작성하세요\n(제목, 저자, 아이디, 개수): ";
	cin >> name >> author >> ID >> num_of_book;

	Book* book = new Book(name, author, ID, num_of_book);
	lib.createBook(book);
	
}

void Admin::removeBookFromAdmin(){
	int bookId;

	cout << "삭제할 책 아이디를 작성하세요: ";
	cin >> bookId;

	lib.deleteBook(bookId);

}