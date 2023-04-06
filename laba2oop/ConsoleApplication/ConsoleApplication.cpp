#include<iostream>
#include "MyChar.h"

using namespace std;

int main(int argc, char* argv[])
{
	const int size = 10;
	char* array_1 = new char[size] {"sdefs_s\0"};
	MyChar* my_char_1 = new MyChar(size, array_1);

	char* array_2 = new char[size] {"sde\0"};
	MyChar* my_char_2 = new MyChar(size, array_2);

	cout << "my_char_1: " << my_char_1->toString() << endl;
	*my_char_1 + 'd';
	cout << "my_char_1 after adding 'd': " << my_char_1->toString() << endl;

	MyChar my_char_3 = *my_char_1 * *my_char_2;
	cout << "my_char_3: \0" << my_char_3.toString() << endl;

	int length = static_cast<int>(*my_char_1);
	cout << "Length of my_char_1: " << length << endl;

	delete[] array_1;
	delete[] array_2;
	delete my_char_1;
	delete my_char_2;

	return 0;
}