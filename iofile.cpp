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
    