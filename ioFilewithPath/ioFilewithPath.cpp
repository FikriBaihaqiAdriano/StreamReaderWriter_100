#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama File : ";
	cin >> NamaFile;

	//membuks file dalam menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + " .txt", ios::out);

}