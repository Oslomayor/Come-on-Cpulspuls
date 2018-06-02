#include <iostream>
#include <cmath>
using namespace std;
	
int is_prime(int n);

int main()
{
	// 输出 1-100 质数
	int i;
	for(i=1;i<=100;i++)
		cout << (is_prime(i) ? i : 0) << endl;
}

int is_prime(int n)
{
	int i;
	if(n == 2) return 1;
	if(n <= 1 || n % 2 == 0) return 0;	
	for(i=3;i<=sqrt(n);i++)
		if(n % i == 0)	return 0;
	return 1;
}
