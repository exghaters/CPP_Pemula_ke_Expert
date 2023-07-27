/**
 * Author:    Isa M.S
 * Created:   27.07.2023
 **/

#include <iostream>

using namespace std;

int main()
{
    int array [4];// tipe_nama[ukuran element]

    //Initialization
    array[0] = 5;
    array[1] = 10;
    array[2] = 3;
    array[3] = 30;

    //print array element dan alamat setiap element
    cout<<"Array[0] = " << array[0] << " , alamat = " << &array[0] << endl;
    cout<<"Array[1] = " << array[1] << " , alamat = " << &array[1] << endl;
    cout<<"Array[2] = " << array[2] << " , alamat = " << &array[2] << endl;
    cout<<"Array[3] = " << array[3] << " , alamat = " << &array[3] << endl;

    if(&array[0] == array)
        cout<<"TRUE";
}
