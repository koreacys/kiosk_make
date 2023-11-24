#include <iostream>
#include"테두리.h"
#include"메뉴.h"
using namespace std;

// 남은 버거의 수 초기화
int Nbulgogi = 10, Nshrimp = 10, Nchicken = 10, Ncheese = 10, Negg = 10;
int Npotato = 10, Nnuggets = 10, Ncstick = 10, Ncpotatoes = 10;
int Ncola = 10, Nzero_cola = 10, Nsoda = 10, Norange = 10, Nwater = 10;

//각 매출의 합산을 받는 변수 초기화
int sum1 = 0, sum2 = 0, sum3 = 0;

//콘솔 창의 크기와 제목을 지정하는 함수
void SetConsoleView() //콘솔 창에 대한 초기 설정
{
    system("mode con:cols=60 lines=50"); //콘솔 창의 각각 가로와 세로를 정한다
    system("title remote contro. 객3반 객지탐구"); //콘솔 창의 이름을 정한다
}

int main(void)//main함수 시작
{
    SetConsoleView();
    outline();
    hb.run();
    return 0;
}