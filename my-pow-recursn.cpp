#include <iostream> 

using namespace std;



int mypow(int x , int y){

    

  if(y==0){

      return 1;
  }
      

 return x * mypow(x , y-1);

 

}

int main(){



  
   cout<<mypow(7,3)<<endl;

   







    return 0;
}