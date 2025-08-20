#include "book.h"
#include <iostream>
#include "admin.h"

#include "userUI.h"
int main() {

	int cmd = -1;

	//b1.info_of_book();

// 	Admin admin;
// 	admin.printMenu();

	while (cmd != 1 && cmd != 2) {
		std::cout << "모드 선택 1. 사용자    2. 관리자      " << std::endl;
		cin >> cmd;
	}
	if (cmd == 1) {
		UserUI user = UserUI();
		while (1) {
			user.printMenu();
		}
		return 0;
	}
	while (1) {
		Admin admin = Admin();
		admin.printMenu();
	}
	//함수 추가
	return 0;
}