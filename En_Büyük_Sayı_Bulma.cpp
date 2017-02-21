//Kullanıcının girdigi n tane dogal sayıdan en buyuk olanı bulur ..
#include <iostream> 

using namespace std;

int en_buyuk_sayi(int n)	
{
	int Enbuyuk = 0;
	int sayi;
	for (int i = 0; i < n; i++)
	{
		cin >> sayi;
		if (sayi>Enbuyuk)
		{
			Enbuyuk = sayi;
		}
	}
	return Enbuyuk;
}

int main()
{

	int n;
	cout << "Kac sayi gireceksiniz : " << endl;
	cin >> n;
	
	
	cout << "Girilen sayilar arasinda en buyugu : " << en_buyuk_sayi(n) << endl;
		system("pause");
		return 0;

	
}
