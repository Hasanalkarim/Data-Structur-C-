#include <iostream>
using namespace std;


int main (){

 int N=0 ;

    

 cin>>N; 

             
         


          

   

for (int i = 0; i < ((N-1)/2)+1 ; i++)
{

    

      for (int j=0; j < N; j++)   //   
      {

          if((((N-1)/2)-i)<=j &&  j<(((N-1)/2)+(i+1))){              //80<=m && m<=84
                            // if N=9   then (4-i)<j &&  j<(4+(i+1))      where 4=((9-1)/2) so  (N-1)/2
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
