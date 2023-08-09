/**
 * Author:    Isa MS
 * Created:   09.08.2023
 **/
#include <iostream>

using namespace std;

//Variabel yang dibuat di luar kurung kurawal disebut Variabel Global.
int globalVariable;

int main()
{
    int localVariable;
    //int result;

    cout<<"Nilai dari global variable adalah: "<< globalVariable << endl; //Nilai defaultnya adalah 0
    cout<<"Nilai dari local variable adalah: "<< localVariable<< endl;  //Nilai default adalah nilai sampah


    /*
    int a=10; //Local Variable

    if(a==10)
        int result = a*10;

    cout<<result; // Error as result is local to the if block
    */

}
