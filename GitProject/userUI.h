#ifndef USERUI_H
#define USERUI_H
#include <iostream>
#include <windows.h>
#include <string.h>
#include <map>
#include "LibraryClass.h"
#include "book.h"


using namespace std;

class UserUI
{
public:
    void gotoxy(int x, int y);
    void printMenu(void);
    void MenuFind(void);
    void MenuRent(void);
    void MenuReturn(void);
    void RentList(void);

    LibraryClass lib;

    int menu;
    string title;
    int ID;
    bool rent;

};
#endif
