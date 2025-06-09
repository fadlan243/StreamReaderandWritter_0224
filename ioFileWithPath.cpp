#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukkan Nama file : ";
    cin >> NamaFile;

    // membuka file dalam mode menulis,
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited Loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam suatu baris
        getline(cin, baris);
        // Loop akan berhenti jika anda memasukkan karakter a
        if (baris == "q")
            break;
      // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }