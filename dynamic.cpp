#include <iostream>;

using namespace std;

 // variable = box  : int taf= 0

//   =  equal


int main (){
      
      int n;

      

      cout<<"how many integers ";
      
      
      cin>>n;


      int *p= new int[n];


      for(int i=0; i<n; i++){

           cin>> p[i];

      }



                 cout<<"so the numbers are  "<<endl;


    
      for(int i=0; i<n; i++){

           cout<<p[i]<<endl;

      }
         


    return 0;
}