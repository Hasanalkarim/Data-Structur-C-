#include <iostream>

using namespace std;

class node {

  public: int data; 

          int  key;
           
          node *next;

     node(){

          key =0;
          
          data=0;

         next=NULL;
     }

     node(int ki, int val){

         key=ki;

        data=val;
          next=NULL;  

     }

       

};




int main (){



    int x=3, y=6, z=8,g=7,t=9,i=5;




             for (int j = 0; j < 5; j++)
             {




                   
           while(i==5){
                    if(x==3){
                         if (y==6)
                         {
                              if(z==8){
                                        if(g==7){
                                                  if (t==9)
                                                  {
                                                       cout<<"times"<<endl;
                                                       break;
                                                  }
                                        }
                              }
                         }
                    }
           }















               cout<<"inner loop"<<endl;

               break;
             }
             












    return 0;
}
