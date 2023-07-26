/*
Autor: Isa Mangara S
created : 26.07.2023
*/

#include <iostream>

using namespace std;

int main()
{
  // AND = &&
  // bernilai true bila ke 2 ekspresi bernilai true
  cout<<"AND = &&"<<endl;
  cout<< (8>4 && 5!= 10)<< endl;
  cout<< (2>5 && 6!=10)<< endl;

  //OR = ||
  //true ketika kedua ekspresi bernar atau hanya salah satu benar

  cout<<"OR = ||"<<endl;
  cout<<(3>7 || 4!=10)<<endl;
  cout<<(3>7 || 4!=4)<<endl;

  //NOT  = !
  //Kembali true jika hasilnya salah atau sebaliknya
  cout<<"NOT = !"<<endl;
  cout<< !(6>5 && 5!=10)<<endl;

}
