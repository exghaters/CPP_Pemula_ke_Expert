/*
Autor: Isa Mangara S
created : 26.07.2023
*/

#include <iostream>

using namespace std;

int main()
{
    int A = 10;

    cout<< A<< endl;
    //print alamat variable A
    cout<< &A<< endl;

    /*
        1. Variables tidak bisa mempunyai nama yang sama.
        2. Variable name tidak bisa memulai dari angka.
        3. Variable name tidak boleh berisi spasi.
        4. Variable name harus mendiskripsikan dirinya.
        5. Variable name Tidak boleh memiliki karakter atau kata kunci khusus.
    */

    //Inisialisasi ulang A
    A=10;
    cout<< A<<endl;
    cout<<&A<<endl;
}
