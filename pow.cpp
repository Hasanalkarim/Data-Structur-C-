// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream>
using namespace std;

int pow(int x);

int main()
{


    int x=5;

    int i;


  cout<<pow(x)<<endl;


    return 0;
};


int pow(int x){

    



   if (0==x){

         return 0;

   }
   else{

      

       return pow(x-1)+x;

   }



}
