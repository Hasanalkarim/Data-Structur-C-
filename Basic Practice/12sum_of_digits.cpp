#include <iostream>
using namespace std;


int main (){

 int N=0, sum=0;

 

 cin>>N; 



 for(int i=1; N!=0; i++){
    
     sum=sum+(N%10);  // getting the last digit and adding it up

     N=N/10;         // removing the last digit from integer

 }

      
 cout<<sum<<endl;



return 0;

}
