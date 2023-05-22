// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;


void count_sort(int [], int, int);

int main() {
  

     int num;

     cout<<"enter size"<<endl;

     cin>>num;

     int input[num];

     cout<<"enter input "<<endl;

     for(int i=0;  i<num;  i++){


         cin>>input[i];

     }




     count_sort(input, num, 10);


     cout<<"output "<<endl;

     for(int i=0;  i<num;  i++){


         cout<<input[i]<<endl;

     }


    return 0;
}



void count_sort(int input[ ], int num, int rng){


   int output[num]={0};

   int count[rng]={0};

   int i=0;


   //counting

   for ( i = 0; i < num; i++)
   {
    
     ++count[input[i]];


   };


   //cumilative add

    for (i = 1; i < rng; i++)
   {
    
     count[i]=count[i-1]+count[i];


   };

   // final out put


    for ( i = 0; i < num; i++)
   {
    
       output[--count[input[i]]]=input[i];

   };


     for ( i = 0; i < num; i++)
   {
    
      input[i]= output[i];

   };


   




};