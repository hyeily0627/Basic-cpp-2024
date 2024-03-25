#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
    int id;
    int price;
    string producer;

public:
    Product(int id = 0, int price = 0, string pro = "") : id(id), price(price), producer(pro) {}

    // ���� ���� �Լ�
    virtual void show() = 0;

    int getId() const { return id; }
    int getPrice() const { return price; }
    string getProducer() const { return producer; }
};

class Book : public Product
{
private:
    string ISBN;
    string author;
    string title;

public:
    Book(int id, int price, string pro, string ISBN, string author, string title)
        : Product(id, price, pro), ISBN(ISBN), author(author), title(title) {}

    void show() 
    {
        cout << "--- å ���� ---" << endl;
        cout << "��ǰ ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "����: " << author << endl;
        cout << "����: " << title << endl;
    }
};

class Handphone : public Product
{
private:
    string model;
    int RAM;

public:
    Handphone(int id, int price, string pro, string model, int RAM)
        : Product(id, price, pro), model(model), RAM(RAM) {}

    void show() 
    {
        cout << "--- �ڵ��� ���� ---" << endl;
        cout << "��ǰ ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "��: " << model << endl;
        cout << "RAM �뷮: " << RAM << "GB" << endl;
    }
};

class Computer : public Product
{
private:
    string model;
    string cpu;
    int RAM;

public:
    Computer(int id, int price, string pro, string model, string cpu, int RAM)
        : Product(id, price, pro), model(model), cpu(cpu), RAM(RAM) {}

    void show()
    {
        cout << "--- ��ǻ�� ���� ---" << endl;
        cout << "��ǰ ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "��: " << model << endl;
        cout << "CPU: " << cpu << endl;
        cout << "RAM �뷮: " << RAM << "GB" << endl;
    }
};

int main()
{
    Product* productArray[100];
    int numProducts = 0;

    cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ� *****" << endl;


        cout << "1. ��ǰ�߰�, 2. ��ǰ ���, 3. ��ǰ��ȸ, 0. ����" << endl;
        int num;
        cin >> num;

        if (num == 1)
        {
            cout << "�߰��� ��ǰ ������ �����ϼ��� <1. å, 2. �ڵ���, 3. ��ǻ��>" << endl;
            int type;
            cin >> type;

            int id, price;
            string producer;

            cout << "��ǰ ID: ";
            cin >> id;

            cout << "����: ";
            cin >> price;

            cout << "������: ";
            cin >> producer;

            if (type == 1)
            {
                string ISBN, author, title;

                cout << "ISBN: ";
                cin >> ISBN;
                cout << "����: ";
                cin >> author;
                cout << "����: ";
                cin >> title;

                productArray[numProducts] = new Book(id, price, producer, ISBN, author, title);
            }
            if (type == 2)
            {
                string model;
                int RAM;

                cout << "�𵨸�: ";
                cin >> model;
                cout << "��ũ��(GB): ";
                cin >> RAM;

                productArray[numProducts] = new Handphone(id, price, producer, model, RAM);
            }
            if (type == 3)
            {
                string model, cpu;
                int RAM;

                cout << "��: ";
                cin >> model;
                cout << "CPU: ";
                cin >> cpu;
                cout << "RAM �뷮(GB): ";
                cin >> RAM;

                productArray[numProducts] = new Computer(id, price, producer, model, cpu, RAM);
            }

            numProducts++;

            cout << "��ǰ�� �߰��Ǿ����ϴ�." << endl;
            return 0;
        }

        else if (num == 2)
        {
            cout << "��ϵ� ��ǰ ���:" << endl;
            for (int i = 0; i < numProducts; ++i)
            {
                productArray[i]->show();
                cout << endl;
            }
        }
        else if (num == 3)
        {
            int productId;
            cout << "��ȸ�� ��ǰ ID�� �Է��ϼ���: ";
            cin >> productId;
            bool found = false;
            for (int i = 0; i < numProducts; ++i)
            {
                if (productArray[i]->getId() == productId)
                {
                    productArray[i]->show();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "�ش� ��ǰ�� ã�� �� �����ϴ�." << endl;
        }
        else if (num == 0)
        {
            cout << "���α׷��� �����մϴ�." << endl;
            // ���� �Ҵ�� ��ü���� �޸� ����
            for (int i = 0; i < numProducts; ++i)
            {
                delete productArray[i];
            }
            return 0;
        }
        else
        {
            cout << "�߸��� �����Դϴ�. �ٽ� �������ּ���." << endl;
        }

   return 0;
}
/*
- Parent class
class Product : id, price, producer
- child class
class Book : ISBN, auther, title			//978-89-001-0001-01
class Handphone: model, RAM
class Computer: model, cpu, RAM

*��ü ������ �迭 ��� product[100]
* string Ŭ���� ��� ����
*����ȭ��
-----��ǰ���� ���α׷�-----
1 ��ǰ�߰� 2 ��ǰ��� 3 ��ǰ��ȸ 0 ����

1 or 2 or 3 �� ������ ���
1 å 2 �ڵ��� 3 ��ǻ��
���ø���� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ���, �Ǵ� �˻�����ȴ�.
*/