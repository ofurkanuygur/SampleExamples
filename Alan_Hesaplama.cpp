//Karenin , dairenin , dikdörtgen alanı hesaplama..

#include <iostream>

using namespace std;

float daire_alan(int r);
int kare_alan(int kenar);
int dikdörtgen_alan(int en, int boy);
void alan_yazdir(float alan);

int main() {

	char secim;
	cout << "Hangi seklin alanini hesaplamak istiyorsunuz ?" << endl;
	cout << "(Daire : d, Dikdortgen : i, Kare : k ) :"<<endl;
	cin >> secim;

		float alan;
		switch (secim)
		{
		case'd':
			int yarıcap;
			cout << "Yaricap giriniz : ";
			cin >> yarıcap;
			alan = daire_alan(yarıcap);
			alan_yazdir(alan);
			break;
		case'i':
			int en, boy;
			cout << "En ve boy giriniz : ";
			cin >> en >> boy;
			alan = dikdörtgen_alan(en, boy);
			alan_yazdir(alan);
			break;
		case'k':
			int kenar;
			cout << "Kenar uzunlugu giriniz : ";
			cin >> kenar;
			alan = kare_alan(kenar);
			alan_yazdir(alan);
			break;
		default:
			cout << "Desteklenemeyen sekil." << endl;
			break;
		}

	system("pause");
	return 0;
}

float daire_alan(int r) {

	return 3.14*r*r;
}
int kare_alan(int kenar) {

	return dikdörtgen_alan(kenar, kenar);

}
int dikdörtgen_alan(int en, int boy) {

	return en*boy;
}

void alan_yazdir(float alan) {

	cout << "Seklin alani : " << alan << endl;
}