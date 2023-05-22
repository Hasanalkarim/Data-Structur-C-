#include <iostream>

using namespace std;

class node {

  public: int data; 

          int  key;
           
          node *next;

          node *previous;

     node(){

         key =0;
          
         data=0;

         next=NULL;

         previous=NULL;
     }

     node(int ki, int val){

         key=ki;

         data=val;

         next=NULL; 

         previous=NULL; 

     }

       

};


class doublylinkedlist {
  public:

  node *head;

      
          doublylinkedlist(){        


            head=NULL;

          }
     

   //..................methods.............................................

  node* nodeExist(int k){
       
        node *ptr=head;
        node *temp=NULL;

        while (ptr!=NULL)
        {

          if(ptr->key==k){

             temp=ptr;

             return temp;

          }
         else{

             ptr=ptr->next;

         }
         
        }

        return temp;
        
  };



   void appendNode(node *n){


           node* ptr= head;


           if(head==NULL){

             head=n;

           }
           else if(nodeExist(n->key)!=NULL){

             cout<<"node key "<<n->key<<" already exist"<<endl;
 
           }
           else{
               while(ptr!=NULL){

               if(ptr->next==NULL){

               
                   ptr->next=n;  

                   ptr->next->previous=ptr;
                  
               //  n->previous=ptr;     

                   break;
               }  

               ptr=ptr->next;           
               
            }





         }
         
          
   }

   void prependnode(node* n){




      if(nodeExist(n->key)!=NULL){

        cout<<"node key "<<n->key<<" already exist"<<endl;
 
      }
      else{

           head->previous=n;

           n->next=head;

           head=n;


      }

         

   }


   void insertnode(int k, node *n){

             node* ptr= head;   

             ptr=nodeExist(k);

      if(nodeExist(n->key)!=NULL){

         cout<<"node key "<<n->key<<" already exist"<<endl;
 
      }
      else if(ptr==NULL){


          cout<<"no node key exist as "<<k<<endl;     
          
      }
      else{

            if(ptr->next==NULL){  // insert at last or append

               ptr->next=n;
               n->previous=ptr;

            }
            else{                // in between 

                n->next=ptr->next;
                ptr->next->previous=n;
                n->previous=ptr;
                ptr->next=n;
            }
        

       }
             
   }//end insert method................


    void deleteNode(int k){

              node* ptr= head; 

               
        ptr=nodeExist(k);
            
        if(head==NULL){

            cout<<"no node exist"<<endl;

         } 
         else if(ptr==NULL){ 

             cout<<"node key "<<k<<" not found "<<endl;

         }
         else if(head->key==ptr->key){  //if we have to delete the head;

              head=head->next;

         }
           else if(ptr->next==NULL){  // delete last node

              ptr->previous->next=NULL;

         }
         else{     
            
              ptr->previous->next=ptr->next;

              ptr->next->previous=ptr->previous;

         }
       


    }


    void updateNode(int k ,int val){


          node *ptr=head;

           ptr=nodeExist(k);

        if(ptr==NULL){ 

             cout<<"node key "<<k<<" not found "<<endl;

         }
          else if (head!=NULL){

               ptr->data=val;
          }
         
          

    }









    void traversel(){

       node *ptr=head;


         if(head==NULL){

           cout<<"no node exist"<<endl;
         }
         else{
            while(ptr!=NULL){


          cout<<ptr->key<<"   "<<ptr->data<<endl;

          ptr=ptr->next;

       }


         }
      
     




    }
















};






int main (){

    node n2(3,20),n3(4,30), n4(5,40);

    doublylinkedlist d;


       d.appendNode(&n3);
       d.appendNode(&n4);
    

       d.prependnode(&n2);

     //  d.insertnode(4,&n5);

      // d.deleteNode(4);

   //   d.updateNode(4,100);



       d.traversel();



    return 0;
}