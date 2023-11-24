#pragma once
#include <vector>
#include <string>
using namespace std;
//--------------------[결제 클래스]-----------------------

class change { //change 클래스 정의
public: //접근 제어자 public
    void Calculator_change(int g);
};

class price2 : public change { //계산 클래스 , class change클래스 상속
public:
    int mony, g;  //정수방 mony와 g 생성
    void my_mony(int m);
    void price_menu2(int p);
};

extern price2 p2; //클래스 price2를 p2이름으로 정의

void ment();

class Price { //계산 클래스
    int payway, cash; // 결제 방법을 선택하여 저장할 정수방 pzayway와 현금 결제시 금액을 저장할 cash 생성
public:
    void price_menu(int p);
};

extern Price pr; //price 클래스를 pr로 선언

class Shopping_basket {
public:
    int c;
    // 선택된 메뉴와 총 가격을 저장할 변수 추가
    vector<string> selectedMenu = {}; // 선택된 메뉴 목록을 저장하는 벡터
    int totalPrice = 0; // 총 가격
    int price; //totalPrice를 저장할 변수

    void printSelectedMenu(int p);
};
extern Shopping_basket sb;