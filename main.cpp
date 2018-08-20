#include <iostream>

using namespace std;

int main() {
	int k = 0;
	int a = 0;


	for (int b = 1; b > a; k++)
	{
		b = b + 13;
		a = a + 7;
		cout << a << endl << b << endl;
		if(b>150)
		{
			a = a + 200;
		}
	}

	cout << "mem boi";


	return 0;
}