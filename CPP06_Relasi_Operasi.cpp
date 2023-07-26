/*
Autor: Isa Mangara S
created : 26.07.2023
*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Relational Operators!" << endl;
    int a = 10;
    int b = 5;

    cout <<(a==b)<< endl; //Mengembalikan true bila nilai variabel a sama dengan variabel b.
    cout<<(a!=b)<< endl; //Mengembalikan true bila nilai variabel a tidak sama dengan variabel b.
    cout<<(a<b)<<endl;
    cout<<(a>b)<< endl;
    cout<<(a<=b)<< endl;
    cout<<(a>=b)<< endl;
    cout<<!(a==b)<< endl; //(a!=b)
}
