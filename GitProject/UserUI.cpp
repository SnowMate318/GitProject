#include "UserUI.h"

static map<int, int> bookList;

// 커서 이동용
void UserUI::gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void UserUI::printMenu(void)
{
    while(1)
    {
        cout << "\n\n";
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
        case 4:
            RentList();
        case 5:
            return;
        }
    }

}
void UserUI::MenuFind(void)
{
    cout << "\n\n";
    cout << "==책 찾기==\n";
    cout << "찾을 책의 ID를 입력해주세요 : ";

    cin >> ID;
    lib.findBook(ID);

}
void UserUI::MenuRent(void) 
{
    cout << "\n\n";
    cout << "==책 대출==\n";
    cout << "빌릴 책의 ID를 입력해주세요 :";

    cin >> ID;
    rent = lib.rentBook(ID);
    if(rent) bookList[ID] += 1;

}
void UserUI::MenuReturn(void) 
{
    cout << "\n\n";
    cout << "==책 반납하기==\n";
    cout << "반납할 책의 ID를 입력해주세요 :";

    cin >> ID;
    lib.returnBook(ID);
    bookList[ID] -= 1;
    if (bookList[ID] <= 0) bookList.erase(ID);

}
void UserUI::RentList(void)
{
    cout << "\n\n";
    cout << "책 ID \t\t 개수(권)\n ";
    for(auto& book : bookList) {
        cout << book.first << "\t\t" << book.second <<"\n";
    }
}