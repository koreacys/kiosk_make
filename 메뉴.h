#pragma once

class HamburgerSystem { //Ŭ���� HamburgerSystem
public: //����
    int choice, MenuChoice; //menu ����
    int menucode;
    void run();

    void MenuOrder();

    void HamOrder();

    void SideOrder(); // �߰�

    void DrinkOrder(); // �߰�

    void SetOrSingle(); // �߰�

    void ChangeDrinkMenu(); // �߰�

    void ChangeSideMenu(); //�߰�

    void HBM();

    void SM();

    void DM();

    void CS();

    void CD();

private:

    int ShowMain();

    int ShowMenu();

    int HamburgerMenu();

    int ChoiceSet(); // ����

    int ChangeDrink(); // �߰�

    int ChangeSide(); //�߰�

    int SideMenu(); // ����

    int DrinkMenu(); // ����
};

extern HamburgerSystem hb; //Ŭ���� HamburgerSystem�� hb�� ����