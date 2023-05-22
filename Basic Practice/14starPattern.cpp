#include <iostream>
using namespace std;


int main (){

 int N=0 ;

    

 cin>>N; 

             
         


          

   

for (int i = 0; i <N; i++)
{

    

      for (int j=0; j < N; j++)   
      {

          if(i<1 || i==(N-1) ){             
                           
               cout<<"*";
             
          }
          else if(j==0 || j==(N-1) ){
             
             cout<<"*";

          }
          else{

             cout<<" ";

          }
         
      }

      
       

           cout<<endl;

}



return 0;

}
