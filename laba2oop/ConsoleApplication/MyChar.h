#pragma once
#include<algorithm>
#include <string>
using namespace std;
class MyChar
{
    char *data;
    int size;
public:
    MyChar();
    MyChar(int,char*);
    ~MyChar();
    void setData(char*);
    void getData(int,char*);
    void setSize(int);
    int getSize();
    string toString();
    void operator+(char);
    MyChar operator*(MyChar&);
    operator int ();
};
