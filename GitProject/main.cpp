#include "book.h"
#include <iostream>
#include "admin.h"
#include "userUI.h"
int main() {

	int cmd = -1;

	while (cmd != 1 && cmd != 2) {
		std::cout << "��� ���� 1. �����    2. ������      " << std::endl;
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
	//�Լ� �߰�
	return 0;
}