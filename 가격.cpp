#include <iostream>
#include <windows.h>
#include"조작.h"
#include"메뉴.h"
#include"결제.h"
using namespace std;

extern int Nbulgogi, Nshrimp, Nchicken, Ncheese, Negg;
extern int Npotato, Nnuggets, Ncstick, Ncpotatoes;
extern int Ncola, Nzero_cola, Nsoda, Norange, Nwater;
extern int sum1, sum2, sum3;

extern HamburgerSystem hb; //클래스 HamburgerSystem를 hb로 선언
extern Shopping_basket sb; //클래스 Shopping_basket를 sb로 선언


//------------------[가격]------------------------
void hamburger_price(int n) //hamburger_price함수 작성
{
    int bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200; //정수형 변수 bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200로 선언

    if (n == 0) //if문 n = 0 일때
    {
        gotoxy(15, 10);
        cout << "종료" << endl; //종료 출력
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            if (Nbulgogi > 0) { //불고기 버거가 남아있으면
                Nbulgogi--; //불고기 버거의 수를 -1 감소
                sum1 += bulgogi; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("불고기버거(3500)");
                sb.printSelectedMenu(bulgogi); //불고기버거의 값을 price_menu에 저장
            }
            else { //불고기 버거가 품절이면
                gotoxy(15, 14);
                cout << "불고기버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            if (Nshrimp > 0) { //새우 버거가 남아있으면
                Nshrimp--; //새우 버거의 수를 -1 감소
                sum1 += shrimp; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("새우버거(3000)");
                sb.printSelectedMenu(shrimp); //새우버거의 값을 price_menu에 저장
            }
            else { //새우 버거가 품절이면
                gotoxy(15, 14);
                cout << "새우버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            if (Nchicken > 0) { //치킨 버거가 남아있으면
                Nchicken--; //치킨 버거의 수를 -1 감소
                sum1 += chicken; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("치킨버거(4000)");
                sb.printSelectedMenu(chicken); //치킨버거의 값을 price_menu에 저장
            }
            else { //치킨 버거가 품절이면
                gotoxy(15, 14);
                cout << "치킨버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 4: //3이 눌렸을 때
            if (Ncheese > 0) { //치즈 버거가 남아있으면
                Ncheese--; //치즈 버거의 수를 -1 감소
                sum1 += cheese; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("치즈버거(3700)");
                sb.printSelectedMenu(cheese); //치즈버거의 값을 price_menu에 저장
            }
            else { //치즈 버거가 품절이면
                gotoxy(15, 14);
                cout << "치즈버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 5: //3이 눌렸을 때
            if (Negg > 0) { //에그 버거가 남아있으면
                Negg--; //에그 버거의 수를 -1 감소
                sum1 += egg; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("에그버거(3200)");
                sb.printSelectedMenu(egg); //에그버거의 값을 price_menu에 저장
            }
            else { //에그 버거가 품절이면
                gotoxy(15, 14);
                cout << "에그버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            gotoxy(15, 10);
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
        }

        break; //while문 나가기
    }

}

void side_price(int n) { //side_price함수 작성
    int potato = 1200, nuggets = 1500, cstick = 1000, cpotatoes = 2000; // 정수현 변수 potato = 1200, nuggets = 1500, cstick = 1000, cpotatoes = 2000로 선언

    if (n == 0) //주문 종류n이 0이면 종료
    {
        gotoxy(15, 10);
        cout << "종료" << endl; //종료 출력
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //주문 종류n이 0이 아니면
    {
        switch (n)
        {
        case 1:
            if (Npotato > 0) { //감자튀김이 남아있으면
                Npotato--; //감자튀김의 수를 -1 감소
                sum2 += potato; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("감자튀김(1200)");
                sb.printSelectedMenu(potato); //감자튀김 값을 price_menu에 저장
            }
            else { //감자튀김이 품절이면
                gotoxy(15, 17);
                cout << "감자튀김은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.SM();
            }
            break; //switch문 나가기
        case 2:
            if (Nnuggets > 0) { //치킨너겟이 남아있으면
                Nnuggets--; //치킨너겟의 수를 -1 감소
                sum2 += nuggets; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("치킨너겟(1500)");
                sb.printSelectedMenu(nuggets); //치킨너겟의 값을 price_menu에 저장
            }
            else { //치킨너겟이 품절이면
                gotoxy(15, 17);
                cout << "치킨너겟은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.SM();
            }
            break; //switch문 나가기
        case 3:
            if (Ncstick > 0) { //치즈스틱이 남아있으면
                Ncstick--; //치즈스틱의 수를 -1 감소
                sum2 += cstick; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("치즈스틱(1000)");
                sb.printSelectedMenu(cstick); //치즈스틱의 값을 price_menu에 저장
            }
            else { //치즈스틱이 품절이면
                gotoxy(15, 17);
                cout << "치즈스틱은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.SM();
            }
            break; //switch문 나가기
        case 4:
            if (Ncpotatoes > 0) { //치즈감자가 남아있으면
                Ncpotatoes--; //치즈감자의 수를 -1 감소
                sum2 += cpotatoes; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("치즈감자(2000)");
                sb.printSelectedMenu(cpotatoes); //치즈감자의 값을 price_menu에 저장
            }
            else { //치즈감자가 품절이면
                gotoxy(15, 17);
                cout << "치즈감자는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.SM();
            }
            break; //switch문 나가기
        default:
            gotoxy(15, 10);
            cout << "다시 입력하세요"; // 유효하지 않은 주문일 경우 다시 입력 요청
        }

        break; //while문 나가기
    }
}

void drink_price(int n) { //drin_price함수 작성
    int cola = 1500, zero_cola = 1500, soda = 1500, orange = 1200, water = 1000; //정수형 변수 cola = 1500, zero_cola = 1500, soda = 1500, orange = 1200, water = 1000로 선언

    if (n == 0) //if문 n = 0 일때
    {
        gotoxy(15, 10);
        cout << "종료" << endl; //종료 출력
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            if (Ncola > 0) { //콜라가 남아있으면
                Ncola--; //콜라의 수를 -1 감소
                sum3 += cola; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("콜라(1500)");
                sb.printSelectedMenu(cola); //콜라의 값을 price_menu에 저장
            }
            else { //콜라가 품절이면
                gotoxy(15, 18);
                cout << "콜라는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 19);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.DM();
            }
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            if (Nzero_cola > 0) { //제로콜라가 남아있으면
                Nzero_cola--; //제로콜라의 수를 -1 감소
                sum3 += zero_cola; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("제로콜라(1500)");
                sb.printSelectedMenu(zero_cola); //제로콜라의 값을 price_menu에 저장
            }
            else { //제로콜라가 품절이면
                gotoxy(15, 18);
                cout << "제로콜라는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 19);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.DM();
            }
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            if (Nsoda > 0) { //사이다가 남아있으면
                Nsoda--; //사이다의 수를 -1 감소
                sum3 += soda; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("사이다(1500)");
                sb.printSelectedMenu(soda); //사이다의 값을 price_menu에 저장
            }
            else { //사이다가 품절이면
                gotoxy(15, 18);
                cout << "사이다는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 19);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.DM();
            }
            break; //switch문 나가기
        case 4: //4가 눌렸을 때
            if (Norange > 0) { //오렌지주스가 남아있으면
                Norange--; //오렌지주스의 수를 -1 감소
                sum3 += orange; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("오렌지주스(1200)");
                sb.printSelectedMenu(orange); //오렌지 주스의 값을 price_menu에 저장
            }
            else { //오렌지주스가 품절이면
                gotoxy(15, 18);
                cout << "오렌지주스는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 19);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.DM();
            }
            break; //switch문 나가기
        case 5: //5가 눌렸을 때
            if (Nwater > 0) { //물이 남아있으면
                Nwater--; //물의 수를 -1 감소
                sum3 += water; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("물(1000)");
                sb.printSelectedMenu(water); //물의 값을 price_menu에 저장
            }
            else { //물이 품절이면
                gotoxy(15, 18);
                cout << "물은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 19);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.DM();
            }
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            gotoxy(15, 10);
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
        }

        break; //while문 나가기
    }
}

//--------------------------[세트]---------------------------------
int total = 0;//세트메뉴 가격 지정 함수

void hamset_price(int n) // hamset_price함수 작성
{
    int bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200;

    if (n == 0) //주문 종류n이 0이면 종료
    {
        gotoxy(15, 10);
        cout << "종료" << endl; //종료 출력
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        total = 0;
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            if (Nbulgogi > 0) { //불고기 버거가 남아있으면
                Nbulgogi--; //불고기 버거의 수를 -1 감소
                total += bulgogi; //불고기버거의 값을 price_menu에 저장
                sum1 += bulgogi; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("불고기버거(3500)");
            }
            else { //불고기 버거가 품절이면
                gotoxy(15, 14);
                cout << "불고기버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            if (Nshrimp > 0) { //새우 버거가 남아있으면
                Nshrimp--; //새우 버거의 수를 -1 감소
                total += shrimp; //새우버거의 값을 price_menu에 저장
                sum1 += shrimp; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("새우버거(3000)");
            }
            else { //새우 버거가 품절이면
                gotoxy(15, 14);
                cout << "새우버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            if (Nchicken > 0) { //치킨 버거가 남아있으면
                Nchicken--; //치킨 버거의 수를 -1 감소
                total += chicken; //치킨버거의 값을 price_menu에 저장
                sum1 += chicken; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("치킨버거(4000)");
            }
            else { //치킨 버거가 품절이면
                gotoxy(15, 14);
                cout << "치킨버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 4: //3이 눌렸을 때
            if (Ncheese > 0) { //치즈 버거가 남아있으면
                Ncheese--; //치즈 버거의 수를 -1 감소
                total += cheese; //치즈버거의 값을 price_menu에 저장
                sum1 += cheese; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("치즈버거(3700)");
            }
            else { //치즈 버거가 품절이면
                gotoxy(15, 14);
                cout << "치즈버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        case 5: //3이 눌렸을 때
            if (Negg > 0) { //에그 버거가 남아있으면
                Negg--; //에그 버거의 수를 -1 감소
                total += egg; //에그버거의 값을 price_menu에 저장
                sum1 += egg; // 햄버거가 팔릴 때, 해당 가격을 sum1에 더함
                sb.selectedMenu.push_back("에그버거(3200)");
            }
            else { //에그 버거가 품절이면
                gotoxy(15, 14);
                cout << "에그버거는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 15);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.HBM();
            }
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            gotoxy(15, 10);
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
        }

        break; //while문 나가기
    }
}

void set_drink(int n) { //set_drink함수 작성
    int cola = 0, zero_cola = 0, soda = 0, orange = 500, water = 0;

    if (n == 0) //if문 n = 0 일때
    {
        gotoxy(15, 10);
        cout << "종료" << endl; //종료 출력
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            if (Ncola > 0) { //콜라가 남아있으면
                Ncola--; //콜라의 수를 -1 감소
                total += cola; //콜라의 값을 price_menu에 저장
                sum3 += cola; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("콜라(+0)");
            }
            else { //콜라거가 품절이면
                gotoxy(15, 17);
                cout << "콜라는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CD();
            }
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            if (Nzero_cola > 0) { //제로콜라가 남아있으면
                Nzero_cola--; //제로콜라의 수를 -1 감소
                total += zero_cola; //제로콜라의 값을 price_menu에 저장
                sum3 += zero_cola; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("제로콜라(+0)");
            }
            else { //제로콜라가 품절이면
                gotoxy(15, 17);
                cout << "제로 콜라는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CD();
            }
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            if (Nsoda > 0) { //사이다가 남아있으면
                Nsoda--; //사이다의 수를 -1 감소
                total += soda; //사이다의 값을 price_menu에 저장
                sum3 += soda; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("사이다(+0)");
            }
            else { //사이다가 품절이면
                gotoxy(15, 17);
                cout << "사이다는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CD();
            }
            break; //switch문 나가기
        case 4: //4가 눌렸을 때
            if (Norange > 0) { //오렌지주스가 남아있으면
                Norange--; //오렌지주스의 수를 -1 감소
                total += orange; //오렌지 주스의 값을 price_menu에 저장
                sum3 += orange; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("오렌지주스(+500)");
            }
            else { //오렌지주스가 품절이면
                gotoxy(15, 17);
                cout << "오렌지주스는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CD();
            }
            break; //switch문 나가기
        case 5: //5가 눌렸을 때
            if (Nwater > 0) { //물이 남아있으면
                Nwater--; //물의 수를 -1 감소
                total += water; //물의 값을 price_menu에 저장
                sum3 += water; // 음료가 팔릴 때, 해당 가격을 sum3에 더함
                sb.selectedMenu.push_back("물(+0)");
            }
            else { //물이 품절이면
                gotoxy(15, 17);
                cout << "물은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 18);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CD();
            }
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            gotoxy(15, 10);
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
        }

        break; //while문 나가기
    }
}

void set_side(int n) { //set_side함수 작성
    int potato = 0, nuggets = 500, cstick = 500, cpotatoes = 1000;

    if (n == 0) //주문 종류n이 0이면 종료
    {
        gotoxy(15, 10);
        cout << "종료" << endl; //종료 출력
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //주문 종류n이 0이 아니면
    {
        switch (n)
        {
        case 1:
            if (Npotato > 0) { //감자튀김가 남아있으면
                Npotato--; //감자튀김의 수를 -1 감소
                total += potato; //감자튀김 값을 price_menu에 저장
                sum2 += potato; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("감자튀김(+0)");
                sb.printSelectedMenu(total);
            }
            else { //감자튀김이 품절이면
                gotoxy(15, 16);
                cout << "감자튀김은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 17);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CS();
            }
            break; //switch문 나가기
        case 2:
            if (Nnuggets > 0) { //치킨너겟이 남아있으면
                Nnuggets--; //치킨너겟의 수를 -1 감소
                total += nuggets; //치킨너겟의 값을 price_menu에 저장
                sum2 += nuggets; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("치킨너겟(+500)");
                sb.printSelectedMenu(total);
            }
            else { //치킨너겟이 품절이면
                gotoxy(15, 16);
                cout << "치킨너겟은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 17);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CS();
            }
            break; //switch문 나가기
        case 3:
            if (Ncstick > 0) { //치즈스틱이 남아있으면
                Ncstick--; //치즈스틱의 수를 -1 감소
                total += cstick; //치즈스틱의 값을 price_menu에 저장
                sum2 += cstick; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("치즈스틱(+500)");
                sb.printSelectedMenu(total);
            }
            else { //치즈스틱이 품절이면
                gotoxy(15, 16);
                cout << "치즈스틱은 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 17);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CS();
            }
            break; //switch문 나가기
        case 4:
            if (Ncpotatoes > 0) { //치즈감자이 남아있으면
                Ncpotatoes--; //치즈감자의 수를 -1 감소
                total += cpotatoes; //치즈감자의 값을 price_menu에 저장
                sum2 += cpotatoes; // 사이드메뉴가 팔릴 때, 해당 가격을 sum2에 더함
                sb.selectedMenu.push_back("치즈감자(+1000)");
                sb.printSelectedMenu(total);
            }
            else { //치즈감자가 품절이면
                gotoxy(15, 16);
                cout << "치즈감자는 품절입니다." << endl; //품절 메시지 출력
                for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
                {
                    gotoxy(15, 17);
                    cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                hb.CS();
            }
            break; //switch문 나가기
        default:
            gotoxy(15, 10);
            cout << "다시 입력하세요"; // 유효하지 않은 주문일 경우 다시 입력 요청
        }

        break; //while문 나가기
    }
}

//----------------------------------------------------------------------------------
