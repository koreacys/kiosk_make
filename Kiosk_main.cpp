#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ���������� �����ϰ� �ʱ�ȭ
int bulgogi = 10, shrimp = 10, chicken = 10, cheese = 10, egg = 10;
int potato = 10, nuggets = 10, cstick = 10, cpotatoes = 10;
int cola = 10, zero_cola = 10, soda = 10, orange = 10, water = 10;

void hamburger_price(int n); // �ܹ��� ������ ����ϴ� �Լ�
void side_price(int n); // ���̵� �޴� ������ ����ϴ� �Լ�
void drink_price(int n);// ���� �޴� ������ ����ϴ� �Լ�
void setmenu_price(int n);//�ܹ��� ��Ʈ�޴��� ����ϴ� �Լ�

class SumAll { // ���� ���� Ŭ���� 
public:

    int b1 = 3500, b2 = 3000, b3 = 4000, b4 = 3700, b5 = 3200; // �ܹ��� ����
    int s1 = 1200, s2 = 1500, s3 = 1000, s4 = 2000; // ���̵� ����
    int d1 = 1500, d2 = 1500, d3 = 1500, d4 = 1200, d5 = 1000; // ���� ����
    int n = 0; // �ܹ���, ���̵�, ������ ������ �޴� ���� �ʱ�ȭ
    int sum1 = 0, sum2 = 0, sum3 = 0; // �� ���� �ջ��� �޴� ���� �ʱ�ȭ
    int sum4 = sum1 + sum2 + sum3; // ��� ������ �ջ��� �޴� ����

    void ham_sale(int n) {
        sum1 = (b1 * n) + (b2 * n) + (b3 * n) + (b4 * n) + (b5 * n);
        cout << "�ܹ��� ������ " << sum1 << " �� �Դϴ�.";
    }

    void side_sale(int n) {
        sum2 = (s1 * n) + (s2 * n) + (s3 * n) + (s4 * n);
        cout << "���̵� ������ " << sum2 << " �� �Դϴ�.";
    }

    void drink_sale(int n) {
        sum3 = (d1 * n) + (d2 * n) + (d3 * n) + (d4 * n) + (d5 * n);
        cout << "���� ������ " << sum3 << " �� �Դϴ�.";
    }

    void all_sale(int n) {
        cout << "�� ������ " << sum4 << " �� �Դϴ�.";
    }

};

SumAll SA; // ���� ���� ��ü

void manager() { //������ ��� �Լ�
    // �Ķ���� n�� ���������� ����
    int choice; // ����ڰ� ������ �޴� ��ȣ
    int amount; // ��� �߰��ϰų� ���� ����

    cout << "============[������ ���]============" << endl; // ���� ���
    cout << "�� �޴��� ���� ������ ������ �����ϴ�." << endl; // ���� ���
    cout << "1) �Ұ�����: " << bulgogi << endl; // �Ұ������� ���� ���� ���
    cout << "2) �������: " << shrimp << endl; // ��������� ���� ���� ���
    cout << "3) ġŲ����: " << chicken << endl; // ġŲ������ ���� ���� ���
    cout << "4) ġ�����: " << cheese << endl; // ġ������� ���� ���� ���
    cout << "5) ���׹���: " << egg << endl; // ���׹����� ���� ���� ���
    cout << "6) ����Ƣ��: " << potato << endl; // ����Ƣ���� ���� ���� ���
    cout << "7) ġŲ�ʰ�: " << nuggets << endl; // ġŲ�ʰ��� ���� ���� ���
    cout << "8) ġ�ƽ: " << cstick << endl; // ġ�ƽ�� ���� ���� ���
    cout << "9) ġ���: " << cpotatoes << endl; // ġ����� ���� ���� ���
    cout << "10) �ݶ�: " << cola << endl; // �ݶ��� ���� ���� ���
    cout << "11) �����ݶ�: " << zero_cola << endl; // �����ݶ��� ���� ���� ���
    cout << "12) ���̴�: " << soda << endl; // ���̴��� ���� ���� ���
    cout << "13) �������ֽ�: " << orange << endl; // �������ֽ��� ���� ���� ���
    cout << "14) ��: " << water << endl; // ���� ���� ���� ���
    cout << "==================================" << endl; // ���� ���

    while (1) { // ���ѹݺ�
        cout << "��� �߰��ϰų� ���� �޴� ��ȣ�� �Է��ϼ���. (0�� ����)" << endl; // ���� ���
        cin >> choice; // choice�� �Է��� ���� �ֱ�
        if (choice == 0) { // choice�� 0�̸�
            cout << "������ ��带 �����մϴ�." << endl; // ���� ���
            break; // while�� ������
        }
        else if (choice < 1 || choice > 14) { // choice�� 1���� �۰ų� 14���� ũ��
            cout << "�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���." << endl; // ���� ���
            continue; // while���� ó������ ���ư���
        }
        else { // choice�� 1���� 14 ���̸�
            cout << "��� �߰��Ϸ��� ���, ���̷��� ������ �Է��ϼ���." << endl; // ���� ���
            cin >> amount; // amount�� �Է��� ���� �ֱ�
            switch (choice) { // switch���� choice �ֱ�
            case 1: // choice�� 1�̸�
                bulgogi += amount; // �Ұ������� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 2: // choice�� 2�̸�
                shrimp += amount; // ��������� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 3: // choice�� 3�̸�
                chicken += amount; // ġŲ������ ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 4: // choice�� 4�̸�
                cheese += amount; // ġ������� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 5: // choice�� 5�̸�
                egg += amount; // ���׹����� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 6: // choice�� 6�̸�
                potato += amount; // ����Ƣ���� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 7: // choice�� 7�̸�
                nuggets += amount; // ġŲ�ʰ��� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 8: // choice�� 8�̸�
                cstick += amount; // ġ�ƽ�� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 9: // choice�� 9�̸�
                cpotatoes += amount; // ġ����� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 10: // choice�� 10�̸�
                cola += amount; // �ݶ��� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 11: // choice�� 11�̸�
                zero_cola += amount; // �����ݶ��� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 12: // choice�� 12�̸�
                soda += amount; // ���̴��� ���� ������ amount ���ϱ�
            }
        }
    }
}

class HamburgerSystem { //Ŭ���� HamburgerSystem
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
            case 9: // 9�� ������
                manager(); //manager() �Լ� ����
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
    // ���õ� �޴��� �� ������ ������ ���� �߰�
    vector<string> selectedMenu; // ���õ� �޴� ����� �����ϴ� ����
    int totalPrice = 0; // �� ����

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

    void printSelectedMenu() { // ���õ� �޴� ��� �Լ�
        cout << "============[������ �޴�]============" << endl;
        for (const string& menu : selectedMenu) {
            cout << menu << endl;
        }
        cout << "�� ����: " << totalPrice << "��" << endl;
        cout << "=====================================" << endl;
    }
    void setMenu() {
        int hambergerset;
        cout << "=============[�޴�����]===============" << endl;
        cout << "1. �Ұ����ż�Ʈ(5500)" << endl;
        cout << "2. ������ż�Ʈ(5000)" << endl;
        cout << "3. ġŲ���ż�Ʈ(6000) " << endl;
        cout << "4. ġ����ż�Ʈ(5700)" << endl;
        cout << "5. ���׹��ż�Ʈ(5200)" << endl;
        cout << "===========================================" << endl;
        cin >> hambergerset;
        setmenu_price(hambergerset);
    }

    void hamburgerMenu() {
        int hamburgerChoice;
        int MenuType;
        cout << "============[�޴�����]============" << endl;
        cout << "1) �Ұ�����(3500)" << endl;
        cout << "2) �������(3000)" << endl;
        cout << "3) ġŲ����(4000)" << endl;
        cout << "4) ġ�����(3700)" << endl;
        cout << "5) ���׹���(3200)" << endl;
        cout << "==================================\n";
        cin >> hamburgerChoice;
        if (hamburgerChoice != 0) {
            switch (hamburgerChoice) {
            case 1:
                selectedMenu.push_back("�Ұ�����(3500)");
                totalPrice += 3500;
                break;
            case 2:
                selectedMenu.push_back("�������(3000)");
                totalPrice += 3000;
                break;
            case 3:
                selectedMenu.push_back("ġŲ����(4000)");
                totalPrice += 4000;
                break;
            case 4:
                selectedMenu.push_back("ġ�����(3700)");
                totalPrice += 3700;
                break;
            case 5:
                selectedMenu.push_back("���׹���(3200)");
                totalPrice += 3200;
                break;
            default:
                cout << "�ٽ� �Է��ϼ���" << endl;
            }
        }
        cout << "=========[��ǰ/��Ʈ ����]============" << endl;
        cout << "1. ��ǰ   2. ��Ʈ" << endl;
        cout << "===============================" << endl;
        cin >> MenuType;
        switch (MenuType) {
        case 1:
            hamburger_price(hamburgerChoice);
            break;
        case 2:
            setMenu();
        default:
            cout << "=========================================" << endl;
            cout << " �ٽ� �������ּ���" << endl;
            cout << "=========================================" << endl;
        }
        printSelectedMenu();
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
        if (sideMenu != 0) {
            switch (sideMenu) {
            case 1:
                selectedMenu.push_back("����Ƣ��(1200)");
                totalPrice += 1200;
                break;
            case 2:
                selectedMenu.push_back("ġŲ�ʰ�(1500)");
                totalPrice += 1500;
                break;
            case 3:
                selectedMenu.push_back("ġ�ƽ(1000)");
                totalPrice += 1000;
                break;
            case 4:
                selectedMenu.push_back("ġ���(2000)");
                totalPrice += 2000;
                break;
            default:
                cout << "�ٽ� �Է��ϼ���" << endl;
            }
        }
        printSelectedMenu();
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
        if (drinkMenu != 0) {
            switch (drinkMenu) {
            case 1:
                selectedMenu.push_back("�ݶ�(1500)");
                totalPrice += 1500;
                break;
            case 2:
                selectedMenu.push_back("�����ݶ�(1500)");
                totalPrice += 1500;
                break;
            case 3:
                selectedMenu.push_back("���̴�(1500)");
                totalPrice += 1500;
                break;
            case 4:
                selectedMenu.push_back("�������ֽ�(1200)");
                totalPrice += 1200;
                break;
            case 5:
                selectedMenu.push_back("��(1000)");
                totalPrice += 1000;
                break;
            default:
                cout << "�ٽ� �Է��ϼ���" << endl;
            }
        }
        printSelectedMenu();
    }
};

HamburgerSystem hb; //Ŭ���� CafeOrderSystem�� cafe�� ����

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
    int bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200; //������ ���� bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200�� ����

    if (n == 0) //if�� n = 0 �϶�
    {
        cout << "����" << endl; //���� ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            pr.price_menu(bulgogi); //�Ұ������� ���� price_menu�� ����
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

void setmenu_price(int n) //setmenu_price�Լ� �ۼ�
{
    int Bulgogiset = 5500, shrimpset = 5000, chickenset = 6000, cheeseset = 5700, eggset = 5200; //������ ���� int Bulgogiset = 5500, shrimpset = 5000, chickenset = 6000, cheeseset = 5700, eggset = 52000 �� ����

    if (n == 0) //if�� n = 0 �϶�
    {
        cout << "����" << endl; //���� ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            pr.price_menu(Bulgogiset); //�Ұ����ż�Ʈ�� ���� price_menu�� ����
            break; //switch�� ������
        case 2: //2�� ������ ��
            pr.price_menu(shrimpset); //������Ż�Ʈ�� ���� price_menu�� ����
            break; //switch�� ������
        case 3: //3�� ������ ��
            pr.price_menu(chickenset); //ġŲ���ż�Ʈ�� ���� price_menu�� ����
            break; //switch�� ������
        case 4: //3�� ������ ��
            pr.price_menu(cheeseset); //ġ����ż�Ʈ�� ���� price_menu�� ����
            break; //switch�� ������
        case 5: //3�� ������ ��
            pr.price_menu(eggset); //���׹��ż�Ʈ�� ���� price_menu�� ����
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}


int main(void)//main�Լ� ����
{
    hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
    return 0;
}