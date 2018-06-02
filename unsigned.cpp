#include <iostream>
using namespace std;
	
int main()
{
	// short 类型的上限是32767
	short int i;
	short unsigned j;
	j = 32760;
	for(;j<=32800;j++)
	{
		i = j;
		cout << j << " " << i << endl;
	}
}
