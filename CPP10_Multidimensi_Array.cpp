/**
 * Author:    Isa M.S
 * Created:   27.07.2023
 **/

#include <iostream>

using namespace std;

int main()
{
    int biArray[3][4]={0}; //inisialiasi semua element ke 0(nol)

    //inisialiasi setiap element array ke nilai masing masing

    biArray[0][0]=5;
    biArray[0][1]=6;
    biArray[0][2]=7;
    biArray[0][3]=8;

    biArray[1][0]=11;
    biArray[1][1]=13;
    biArray[1][2]=14;
    biArray[1][3]=15;

    biArray[2][0]=20;
    biArray[2][1]=21;
    biArray[2][2]=24;
    biArray[2][3]=26;

    //print semua element array
    cout<< biArray[0][0]<< " , " << biArray[0][1] << " , " << biArray[0][2] << " , " << biArray[0][3]<< endl;
    cout<< biArray[1][0]<< " , " << biArray[1][1] << " , " << biArray[1][2] << " , " << biArray[1][3]<< endl;
    cout<< biArray[2][0]<< " , " << biArray[2][1] << " , " << biArray[2][2] << " , " << biArray[2][3]<< endl;
}
