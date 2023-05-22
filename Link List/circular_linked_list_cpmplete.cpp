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
               cout<<endl<<"OUTPUT"<<endl;

                do
                {
                  
                cout<<ptr->key<<"   "<<ptr->data<<endl;

                ptr=ptr->next;
                
                
                }while (ptr!=head); 

          }
      
           cout<<endl;

    } //trevarsel end;



};


//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<MAIN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
int main (){

circulerlinklist obj;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    node * n1 = new node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.prependnode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      obj.insertnode(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      obj.deleteNode(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      obj.updateNode(key1, data1);

      break;
    case 6:
      obj.traversel();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);





    return 0;
}