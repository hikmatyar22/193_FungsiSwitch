#include <iostream>
using namespace std;

int luas;

void prosedurluas(int p, int l)
{
	luas = p * l;
}

int fungsiluas(int p, int l)
{
	return p * l;
}

int main()
{
	int panjang, lebar;
	cout << "Masukkan Panjang : ";
	cin >> panjang;
	cout << "Masukkan Lebar : ";
	cin >> lebar;

	prosedurluas(panjang, lebar);
	cout << "luas Persegi Panjang Dengan Prosedur : " << luas << endl;

	cout << "Luas Persegi Panjang Dengan Fungsi : " << fungsiluas(panjang, lebar) << endl;

}
