#include <iostream>
using namespace std;



int main(){

    int a;

      cin>>a;

     int arr[a];

       
      
            for(int i=0; i<a; i++){


                   cin>>arr[i];
            };

                --a;
              for(int i=a; 0<=i; i--){


                   cout<<arr[i]<<" ";
            }

      


    return 0;

}