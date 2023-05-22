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


class circulerlinklist {
  public:

  node *head;

      
          circulerlinklist(){        


            head=NULL;

          }
        circulerlinklist(node *h){   /* constructor creating NODE */


            head=h;

          }

   //..................methods.............................................

  node* nodeExist(int k){
       
        node *ptr=head;
        node *temp=NULL;

        if(head==NULL){

           return temp;
        }


         do{                     // to check every node i use do while
         
              if(ptr->key==k){

                  temp=ptr;

                  return temp;

              }
              else{

                  ptr=ptr->next;

              }
 
        }while (ptr!=head);

       

        return temp;
        
  };



   node*  circuler_get_last_node(){  //Disclaimer: you cant change head use it before changing the head

         node* n=head;

         if(head==NULL){

            cout<<"no node exist circuler_get_last_node operation failed"<<endl;

            return n;

         };

 
         while (n->next!=head){  // to get the last node I use this while loop
                                
               n=n->next;
         }
         // end of the while loop I will get the last node
         return n;
    
   };


   void appendNode(node *n){


           node* ptr= head;        

          if(head==NULL){

                head=n;

                head->next=head;

           }
          else {      
                      
                  
                 if(nodeExist(n->key)!=NULL){

                    cout<<"node key "<<n->key<<" already exist append operation failed"<<endl;

                 }                                                  
                 else{
                        ptr=circuler_get_last_node();
                    
                        ptr->next=n;

                        n->next=head;            
                }
               do
                {
                  
                cout<<ptr->key<<"   "<<ptr->data<<endl;

                ptr=ptr->next;
                
                
                }while (ptr!=head); 
 
          }  
          
   }

   void prependnode(node* n){

        node *ptr=NULL;


      if(nodeExist(n->key)!=NULL){

         cout<<"node key "<<n->key<<" already exist prepend operation failed"<<endl;
 
      }
      else{
           ptr=circuler_get_last_node();
          
           ptr->next=n;

           n->next=head;

           head=n;
            

      }

         

   }


   void insertnode(int k, node *n){

             node *ptr= head; 

        ptr=nodeExist(k);

      if(nodeExist(n->key)!=NULL){

        cout<<"node key "<<n->key<<" already exist insert operation failed"<<endl;
 
      }
      else if(ptr==NULL){

             
          cout<<"no node exist"<<endl;

       }
      else{

              if(ptr->next==head){   // inserting at the end

                  n->next=head;
                  ptr->next=n;
              }
              else{                // inserting in between

                  n->next=ptr->next;
                  ptr->next=n;
  
              }


           


       }
             
   }//end insert method................

        
    void deleteNode(int k){

         node* ptr=NULL;   
            
         if(head==NULL){

          //if list is empty it will visit here and will not enter any else if or else 

         } 
         else if((ptr=nodeExist(k))==NULL){     // got the node which we want delet in ptr

              cout<<"no node key "<<k<<" exist. delete operation failed"<<endl;

         }
         else if(head==ptr){  //head->key==ptr->key   // if we have to delete the head;     

                circuler_get_last_node()->next=ptr->next;

                head=ptr->next;     

         }
         else{
                  node* previous_ptr=NULL;     
                  node* n=head; 

                  while(n->next!=ptr->next)  // 
                  {
                    previous_ptr=n;
                    n=n->next;
                  }

                  if(ptr->next==head){ // if we have to delete the last node;

                    previous_ptr->next=head;
                  }
                  else{               // if we have to delete in between;

                    previous_ptr->next=ptr->next;

                  }

         }
              




    }


    void updateNode(int k ,int val){


          node *ptr=head;

          if(head==NULL){

      
          }
          else{

               while (ptr!=NULL) {
         
                       if(ptr->key==k){

                          ptr->data=val;

                          break;

                       }

                       ptr=ptr->next;
              }


          }
         
          

    }






   


    void traversel(){

       node *ptr=head;


         if(head==NULL){

           cout<<"no node exist traversel failed "<<endl;
         }
         else{
          

                do
                {
                  
                cout<<ptr->key<<"   "<<ptr->data<<endl;

                ptr=ptr->next;
                
                
                }while (ptr!=head); 

          }
      
    

    } //trevarsel end;



};






int main (){


   node n0(0,10),   n1(1,20),   n2(2,30),   n3(3,40),  n4(4,50),  n5(5,60),  n6(6,700),n7(7,3400);

   circulerlinklist s; 

   

          
    
    

        s.appendNode(&n1);
        s.appendNode(&n2);
        s.appendNode(&n3);
        s.appendNode(&n4);
        s.appendNode(&n5);
        s.appendNode(&n6);
       // s.appendNode(&n7);


       s.updateNode(2,2000);


    //   s.prependnode(); //perfectly working 



   //    s.deleteNode(); //perfectly working 

  /*
        s.insertnode(4,&n5);

          s.insertnode(3,&n9);


         s.insertnode(2,&n00);

       

           s.insertnode(5,&n88);

           */
           
      s.traversel();


    return 0;
}