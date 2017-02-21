#include <iostream>

using namespace std;

void hesapla(int r, float *cevre, float *alan) {

	*cevre = 2 * 3.14*r; //2(pi)r
	*alan = 3.14*r*r;//(pi)r'
}

int main() {

	int yaricap;
	float cevre, alan;
	cout << "Yaricap giriniz : ";
	cin >> yaricap;
	hesapla(yaricap, &cevre, &alan);//cevre ve alanı degişken adreslerini parametre olarak gönderdim..
	cout << "Dairenin cevresi : " << cevre << endl;
	cout << "Dairenin alani : " << alan << endl;

	system("pause");
	return 0;
}