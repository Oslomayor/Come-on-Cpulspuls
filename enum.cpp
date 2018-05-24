#include <iostream>
using namespace std;

int main()
{
    enum color {RED=247, GREEN=206, BLUE=231} champine;
    cout << "香槟色的RGB:" << endl;
	champine = RED;
	cout << "R:" << champine << endl;
	champine = GREEN;
	cout << "G:" << champine << endl;
	champine = BLUE;
	cout << "B:" << champine << endl;
	// 我怎么感觉 enum 枚举体有点鸡肋,是我不会用吗
	return 0;
}
