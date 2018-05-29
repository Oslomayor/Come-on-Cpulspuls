#include <iostream>
using namespace std;

// 声明变量
extern int a,b,c;

int main()
{
    int a = 1, b = 5;
	int c;
	c = a + b;
	cout << "1+5=" << c << endl;
	return 0;
}
