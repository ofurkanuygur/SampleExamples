// Asal çarpan ayırma işlemi..

#include <iostream>

using namespace std;


bool asal_mi(int x) {

	for (int i = 2; i < x/2; i++)
	{
		if (x%i == 0)//Eger tam böleni var ise asal değildir..
		{
			return false;
		}
		return true;
	}
}

int main() {

	int n;
	cin >> n;
	cout << "Asallar : ";
	for (int i = 2; i <= n; i++)
	{
		if (asal_mi(i)) 
		{
			cout << i << " \n";
		}

	}

	system("pause");
	return 0;
}
