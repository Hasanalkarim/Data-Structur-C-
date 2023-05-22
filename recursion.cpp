#include <iostream> 

using namespace std;



int printnum(int x){



  if(x<=0){

      return 0;
  }
   cout<<x;
     x=x-1;

      cout<<endl;
   printnum(x);

 

}

int main(){



  
 printnum(5);

   







    return 0;
}