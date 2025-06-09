#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    
    // membuat obyek output stream dalam mode menulis,
    ofstream outfile;
    // membuka file
    outfile.open("contohfile.txt");
    
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited Loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris 
        getline(cin, baris);
        // Loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q")
            break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();