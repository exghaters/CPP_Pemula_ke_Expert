#include <iostream>

using namespace std;

int main()
{
    int a=10,b = 5; // 4 bytes data
    cout<<"Nilai dari a: " << a <<" alamat dari a: "<< &a <<endl;
    cout<<"Nilai dari b: " << b <<" alamat dari b: "<< &b <<endl;

    short s = 10; // 2 bytes data
    cout<< "Nilai dari s: "<< s << endl;

    float fl = 5.30; //4 bytes data
    double db =32.45416416; // 8 bytes data
    cout << "nilai dari fl: "<< fl<< endl;
    cout << "nilai dari db: "<< db << endl;

    char ch = 'A';
    cout << ch << endl;

    string s1 = "hallo there! ";
    cout<<s1 << endl;

    string s2 = "belajar cpp!";
    cout << s2 << endl;

    bool b1 = true; // boolean hanya true dan false. FALSE selalu berniali 0(nol), true bernilai 1(satu)
    cout<< b1<< endl;
    b1= 3232;
    cout<<b1 << endl;
    b1 = 321;
    cout<< b1<< endl;
    b1 = 0;
    cout<< b1 << endl;


    //angka positiv atau bilangan tak bertanda. meningkatkan area positive

    const string myname = "Isa nbi: 1462200160";
    cout<< myname<< endl;

    unsigned short int us = 45632;
    cout<< us <<endl;

}
