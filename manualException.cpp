#include <iostream>
using namespace std;

int main()
{
    try 
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo"); // Melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
        // blok ini akan dieksekusi
        cout << "default Pengecualian dieksekusi" << endl;
    }
    