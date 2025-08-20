//
// Created by DSO8 on 25. 8. 20.
//

#include "Admin.h"
#include "LibraryClass.h"

LibraryClass lib;

void Admin::printMenu(){
	cout << "== 관리자 모드 ==\n\n";
	cout << "메뉴를 선택하세요\n";
	cout << "1. 책 조회하기 \n2. 책 등록하기 \n3. 책 삭제하기 \n\n";

	int select;
	cin >> select;

	switch (select) {
	case 1:
		// 책 조회
		break;
	case 2:
		// 책 등록
		break;
	case 3:
		// 책 삭제
		break;
	default:
		cout << "입력이 올바르지 않습니다\n";
		break;
	}

}

void Admin::findBookFromAdmin(){
	int bookId;

	cout << "조회할 책 아이디를 작성하세요: ";
	cin >> bookId;

	lib.findBook(bookId);
}

void Admin::addBookFromAdmin(){
	
}

void Admin::removeBookFromAdmin(){

}