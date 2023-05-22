#include <iostream>

using namespace std;

class node {

  public: int data; 

          int  key;
           
          node *next;

          node *previous;

     node(){  // you can add new node dynamicaly and all the variable will genarate automatically like this "node *ptr= new node()"
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



    
  void printList() {
    if (head == NULL) {
      cout << "No Nodes in Doubly Linked List";
    } else {
      cout << endl << "Doubly Linked List Values : ";
      node * temp = head;

      while (temp != NULL) {
        cout << "(" << temp -> key << "," << temp -> data << ") <--> ";
        temp = temp -> next;
      }
    }


  };







};






int main (){

doublylinkedlist obj;
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
      obj.printList();

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