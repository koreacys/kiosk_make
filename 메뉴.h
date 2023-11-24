#pragma once
class HamburgerSystem { //클래스 HamburgerSystem
public: //공개
    int choice, MenuChoice; //menu 변수
    int menucode;
    void run();

    void MenuOrder();

    void HamOrder();

    void HBM();

    void SM();

    void DM();

private:

    int ShowMain();

    int ShowMenu();

    int HamburgerMenu();
            
    void hamburgerMenu();
    int setchoice;
    int setdrink;
    int setside;
    int hamburgerChoice;

    void sideMenu();

    void drinkMenu();
};

extern HamburgerSystem hb; //클래스 HamburgerSystem를 hb로 선언