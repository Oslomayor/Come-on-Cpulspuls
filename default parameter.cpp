#include <iostream>
using namespace std;
	
// 参数的默认值
// 要写在 main() 之前
int power(int x, int n=2)
{
	int s=1;
	while(n--)
		s = s * x;
	return s;
}

int main()
{
	int x = 5;
	int n = 10;
	
	// 第一次调用
	cout << power(x, n) << endl;
	
	//第二次调用
	cout << power(x) << endl;
	
	return 0;
}
