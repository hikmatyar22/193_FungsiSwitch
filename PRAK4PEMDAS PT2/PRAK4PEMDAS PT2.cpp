#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(int a, int b)
{
	return a / b;
}

void inputdata()
{
	cout << "\nMasukkan Bilangan Pertama : ";
	cin >> bilangan1;
	cout << "Masukkan Bilangan Kedua : ";
	cin >> bilangan2;
}

int main()
{
	int pilihan;
	do
	{
		system("CLS");
		cout << "Menu Kalukulator Sederhana" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Keluar" << endl;
		cout << "Masukkan Piliahan : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			inputdata();
			cout << "\nHasil Penjumlahan : " << penjumlahan(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 2:
			inputdata();
			cout << "\nHasil Pengurangan : " << pengurangan(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 3:
			inputdata();
			cout << "\nHasil Perkalian : " << perkalian(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 4:
			inputdata();
			cout << "\nHasil Pembagian : " << pembagian(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 5:
			break;
		default:
			cout << "Pilihan Tidak Valid" << endl;
			system("pasue");
			break;
		}