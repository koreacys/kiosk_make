#pragma once

class HamburgerSystem { //클래스 HamburgerSystem
public: //공개
    int choice, MenuChoice; //menu 변수
    int menucode;
    void run();

    void MenuOrder();

    void HamOrder();

    void SideOrder(); // 추가

    void DrinkOrder(); // 추가

    void SetOrSingle(); // 추가

    void ChangeDrinkMenu(); // 추가

    void ChangeSideMenu(); //추가

    void HBM();

    void SM();

    void DM();

    void CS();

    void CD();

private:

    int ShowMain();

    int ShowMenu();

    int HamburgerMenu();

    int ChoiceSet(); // 변경

    int ChangeDrink(); // 추가

    int ChangeSide(); //추가

    int SideMenu(); // 변경

    int DrinkMenu(); // 변경
};

extern HamburgerSystem hb; //클래스 HamburgerSystem를 hb로 선언