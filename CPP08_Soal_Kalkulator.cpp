/*
Autor: Isa Mangara S
created : 26.07.2023
*/

#include <iostream>

using namespace std;

int main()
{
    double var1,var2;

    beginning:

    cout<<"Masukkan Angka ke-1: (Enter first number: )"<< endl;
    cin>> var1;

    cout<<"Masukkan Angka ke-2: (Enter second number: )"<<endl;
    cin>> var2;

    cout << "Apa yang kamu mau lakukan dengan Angka ini?(What do you want to do with that numbers?)" << endl;
    cout << "+ - Penjumlahan (add)" << endl;
    cout << "- - pengurangan(substract)" << endl;
    cout << "* - perkalian (multiply)" << endl;
    cout << "/ - pembagian (divide)" << endl;

    char pilih;

    cin>> pilih;

    switch(pilih){
    case '+':
        cout << var1 << " + " << var2 << " = " << (var1+var2)<<endl;
        break;
    case '-':
        cout<< var1 << " - " << var2 << " = " <<(var1 - var2)<< endl;
        break;
    case '*':
        cout<< var1 << " x " << var2 << " = "<<(var1 * var2)<< endl;
        break;
    case '/':
        if(var2) //var2 != 0
            cout<< var1<< " / " << var2 << " = "<<(var1 / var2)<<endl;
        else
            cout<<"Anda tidak dapat membagi dengan 0" << endl;
        break;
    default:
        cout << "Anda salah mengetikkan karakter";
    }

    char pilih2;

    cout<< "Apakah anda mau melanjukan program?(Y/N)"<< endl;
    cin>> pilih2;

    if (pilih2 == 'y' || pilih2 == 'Y')
        goto beginning;


}
