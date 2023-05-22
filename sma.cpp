#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;





int main (){

 
  int *p;


  p= new int[5];
     
     p[0]=10;
     p[1]=11;
     p[2]=12;
     p[3]=13;
     p[4]=14;



    cout<<" box with out name er value p[0]= "<<p[0]<<endl;
   cout<<" box with out name er address p= "<<p<<endl;
   cout<<" p box er address &p= "<<&p<<endl;





  
    return 0;
}

