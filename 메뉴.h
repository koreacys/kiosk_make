#pragma once
class HamburgerSystem { //Ŭ���� HamburgerSystem
public: //����
    int choice, MenuChoice; //menu ����
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

extern HamburgerSystem hb; //Ŭ���� HamburgerSystem�� hb�� ����