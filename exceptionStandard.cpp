#include <iostream>
#include <exception>
// untuk obyek exception yang akan di gunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:
    try 
    {
        array<int, 3> data = {10,20,30};
        //pesan array interger 3 elemen
        cout << data.at(4) << endl;
    }
    catch (exception &e)  
    {
        // penangkap menggunakan obyek exceotion
        cout << e.what() << endl;
        /* akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    