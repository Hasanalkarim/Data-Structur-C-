#include <iostream> 

using namespace std;



bool ispalindrome(string x , int a , int b){

   if (a>=b){

         return true;

   }
  if(x[a]!=x[b]) {

                 
         return false;


  } 
 
      a=a+1;

      b=b-1;
 
     return ispalindrome( x , a , b);

}

int main(){

      string s="madam";

      int len;


      len= s.length();

  
   cout<<ispalindrome(s, 0, len-1)<<endl;

   







    return 0;
}