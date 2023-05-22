#include <iostream>
#include <vector>

using namespace std;


class node {

 public:   int data; 
 
           node* left; 
           
           node* right ;


 

     node(){
 
       data=0;
       
       left=NULL;

       right=NULL;      

     }

      node(int d){
 
       data=d;
       
       left=NULL;

       right=NULL;      

     }



};


class BST {

  public:

      node *root=NULL;


    int is_empty(){
      
       if(root==NULL){

           return 1;

       }
       else{

          return 0;
       }   

    }


    void insert_node(node *n){

         if(is_empty()==1){
             
             root=n;
            
         }
         else{

            node *ptr=root;

            while(ptr!=NULL){

                

                if(ptr->data==n->data){

                    cout<<"node already exist --insert node"<<endl;

                    break;

                }

                else if(ptr->data > n->data){

                       if(ptr->left==NULL){

                          ptr->left=n;

                          break;

                       }


                      ptr=ptr->left;

                }
                else {


                         if(ptr->right==NULL){

                          ptr->right=n;

                          break;

                         }


                         ptr=ptr->right;
                    
                }


            }
            
           
            

         }
    




    }




    node* find_node(int val){

         if(is_empty()==1){
             
            cout<<"TREE is empty --find_node"<<endl;

            return NULL;
            
         }
         else{

            node *ptr=root;

            while(ptr!=NULL){

                

                if(ptr->data==val){

                   return ptr;

                }

                else if(ptr->data > val){

                      ptr=ptr->left;

                }
                else {


                     ptr=ptr->right;
                    
                }


            }
            
 
             cout<<"node  not exist --find_node"<<endl;

             return NULL;

         }
    




    }

   

   node* return_single_null(node*ptr){  // return single child or null

           if(ptr->left==NULL){ 

              return ptr->right;

            }   
            else{

             return ptr->left; 

            }
   }


   node* delete_min(node* ptr){

            ptr=ptr->right;
                                      
            while(ptr->left!=NULL){

               ptr=ptr->left;
            }

            delete_node(ptr->data);

            return ptr;  //returning the min value    
   }








    void delete_node(int val){

         if(is_empty()==1){
             
            cout<<"TREE is empty --delete_node"<<endl;

            
            
         }
         else{

            node *ptr=root;

            node *pre=root;

            node* bottom_node=NULL;

            while(ptr!=NULL){

                 

                if(ptr->data==val){

                   // pre // ptr 
                    
                     if(ptr->left==NULL || ptr->right==NULL){    // for 1 child or leaf

                        bottom_node=return_single_null(ptr);   // return single child or null

                     }
                     else{ // for 2 child
                          

                        bottom_node=delete_min(ptr);
                             
                        bottom_node->left=ptr->left;

                        bottom_node->right=ptr->right;

                     }



                      if(ptr==root){
                           
                           root=bottom_node;

                        }
                        else if(pre->left==ptr){

                           pre->left=bottom_node;

                        }
                        else{

                           pre->right=bottom_node; 
                        }

                        pre=NULL;
                        break;
                }

                else if(ptr->data>val){


                     pre=ptr;
                     

                      ptr=ptr->left;



                }
                else {
                    pre=ptr;

                     ptr=ptr->right;
                    
                }


            }
             if(pre!=NULL){

                 cout<<"node not exist --delete_node"<<endl;

             }
 
            

             

         }
    




    }










     //pre-order: node e gelei print

    void pre_order(node *nd){

     if(nd!=NULL){

        cout<<nd->data<<" ";


        pre_order(nd->left);

        pre_order(nd->right);
     }

    }


    





     //in-order: left theke asar somoi print  // sorted
     void in_order(node *nd){

     if(nd!=NULL){


        in_order(nd->left);

         cout<<nd->data<<" ";

        in_order(nd->right);
     }

    }



    
     //post-order: right theke asar somoi print
      void post_order(node *nd){

     if(nd!=NULL){


        post_order(nd->left);

        post_order(nd->right);

        cout<<nd->data<<" ";
     }

    }

    void bfs(){
           
            node *n=root;

            vector<node*> vec;
            

            vec.push_back(n);

            cout<<n->data<<" ";

            while(!vec.empty()){

                      n=vec.front();

                      if(n->left!=NULL){

                         cout<<n->left->data<<" ";

                         vec.push_back(n->left);
                      }
                       if(n->right!=NULL){

                         cout<<n->right->data<<" ";

                         vec.push_back(n->right);
                      }

                      vec.erase(vec.begin());
            }



    }



};




int main(){
 

   BST s;
  
 node *n1= new node(30);
 
 node * n2= new node(18);
 
 node * n3= new node(45);
 
 node * n4= new node(10);

 node * n5= new node(25);
 
 node * n6= new node(65);

 node *ff=new node();

  

       s.insert_node(n1);


       s.insert_node(n2);


       s.insert_node(n3);

       s.insert_node(n4);

       s.insert_node(n5);

       s.insert_node(n6);

       //  s.in_order(s.root);

    //   cout<<"after delete "<<endl;

    //  s.delete_node(100);


     //  s.post_order(s.root);
 
          
      // s.in_order(s.root);

         s. bfs();

  return 0;
}