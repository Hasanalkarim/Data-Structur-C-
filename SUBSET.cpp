#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;

  struct   node *list;



};

// ...................treversal..................................


void linklist_treversal (struct node * ptr){
 

 while (ptr!=NULL)
 {
    
   cout<<ptr->data<<endl;

   ptr= ptr->list;



 }
 
  
}



//......................................................
int main (){
   // creating nodes

   struct node* head;
   struct node* second;
   struct node* third;
   struct node* fourth;
   struct node* ptr;

   int x=33;



   // memory allocation on heap

   head = new node;
   second  = new node;
   third = new node;
   fourth = new node;
   ptr    = new node;
    
   // adding data and in nodes 

   head->data=7;
   head->list=second;


   second->data=8;
   second->list=third;


   third->data=9;
   third->list=fourth;

   fourth->data=10;
   fourth->list=NULL;



   




   //........................LINK LIST 2 ............



   // creating nodes

   struct node* main;
   struct node* two;
   struct node* three;


   // memory allocation on heap

   main = new node;
   two  = new node;
   three = new node;

    
   // adding data and in nodes 

   main->data=7;
   main->list=two;


   two->data=8;
   two->list=three;


   three->data=9;
   three->list=NULL;


//


     ptr=main;
    
     
 while (ptr!=NULL)
 {
    
    while(head!=NULL){
        

            if (head->list==ptr->list){
                x=1;

                break;         
            }
            else {

                x=0;

                break;
            }

                head= head->list;
    }


       ptr= ptr->list;


       if(x==0){

            break;
       }

     

 }
 


   cout<<x;

    return 0;
}