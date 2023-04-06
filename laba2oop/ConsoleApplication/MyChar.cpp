#include "MyChar.h"

MyChar::MyChar()
{
    data = nullptr;
    size = NULL;
}

MyChar::~MyChar()
{
    delete[] data;
}

void MyChar::setSize(int size)
{
    this->size = size;
}

int MyChar::getSize()
{
    return size;
}

void MyChar::setData(char* data)
{
    this->data = new char[size];
    for (int i = 0; i < size; i++)
    {
        if (data[i] != NULL)
            this->data[i] = data[i];
        else
            this->data[i] = NULL;
    }
}

void MyChar::getData(int size, char* resData)
{
    for (int i = 0; i < size; i++)
        resData[i] = data[i];
};

MyChar::MyChar(int size, char* data)
{
    setSize(size);
    setData(data);
}

string MyChar::toString()
{
    string res = data;
    return res;
}

void MyChar::operator+(char ch)
{
    size++;
    char* newData = new char[size];
    for (int i = 0; i < size; i++)
    {
        if (i < strlen(data))
            newData[i] = data[i];
        else if (i == strlen(data))
            newData[i] = ch;
        else
            newData[i] = '\0';
    }
    delete[] data;
    data = newData;
}

MyChar MyChar::operator*(MyChar& right)
{
    char* new_str = new char[size];
    std::sort(data, data + strlen(data));
    std::sort(right.data, right.data + strlen(right.data));
    char* new_str_end =
        set_intersection(data, data + strlen(data), right.data, right.data + strlen(right.data), new_str);
    *new_str_end = '\0';
    MyChar* res = new MyChar(strlen(new_str), new_str);
    return *res;
}


MyChar::operator int()
{
    return strlen(data);
}
