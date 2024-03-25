#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    int id;
    int price;
    string producer;

public:
    Product(int id = 0, int price = 0, string pro = "") : id(id), price(price), producer(pro) {}
    virtual ~Product() {} // ���� �Ҹ��� �߰�

    virtual void show() = 0;

    int getId() const { return id; }
    int getPrice() const { return price; }
    string getProducer() const { return producer; }
};

class Book : public Product {
private:
    string ISBN;
    string author;
    string title;

public:
    Book(int id, int price, string pro, string ISBN, string author, string title)
        : Product(id, price, pro), ISBN(ISBN), author(author), title(title) {}

    void show() override // override Ű���� �߰�
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

class Handphone : public Product {
private:
    string model;
    int RAM;

public:
    Handphone(int id, int price, string pro, string model, int RAM)
        : Product(id, price, pro), model(model), RAM(RAM) {}

    void show() override // override Ű���� �߰�
    {
        cout << "--- �ڵ��� ���� ---" << endl;
        cout << "��ǰ ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "��: " << model << endl;
        cout << "RAM �뷮: " << RAM << "GB" << endl;
    }
};

class Computer : public Product {
private:
    string model;
    string cpu;
    int RAM;

public:
    Computer(int id, int price, string pro, string model, string cpu, int RAM)
        : Product(id, price, pro), model(model), cpu(cpu), RAM(RAM) {}

    void show() override // override Ű���� �߰�
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

int main() {
    Product* productArray[100];
    int numProducts = 0;

    cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ� *****" << endl;

    int num;
    do {
        cout << "1. ��ǰ�߰�, 2. ��ǰ ���, 3. ��ǰ��ȸ, 0. ����" << endl;
        cin >> num;

        if (num == 1) {
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

            if (type == 1) {
                string ISBN, author, title;

                cout << "ISBN: ";
                cin >> ISBN;
                cout << "����: ";
                cin >> author;
                cout << "����: ";
                cin >> title;

                productArray[numProducts] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (type == 2) {
                string model;
                int RAM;

                cout << "�𵨸�: ";
                cin >> model;
                cout << "��ũ��(GB): ";
                cin >> RAM;

                productArray[numProducts] = new Handphone(id, price, producer, model, RAM);
            }
            else if (type == 3) {
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
        }
        else if (num == 2) {
            cout << "��ϵ� ��ǰ ���:" << endl;
            for (int i = 0; i < numProducts; ++i) {
                productArray[i]->show();
                cout << endl;
            }
        }
        else if (num == 3) {
            int productId;
            cout << "��ȸ�� ��ǰ ID�� �Է��ϼ���: ";
            cin >> productId;
            bool found = false;
            for (int i = 0; i < numProducts; ++i) {
                if (productArray[i]->getId() == productId) {
                    productArray[i]->show();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "�ش� ��ǰ�� ã�� �� �����ϴ�." << endl;
        }
        else if (num == 0) {
            cout << "���α׷��� �����մϴ�." << endl;
            // ���� �Ҵ�� ��ü���� �޸� ����
            for (int i = 0; i < numProducts; ++i) {
                delete productArray[i];
            }
        }
        else {
            cout << "�߸��� �����Դϴ�. �ٽ� �������ּ���." << endl;
        }
    } while (num != 0);

    return 0;
}
