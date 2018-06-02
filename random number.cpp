#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int i,j;
	
	// 初始化随机种子
	srand( (unsigned)time(NULL) );
	
	for(i=0;i<20;i++)
		cout << "随机数字[1-10]: " << rand()%11 << endl;
}
