#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;

// 数组
int main ()
{
    int n[10]; 
	int i;
	for(i=0;i<10;i++)
		n[i] = i + 555;
	cout << setw(8) << "Element" << setw(8) << "Value" << endl;
	for(i=0;i<10;i++)
		cout << setw(6) << "n[" << i << "]" << setw(8) << n[i] << endl;
    return 0;
}
