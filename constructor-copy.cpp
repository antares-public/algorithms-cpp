#include <iostream>
#include <cstdlib>

using namespace std;

class MyClass
{
public:
    int *data;

    MyClass(int size)
    {
        this->Size = size;
        this->data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        cout << "Constructor > " << this << endl;
    };

    MyClass(const MyClass &other)
    {
        // this->data = other.data;
        this->Size = other.Size;
        this->data = new int[other.Size];

        for (int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }
        cout << "Constructor copy > " << this << endl;
    }

    ~MyClass()
    {
        cout << "Destructor > " << this << endl;
        delete[] data;
    };

private:
    int Size;
};

void Foo(MyClass value)
{
    cout << "FOO" << endl;
}

MyClass foo2()
{
    cout << "FOO_2" << endl;
    MyClass temp(2);

    return temp;
}

void foo(MyClass value)
{
    cout << "Foo" << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    MyClass a(12);
    MyClass b(a);

    system("pause>nul");

    return 0;
}
