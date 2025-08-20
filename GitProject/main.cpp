#include "book.h"
#include <iostream>
#include "admin.h"
#include "userUI.h"

int main() {

	int cmd = -1;

	UserUI user = UserUI();
	Admin admin = Admin();

	while (true) {
		user.printMenu();
		admin.printMenu();
	}
	
	
	
	//함수 추가
	return 0;
}