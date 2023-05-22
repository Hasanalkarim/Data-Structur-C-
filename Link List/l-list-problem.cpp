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


class singlylinklist {
  public:

  node *head;

      
          singlylinklist(){        


            head=NULL;

          }
        singlylinklist(node *h){   /* constructor creating NODE */


            head=h;

          }

   //..................methods.............................................


   void appendNode(node *n){


           node* ptr= head;

           
           while(ptr!=NULL){

               if(ptr->next==NULL){

                   ptr->next=n;  

                   break;
               }  

               ptr=ptr->next;


              
               
           }
          
   }

   void prependnode(node* n){

          (*n).next=head;

          head=n;

   }


   void insertnode(){


     node new_n;

           

            node* ptr= head;

           
           while(ptr!=NULL){

               if(ptr->next==NULL){

                   ptr->next=&new_n;  

                   //  new_n.data=55;

                    // cout<<new_n.data<<endl;


                   break;
               }  

               ptr=ptr->next;


              
               
           }
         


   }




    void traversel(){

       node *ptr=head;

      
       while(ptr!=NULL){


          cout<<ptr->data<<endl;

          ptr=ptr->next;

       }




    }
















};






int main (){


   node n6(0,10), n1(1,20), n2(2,30), n3(3,40),n4(4,50),n5(5,60);

   singlylinklist s(&n1);  // creating head

   


    
    

          s.appendNode(&n2);
          s.appendNode(&n3);
          s.appendNode(&n4);
          s.appendNode(&n5);

            
          s.prependnode(&n6);


        

         s.insertnode();

                             //problem cant assign data
            

             cout<<"n5= "<<n5.next->data<<endl;

             
               n5.next->data=900;    

               cout<<"n2= "<<n5.next->data<<endl;

  /*
     cout<<"n1-data= "<<n1.data<<endl;
     cout<<"n1-next= "<<n1.next->data<<endl;
     
    */       

      // s.traversel();

    return 0;
}