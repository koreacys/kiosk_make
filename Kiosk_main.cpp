#include <iostream>
#include"�׵θ�.h"
#include"�޴�.h"
using namespace std;

// ���� ������ �� �ʱ�ȭ
int Nbulgogi = 10, Nshrimp = 10, Nchicken = 10, Ncheese = 10, Negg = 10;
int Npotato = 10, Nnuggets = 10, Ncstick = 10, Ncpotatoes = 10;
int Ncola = 10, Nzero_cola = 10, Nsoda = 10, Norange = 10, Nwater = 10;

//�� ������ �ջ��� �޴� ���� �ʱ�ȭ
int sum1 = 0, sum2 = 0, sum3 = 0;

//�ܼ� â�� ũ��� ������ �����ϴ� �Լ�
void SetConsoleView() //�ܼ� â�� ���� �ʱ� ����
{
    system("mode con:cols=60 lines=50"); //�ܼ� â�� ���� ���ο� ���θ� ���Ѵ�
    system("title remote contro. ��3�� ����Ž��"); //�ܼ� â�� �̸��� ���Ѵ�
}

int main(void)//main�Լ� ����
{
    SetConsoleView();
    outline();
    hb.run();
    return 0;
}