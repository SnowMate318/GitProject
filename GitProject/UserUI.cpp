#include "UserUI.h"



// 커서 이동용
void UserUI::gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void UserUI::printMenu(void)
{
    system("cls");
    cout << "==메뉴==\n";
    cout << " 1. 책 조회\n";
    cout << " 2. 책 대출\n";
    cout << " 3. 책 반납\n";
    cout << " 4. 책 빌린 책 확인\n";
    cout << " 5. 종료\n";

    cout << "원하시는 메뉴를 선택해주세요 : ";

    cin >> menu;
    switch (menu) {
    case 1:
        MenuFind(); 
        break;
    case 2:
        MenuRent();
        break;
    case 3:
        MenuReturn();
    }

}
void UserUI::MenuFind(void)
{
    system("cls");
    cout << "==책 찾기==";
    cout << "찾을 책의 ID를 입력해주세요 : ";

    cin >> ID;
    lib.findBook(ID);

}
void UserUI::MenuRent(void) 
{
    system("cls");
    cout << " 책 빌리기";
}
void UserUI::MenuReturn(void) 
{
    system("cls");
    cout << " 책 반납하기";
}
void UserUI::Quit(void) {
    system("cls");
    cout << " 종료";
}