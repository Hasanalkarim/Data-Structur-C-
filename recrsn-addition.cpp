#include <iostream> 

using namespace std;



int sumnum(int x){

    

  if(x<=0){

      return 0;
  }
      

 return x+sumnum(x-1);

 

}

int main(){



  
   cout<<sumnum(1);

   







    return 0;
}