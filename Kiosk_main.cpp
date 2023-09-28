#include<iostream>
using namespace std;

void sandwich_price(int n);//������ġ ������ ����ϴ� �Լ�
void coffee_price(int n);//Ŀ�� ������ ����ϴ� �Լ�

class CafeOrderSystem { //Ŭ���� CafeOrderSystem
public: //����
	void run() { //run �Լ� �ۼ�
		int menu; //menu ����

		while (1) { //���ѹݺ� �Լ�
			ShowMenu(); //ShowMenu()�Լ� �θ���
			cout << "�޴��� �����ϼ���: "; //���� ���
			cin >> menu; //menu�� �Է��� ���� �ֱ�

			switch (menu) { //����ġ ���� menu �ֱ�
			case 1: // 1�� ������
				CoffeeOrder(); //CoffeeOrder() �Լ� ����
				break; //����ġ �� ������
			case 2: // 2�� ������
				SandwichOrder(); //SandwichOrder() �Լ� ����
				break; //����ġ �� ������
			case 0: //0�� ������
				cout << "�����մϴ�." << endl; // ���� ���
				return;
			default: //�� ������ �ƴ϶��
				cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl; //���� ���
			}
		}
	}

private: //����
	void ShowMenu() { //ShowMenu() �Լ� ����
		cout << "============[�޴�]============" << endl; //���� ���
		cout << " 1. Ŀ��" << endl; //���� ���
		cout << " 2. ������ġ" << endl; //���� ���
		cout << " 0. ����" << endl; //���� ���
		cout << "==============================" << endl; //���� ���
	}

	void CoffeeOrder() { //CoffeeOrder()�Լ� ����
		int coffeeChoice; //coffeeChoice ���� ����
		cout << "------------[Ŀ��]------------\n"; //���� ���
		cout << " 1) �Ƹ޸�ī��(400)\n"; //���� ���
		cout << " 2) ī��� (700)\n"; //���� ���
		cout << " 3) ī���ī (800)\n"; //���� ���
		cout << " 0. ����\n"; //���� ���
		cout << "------------------------------\n\n"; //���� ���
		cout << "Ŀ�� ������ �����ϼ���: "; //���� ���
		cin >> coffeeChoice; //�Է��� ���ڸ� coffeeChoice�� �Է�
		coffee_price(coffeeChoice); // coffee_price�� �ҷ��� coffeeChoice ����
	}

	void SandwichOrder() { //SandwichOrder() �Լ� ����
		int sandwichChoice; // sandwichChoice ���� ����
		cout << "------------[������ġ]------------\n"; ////���� ���
		cout << " 1) ������ġ (700)\n"; //���� ���
		cout << " 2) �׸�������ġ (800)\n"; //���� ���
		cout << " 3) ����� ������ġ (800)\n"; //���� ���
		cout << " 0. ����\n"; //���� ���
		cout << "---------------------------------\n\n"; //���� ���
		cout << "������ġ ������ �����ϼ���: "; //���� ���
		cin >> sandwichChoice; // �Է��� ���ڸ� sandwichChoice�� ����
		sandwich_price(sandwichChoice); //sandwich_price�� �ҷ��� sandwichChoice ����
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

class price { //��� Ŭ����
public:
	int mony, g;  //������ mony�� g ����
	void my_mony(int m) { //my_mony �Լ� ����
		mony = m; //mony�� m ����
	}

	void price_menu(int p) { //price_menu �Լ� ����
		g = mony - p;  //��� ����� g�� ����
		ch.Calculator_change(g); //change Ŭ������ Calculator_change �Լ� ȣ��
	}
};

price pr; //price Ŭ������ pr�� ����

void coffee_price(int n) //coffee_price�Լ� �ۼ�
{
	int m; //���� �� ���� ������ m ���� ����
	int ame = 400, latte = 700, moca = 800; //������ ���� ame = 400, latte = 700, moca = 800�� ����

	if (n == 0) //if�� n = 0 �϶�
	{
		cout << "����" << endl; //���� ���
	}

	while (n != 0) //n = 0 �� �ƴ� ��
	{
		cout << "�ݾ��� �����ϼ���"; //�ݾ��� �����ϼ��� ���
		cin >> m;
		pr.my_mony(m); //price Ŭ������ my_mony �Լ� ȣ��

		switch (n) //switch��
		{
		case 1: //1�� ������ ��
			pr.price_menu(ame); //�Ƹ޸�ī���� ���� price_menu�� ����
			break; //switch�� ������
		case 2: //2�� ������ ��
			pr.price_menu(latte); //���� ���� price_menu�� ����
			break; //switch�� ������
		case 3: //3�� ������ ��
			pr.price_menu(moca); //��ī�� ���� price_menu�� ����
			break; //switch�� ������
		default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
			cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
		}

		break; //while�� ������
	}
}

void sandwich_price(int n)//������ġ�� ������ ������ �ݾ��� �Է¹޾� �����ϴ� �Լ�
{
	int m; //���� �� ���� ������ m ���� ����
	int sand = 700, gril = 800, ras = 800; //������ġ�� ����

	if (n == 0) //�ֹ� ����n�� 0�̸� ����
	{
		cout << "����" << endl; //���� ���
	}

	while (n != 0) //�ֹ� ����n�� 0�� �ƴϸ�
	{
		cout << "�ݾ��� �����ϼ���";
		cin >> m; //�Աݹ��� �ݾ��� ����
		pr.my_mony(m); //price Ŭ������ my_mony �Լ� ȣ��
		switch (n)
		{
		case 1:
			pr.price_menu(sand); //������ġ�� ���� price_menu�� ����
			break;
		case 2:
			pr.price_menu(gril); //�׸� ������ġ�� ���� price_menu�� ����
			break;
		case 3:
			pr.price_menu(ras); //����� ������ġ�� ���� price_menu�� ����
			break;
		default:
			cout << "�ٽ� �Է��ϼ���"; // ��ȿ���� ���� �ֹ��� ��� �ٽ� �Է� ��û
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