/**
 * Author:    Isa M.S
 * Created:   27.07.2023
 **/

#include <iostream>

using namespace std;

int main()
{
    /*
         for(inisialisasi;kondisi;tambah/kurang)
             intruksi_untuk_mengulang;
    */

    for(int i= 1; i<=3; i++)
        cout<<"Hello world"<<endl;

    int array[5];

    for(int i= 0 ; i<5 ; i++)
        array[i]=i; //inisialisasi

    for(int i=0; i<5 ;i++)
        cout<< array[i]<<endl;// print array element


    //perulangan takterbatas
    /*
    for(;;)
        cout<<"Stop me if you can !"<<endl;
    */
}
