#pragma once
#include <vector>
#include <string>
using namespace std;
//--------------------[���� Ŭ����]-----------------------

class change { //change Ŭ���� ����
public: //���� ������ public
    void Calculator_change(int g);
};

class price2 : public change { //��� Ŭ���� , class changeŬ���� ���
public:
    int mony, g;  //������ mony�� g ����
    void my_mony(int m);
    void price_menu2(int p);
};

extern price2 p2; //Ŭ���� price2�� p2�̸����� ����

void ment();

class Price { //��� Ŭ����
    int payway, cash; // ���� ����� �����Ͽ� ������ ������ pzayway�� ���� ������ �ݾ��� ������ cash ����
public:
    void price_menu(int p);
};

extern Price pr; //price Ŭ������ pr�� ����

class Shopping_basket {
public:
    int c;
    // ���õ� �޴��� �� ������ ������ ���� �߰�
    vector<string> selectedMenu = {}; // ���õ� �޴� ����� �����ϴ� ����
    int totalPrice = 0; // �� ����
    int price; //totalPrice�� ������ ����

    void printSelectedMenu(int p);
};
extern Shopping_basket sb;