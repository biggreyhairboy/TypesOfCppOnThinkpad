#include <iostream>
using namespace std;
int main()
{
	cout << "size of bool is: " << sizeof(bool) << endl;
	cout << "size of char is: " << sizeof(char) << endl;
	cout << "size of wchar_t is: " << sizeof(wchar_t) << endl;
	cout << "size of short is: " << sizeof(short) << endl;
	cout << "size of int is: " << sizeof(int) << endl;
	cout << "size of long is: " << sizeof(long) << endl;
	cout << "size of float is: " << sizeof(float) << endl;
	cout << "size of double is: " << sizeof(double) << endl;
	cout << "size of long double is: " << sizeof(long double) << endl;

	int value = 1024;
	int &a1 = value;
	int &a2 = a1;
	cout << a1 << endl;
	a1 = 555;
	cout << a2 << endl;

	enum open_modes{inout , output, append};
	cout << append << endl;

	getchar();

		http://pan.baidu.com/share/link?shareid=1822202541&uk=2687743559 
}