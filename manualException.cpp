#include <iostream>
using namespace std;

int main()
{
    try 
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo"); // Melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }