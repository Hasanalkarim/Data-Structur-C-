#include <iostream> 

using namespace std;



bool ispalindrome(string x){


    string s ="";

    for (int i = 0; i < x.size(); i++)
    {
        s=x[i]+s;


    }
    
     

 return (s==x);

 

}

int main(){

      string s="noon";

  
   cout<<ispalindrome(s)<<endl;

   







    return 0;
}