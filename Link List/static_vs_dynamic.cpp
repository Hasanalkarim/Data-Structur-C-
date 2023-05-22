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

   int x=1;

     
     
  //******************************************Static****************************************************************
/*
         for (size_t i = 0; i < 5; i++)
         {
                    node n1;


          cout<<i<<"times before n1 data= "<<n1.data<<endl;

            cin>>n1.data;

           cout<<i<<"times after n1 data= "<<n1.data<<endl;
         }
         
  */


//******************************************Dynamic****************************************************************

     node *n1= new node();

    for (size_t i = 0; i < 5; i++)
         {
                 

                   cout<<n1<<endl;


       
         }
         














    return 0;
}
