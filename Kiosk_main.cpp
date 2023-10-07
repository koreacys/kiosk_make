#include <iostream>
using namespace std;

void hamburger_price(int n); // �ܹ��� ������ ����ϴ� �Լ�
void side_price(int n); // ���̵� �޴� ������ ����ϴ� �Լ�
void drink_price(int n);// ���� �޴� ������ ����ϴ� �Լ�


class CafeOrderSystem { //Ŭ���� CafeOrderSystem
public: //����
    void run() { //run �Լ� �ۼ�
        int choice, MenuChoice; //menu ����

        while (1) { //���ѹݺ� �Լ�
            ShowMain(); //ShowMain()�Լ� �θ���
            cout << "�Ļ縦 �����ϼ���: "; //���� ���
            cin >> choice; //menu�� �Է��� ���� �ֱ�

            switch (choice) { //����ġ ���� choice �ֱ�
            case 1: // 1�� ������
                MenuOrder(); //MenuOrder() �Լ� ����
                break; //����ġ �� ������
            case 2: // 2�� ������
                MenuOrder(); //MenuOrder() �Լ� ����
                break; //����ġ �� ������
            case 0: //0�� ������
                cout << "�����մϴ�." << endl; // ���� ���
                return;
            default: //�� ������ �ƴ϶��
                cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl; //���� ���
            }


            while (1) { //���ѹݺ� �Լ�

                cout << "�޴��� �������ּ���: "; //���� ���
                cin >> MenuChoice; //MenuChoice�� �Է��� ���� �ֱ�

                switch (MenuChoice) { //����ġ ���� choice �ֱ�
                case 1: // 1�� ������
                    hamburgerMenu(); //hamburgerMenu() �Լ� ����
                    break; //����ġ �� ������
                case 2: // 2�� ������
                    sideMenu(); //sideMenu() �Լ� ����
                    break; //����ġ �� ������
                case 3: // 3�� ������
                    drinkMenu(); //drinkMenu() �Լ� ����
                    break; // ����ġ �� ������ + 0 �Է��� �޾� 
                case 0: // 0�� ������
                    ShowMain();
                    break;
                default: //�� ������ �ƴ϶��
                    cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl; //���� ���
                }
            }
        }
    }

private:
    void ShowMain() {  //ShowMenu() �Լ� ����
        cout << "============[����ȭ��]============" << endl; //���� ���
        cout << "1.����" << endl;
        cout << "2.����Ļ�" << endl;
        cout << "0. ����" << endl;
        cout << "==============================" << endl; //���� ���
    }

    void MenuOrder() {
        cout << "============[�޴�����]============" << endl; // ���� ���
        cout << "1. �ܹ���" << endl;
        cout << "2. ���̵� �޴�" << endl;
        cout << "3. ����" << endl; // 0���� ���� �ǵ����� Ű Ȱ��ȭ ��Ű�� ��
        cout << "0. ó������" << endl; // ó������ ���ư���
        cout << "==================================\n"; // ���� ���
    }

    void hamburgerMenu() {
        int hamburgerChoice;
        cout << "============[�޴�����]============" << endl;
        cout << "1) �Ұ�����(3500)" << endl;
        cout << "2) �������(3000)" << endl;
        cout << "3) ġŲ����(4000)" << endl;
        cout << "4) ġ�����(3700)" << endl;
        cout << "5) ���׹���(3200)" << endl;
        cout << "==================================\n";
        cin >> hamburgerChoice;
        hamburger_price(hamburgerChoice);
    }

    void sideMenu() {
        int sideMenu;
        cout << "============[�޴�����]============" << endl;
        cout << "1) ����Ƣ��(1200)" << endl;
        cout << "2) ġŲ�ʰ�(1500)" << endl;
        cout << "3) ġ�ƽ(1000)" << endl;
        cout << "4) ġ���(2000)" << endl;
        cout << "==================================\n";
        cin >> sideMenu;
        side_price(sideMenu);
    }

    void drinkMenu() {
        int drinkMenu;
        cout << "============[�޴�����]============" << endl;
        cout << "1) �ݶ�(1500)" << endl;
        cout << "2) �����ݶ�(1500)" << endl;
        cout << "3) ���̴�(1500)" << endl;
        cout << "4) �������ֽ�(1200)" << endl;
        cout << "5) ��(1000)" << endl;
        cout << "==================================\n";
        cin >> drinkMenu;
        drink_price(drinkMenu);
    }
};

class change { //change Ŭ���� ����
public: //���� ������ public
    void Calculator_change(int g) { //�Ž������� ����ϰ� ����ϴ� ��� �Լ� ����
        if (g >= 0) {
            cout << "\n\n�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�.\n"; //�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�. ���

            cout << "��õ�� " << g / 5000 << "��" << endl; //��õ�� ���� ���
            g %= 5000;
            cout << "õ�� " << g / 1000 << "��" << endl; //õ�� ���� ���
            g %= 1000;
            cout << "����� " << g / 500 << "��" << endl; //����� ���� ���
            g %= 500;
            cout << "��� " << g / 100 << "��" << endl; //��� ���� ���
            cout << "\n"; //�� �ٲ�

        }
        else {
            g = -g; //g�� -g�� �־� �������� g�� ����� �ٲ�
            cout << g << "���� �����մϴ�.\n"; //(������ �ܾ��� �׼�)���� �����մϴ�. ���

        }
    }
};

change ch; //change Ŭ������ ch�� ����

class price2 { //��� Ŭ����
public:
    int mony, g;  //������ mony�� g ����
    void my_mony(int m) { //my_mony �Լ� ����
        mony = m; //mony�� m ����
    }

    void price_menu2(int p) { //price_menu �Լ� ����
        g = mony - p;  //��� ����� g�� ����
        ch.Calculator_change(g); //change Ŭ������ Calculator_change �Լ� ȣ��
    }
};

price2 p2; //Ŭ���� price2�� p2�̸����� ����

class price { //��� Ŭ����
public:
    void price_menu(int p) { //price_menu �Լ� ����
        int payway, cash; // ���� ����� �����Ͽ� ������ ������ payway�� ���� ������ �ݾ��� ������ cash ����

        cout << "============[��������]============" << endl;
        cout << "1. ����" << endl;
        cout << "2. ī��" << endl;
        cout << "3. �Ｚ����/��������" << endl;
        cout << "0. ���� ���" << endl;
        cout << "==================================\n";
        cout << "��������� �������ּ���: ";
        cin >> payway; //���� ����� payway�� ����

        while (1) //�ݺ���
        {
            if (payway == 1) //���� ������
            {
                cout << "���� ������ �����ϼ̽��ϴ�.\n";
                cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                cout << "�ݾ��� �������ּ���.";
                cin >> cash; //�ݾ��� cash�� ����
                p2.my_mony(cash); //p2Ŭ������ my_mony�Լ��� cash�� ����
                p2.price_menu2(p); ////p2Ŭ������ price_menu2�Լ��� ������ �ݾ��� ����
                break;
            }
            else if (payway == 2) //ī�� ������
            {
                cout << "ī�� ������ �����ϼ̽��ϴ�.\n";
                cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                cout << "ī�带 �������ּ���.\n";
                cout << "������ �Ϸ� �Ǿ����ϴ�. \n";
                break;
            }
            else if (payway == 3) //���� ������
            {
                cout << "�Ｚ����/�������̸� �����ϼ̽��ϴ�.\n";
                cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                cout << "�ڵ����� �����⿡ ���ּ���.\n";
                cout << "������ �Ϸ� �Ǿ����ϴ�. \n";
                break;
            }
            else if (payway == 0) //���� ������
            {
                cout << "������ ����ϼ̽��ϴ�.\n";
                break;
            }
        }
    }
};

price pr; //price Ŭ������ pr�� ����

void hamburger_price(int n) //hamburger_price�Լ� �ۼ�
{
    int Bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200; //������ ���� bur1 = 3500, bur2 = 3000, bur3 = 4000, bur4 = 3700, bur5 = 3200 �� ����

    if (n == 0) //if�� n = 0 �϶�
    {
        cout << "����" << endl; //���� ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            pr.price_menu(Bulgogi); //�Ұ������� ���� price_menu�� ����
            break; //switch�� ������
        case 2: //2�� ������ ��
            pr.price_menu(shrimp); //��������� ���� price_menu�� ����
            break; //switch�� ������
        case 3: //3�� ������ ��
            pr.price_menu(chicken); //ġŲ������ ���� price_menu�� ����
            break; //switch�� ������
        case 4: //3�� ������ ��
            pr.price_menu(cheese); //ġ������� ���� price_menu�� ����
            break; //switch�� ������
        case 5: //3�� ������ ��
            pr.price_menu(egg); //���׹����� ���� price_menu�� ����
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}

void side_price(int n) //side_price�Լ� �ۼ�
{
    int potato = 1500, nuggets = 1500, cstick = 1500, cpotatoes = 1200; // ������ ���� potato = 1500, nuggets = 1500, cstick = 1500, cpotatoes = 1200�� ����

    if (n == 0) //�ֹ� ����n�� 0�̸� ����
    {
        cout << "����" << endl; //���� ���
    }

    while (n != 0) //�ֹ� ����n�� 0�� �ƴϸ�
    {
        switch (n)
        {
        case 1:
            pr.price_menu(potato); //����Ƣ�� ���� price_menu�� ����
            break;
        case 2:
            pr.price_menu(nuggets); //ġŲ�ʰ��� ���� price_menu�� ����
            break;
        case 3:
            pr.price_menu(cstick); //ġ�ƽ�� ���� price_menu�� ����
            break;
        case 4:
            pr.price_menu(cpotatoes); //ġ����� ���� price_menu�� ����
            break;
        default:
            cout << "�ٽ� �Է��ϼ���"; // ��ȿ���� ���� �ֹ��� ��� �ٽ� �Է� ��û
        }

        break; //while�� ������
    }
}

void drink_price(int n) //drin_price�Լ� �ۼ�
{
    int cola = 1200, zero_cola = 1500, soda = 1000, orange = 1000, water = 2000; //������ ���� cola = 1200, zero_cola = 1500, soda = 1000, orange = 1000, water = 2000�� ����

    if (n == 0) //if�� n = 0 �϶�
    {
        cout << "����" << endl; //���� ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            pr.price_menu(cola); //�ݶ��� ���� price_menu�� ����
            break; //switch�� ������
        case 2: //2�� ������ ��
            pr.price_menu(zero_cola); //�����ݶ��� ���� price_menu�� ����
            break; //switch�� ������
        case 3: //3�� ������ ��
            pr.price_menu(soda); //���̴��� ���� price_menu�� ����
            break; //switch�� ������
        case 4: //3�� ������ ��
            pr.price_menu(orange); //������ �ֽ��� ���� price_menu�� ����
            break; //switch�� ������
        case 5: //3�� ������ ��
            pr.price_menu(water); //���� ���� price_menu�� ����
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}



int main(void)//main�Լ� ����
{
    CafeOrderSystem cafe; //Ŭ���� CafeOrderSystem�� cafe�� ����
    cafe.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
    return 0;
}