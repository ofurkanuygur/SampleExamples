// kullanıcıdan sayı almamız ve asal olup olmadığını kontrol edincez.
// kullanıcı kodu bir defa çalıştırdığında birden fazla sayının asal olup olmadığını kontrol edebilmeli.
#include<iostream>


using namespace std;


int main() {

	int sayi = 0, sayac = 1;
	char secim = 'e';
	while (secim=='e')
	{
		cout << "Asal olup olmadıgini kontrol edilecek sayiyi giriniz :" << endl;
		cin >> sayi;
		if (sayi>2)
		{
			while (sayac < sayi - 1) 
			{
				sayac++;//sırayla kontrol ediceğimiz için her defasında sayac ı arttırmamız lazım .
				if (sayi%sayac==0)//sayı sayac a tam bölünyor mu?
				{
					cout << "Sayi asal değildir !" << endl;
					break;
				}
				else if (sayac + 1 == sayi)
				{
					cout << "Sayi asaldir" << endl;
				}
			}
		}
		else if (sayi==2)
		{
			cout << "Girilen sayi en küçük asal sayidir." << endl;
		}
		else
		{
			cout << "Asallik pozitif sayilarda aranir!" << endl;
		}
		cout << "e-devam   ,   h-cikis " << endl;
		cin >> secim;
		sayac = 1;
	}

	system("pause");
	return 0;
}