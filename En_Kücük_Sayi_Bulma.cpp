// Kullanıcadan sayı girmesi istenir girilen sayılar arasından en kucuk olanı bulunur..
#include <iostream>

using namespace std;

int en_kucuk_sayi(int n) {

	int Enkucuk = 1000000;
	int sayi;
	cout << "Sayilari giriniz : ";
	for (int i = 0; i < n; i++)
	{
		cin >> sayi;
		if (sayi<Enkucuk)
		{
			Enkucuk = sayi;
		}
	}
	return Enkucuk;
}

int main() {


	int n;
	cout << "Kac sayi gireceksiniz : " ;
	cin >> n;
	cout << "Girilen sayilarin en kucugu : " << en_kucuk_sayi(n) << endl;
	system("pause");
	return 0;
}