#include <iostream>
using namespace std;
#include "/home/siam/C++/includes/node.cpp"
#include "/home/siam/C++/includes/stack_list.cpp"



class singlylinklist {
  public:

  node *head;

  node *tail;

      
          singlylinklist(){        


            head=NULL;

            tail=NULL;

          }
        singlylinklist(node *h){   /* constructor creating NODE */


            head=h;

            tail=h;

          }

   //..................methods.............................................

  node* nodeExist(int k=-1){

        node *ptr=head;
        node *temp=NULL;

         if(k==-1){

          temp=head;

          head=head->next;

          return temp;


         }
         else{

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
              

         }
       
        
  };



   void appendNode(node *n){
             
           node* ptr= head;
              

           if(head==NULL){

               head=n;

               cout<<" w"<<endl;

           }
           else if(nodeExist(n->key)!=NULL){

              
               cout<<n->key<<" ";
             cout<<"node key already exist  append operation failed"<<endl;
 
           }
           else{
               while(ptr!=NULL){

               if(ptr->next==NULL){

                   ptr->next=n;  

                   break;
               }  

               ptr=ptr->next;           
               
            }





         }
         

   }


   void append(node *n){


        

         if(head==NULL){

             head=n;

             tail=n;

         }
        else if(nodeExist(n->key)!=NULL){

              cout<<"node key already exist  append pro operation failed"<<endl;

          }
          else {


             tail->next=n;

             tail=n;


          }



   }

   void prependnode(node* n){




      if(nodeExist(n->key)!=NULL){

             cout<<"node key already exist"<<endl;
 
      }
      else{

         (*n).next=head;

          head=n;

      }

         

   }


   void insertnode(int k,node *n,node *h=NULL){// (key,new node insert, in h list or head list)

    node* ptr=NULL;                            //h list any random list

                    if(h==NULL){

                        ptr=head;   

                    }
                    else{

                     ptr= h;   

                    }


            

      if(nodeExist(n->key)!=NULL){

            cout<<"node key already exist"<<endl;
 
      }
      else{

           while(ptr!=NULL){

                if(ptr->key==k){

                          
                        if(ptr->next==NULL){   //inserting at the last

                               ptr->next=n;             
                        }
                        else{            // inserting in between
                          
                            n->next=ptr->next;
                            ptr->next=n;    
                        }
                         break;

                }
                else{

                      ptr=ptr->next;
                }


            }



       }
             
   }//end insert method................


    void deleteNode(int k){

              node* ptr= head; 

              node* temp=NULL;   
      
            
         if(head==NULL){

             cout<<"no node exist"<<endl;

         } 
         else if(head->key==k){  //if we have to delete the head;

             head=head->next;

         }
         else{                  // delete in between

              while(ptr!=NULL){

              if(ptr->key==k){

                  temp->next=ptr->next;
                  break;
              }

              temp=ptr;
              ptr=ptr->next;
            }

         }
       
              




    }


    void updateNode(int k ,int val){


          node *ptr=head;

          if(head==NULL){

           cout<<"no node exist"<<endl;
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




   int inputNode(){

       int k=0, count=0;

      while(k!=-1){

        cout<<"key=";

        cin>>k;

        if(k!=-1){

            node *n1=new node();
             
            n1->key=k;

            cout<<"Data=";

            cin>>n1->data;

            append(n1);

            count=count+1;


        }

      }

         return count;

   }

   void stack_push(node *ptr){

           if(head==NULL){

            head=ptr;

           }
           else{

               ptr->next=head;

               head=ptr;


           }





   }







   node* getmid(node *ptr=NULL, node *t=NULL){

         node *fast=NULL, *slow=NULL;

          if(ptr==NULL){

             fast=head;

             slow=head;
          }
          else{

              fast=ptr;

              slow=ptr;

          }

          

       

                if(t==NULL){

                      if(fast->next==NULL){

                          return slow;

                      }






                    while(1){


                       

                      

                      fast=fast->next->next;

                      if(fast==t || fast->next==t ){

                        return slow;
                      }


                       slow=slow->next;

                    }
              
                }
                else{
                      while(1){
                    
                          

                            
                       

                        fast=fast->next->next;

                        if(fast==t ||    fast==t->next ){

                          return slow;
                        }

                            slow=slow->next;

                      }

                }
             

        






   }



   void swith( node *pre) {

      node *ptr=NULL, *ptr2=NULL, *ptr3=NULL;

    


      
       if(pre==NULL){

        ptr=head;
        ptr2=ptr->next;
        ptr3=ptr->next->next;




        ptr2->next=ptr;

        ptr->next=ptr3;

        head=ptr2;

       }
       else{

        ptr=pre->next;
        ptr2=ptr->next;
        ptr3=ptr->next->next;

        pre->next=ptr2;

        ptr2->next=ptr;

        ptr->next=ptr3;




       }


   }





  void selection_sort(){

       node *ptr=head, *ptr2=NULL;


       while(ptr->next!=NULL){

             ptr2=ptr->next; 

             while(ptr2!=NULL){

                   if(ptr2->data < ptr->data){

              
                       ptr->data=ptr->data+ptr2->data; //*************
                                                                    //
                       ptr2->data= ptr->data-ptr2->data;            // Swaping
                                                                    //
                       ptr->data=ptr->data-ptr2->data; //*************    



                        ptr->key=ptr->key+ptr2->key; //*************
                                                                    //
                       ptr2->key= ptr->key-ptr2->key;            // Swaping
                                                                    //
                       ptr->key=ptr->key-ptr2->key; //*************                  

                   }

                   ptr2=ptr2->next;

             }

             ptr=ptr->next;

       } 








  }

 
  void insertionSort(node *h){ //insert in soreted link list


        node *ptr=head;

         
           
        if(head==NULL){

          head=h;

        }
        else if(h->data < head->data){

           prependnode(h);

        }
        else if(h->data==head->data){

          cout<<"data already exist"<<endl;

        }
         else{

              while(ptr!=NULL){

                   if(ptr->next==NULL){

                      appendNode(h);

                      break;

                   }
                   else if(h->data < ptr->next->data){

                      insertnode(ptr->key,h);

                        break;
                   }
                    else if(h->data == ptr->next->data){

                       cout<<"data already exist"<<endl;

                    
                   }

                   ptr=ptr->next;


              }



         }


  }


    void insert_sort_all(){

            node *ptr=head ,*h=NULL;
    
      while(ptr!=NULL){

            if(ptr->data < ptr->next->data){
               
               if(ptr->next->next==NULL){

                break;
               }

               ptr=ptr->next;


            }
            else{

                  h=ptr->next;

                  deleteNode(ptr->next->key);

                  insertionSort(h);

                  if(ptr->next==NULL){

                     break;
                   }


            }

      };
         






    }


    void bubbleSort(){


        float x=0.5;

        int count=0;

        int optimized_sort=1;

        node *temp=NULL;

        node* ptr=head;

        while(0<x){
          
               optimized_sort=1;
                  while(0<=count){
                          cout<<"times";
                      
                          if(ptr->data > ptr->next->data){

                            optimized_sort=0;

                            ptr=ptr->next;

                            swith(temp);

                          }

                        

                          if(x==0.5){
                                  count=count+1;
                                  
                                   if(ptr->next->next==NULL){

                                    break;
                                   }
                          }
                           else{
                              count=count-1;
                           }
                         


                          temp=ptr;

                          ptr=ptr->next;

                }  

                  if(optimized_sort==1){ //this will reduce many loops

                    break;
                  }

                  cout<<endl;

                  temp=NULL;

                  ptr=head;

                  if(x==0.5){

                     x=count;
                  }

                  x=x-1;
                  count=x-1;

        }


    }



    node* marge(node *hed, node *hed2){

       node *temp=NULL;
       node *h1=NULL;

       if(hed2==NULL){
          
            return hed;

       }
       if(hed2->data < hed->data){

          temp=hed;  hed=hed2; hed2=temp;

       }
    
       h1=hed;
         
       while (hed2!=NULL)
       {
            if(h1->next==NULL){

              h1->next=hed2;

              break;

            }
            else if (hed2->data < h1->next->data){

                temp=hed2;

                hed2=hed2->next;

                insertnode(h1->key,temp,h1);
        
            }
            h1=h1->next;
       }
  
       return hed;

    }

        


    node * margeSort(node *hed){

     if(hed!=NULL && hed->next!=NULL){

       node *m=getmid(hed);  // making 2 half

       node *hed2=m->next;   // making second list

       m->next=NULL;          // breaking the 2 list
        
       hed=margeSort(hed);    // sending one half

       hed2=margeSort(hed2);   // sending other half

       node *result=marge(hed,hed2); // will marge both of them

       return result;

     }
     else{

      return hed;

     }    






   }
              
                 
   node * partition(node* h,node* t=NULL){

     node* hed=NULL;  node * pivot=NULL;  node* temp=NULL; node* pre=NULL;

           hed=h;  pivot=h;    pre=h;
            
          
             if(h==NULL || h->next==NULL || h->next==t ){
                return hed;

             }

        while(h->next!=t){
             if(h->next->data < pivot->data){

              temp=h->next->next;


              pre=h->next;

              h->next=temp;            //deleteNode

              pre->next=hed;

              hed=pre;

            

             }
             else{

               h=h->next;

             }
        }
     

        if(pivot==head){
              head=hed;


        }



               return hed;
        
   }


    node* quickSort(node *h, node* t=NULL){

      
      if(h!=t){

               if(h->next==t || h->next==NULL){

                     return h;
               }


            node*z=NULL;

            node*A=NULL;

            node*b=NULL;

            node*res=NULL;

            node*num=NULL;

            b=h->next->next;


             if(t!=NULL){

               z=t->next;
             }

            


               A=partition(h,t);


          

           // 
            if(b==t){

                
              // cout<<"A="<<A->data<<endl;
               
                return A;


             }

           
            else{

              

                res=quickSort(A,h);

                num=h->next;

                z=quickSort(h->next,z);
                
                /* if(z==NULL){

                      cout<<"z is NULL"<<endl;

                          cout<<"h="<<h->data<<endl;
                          
                          cout<<"A="<<A->data<<endl;;

                 }   */
            
                          
                if(num!=z){ 

                    //cout<<endl<<"z="<<z->data<<endl;

                    h->next=z;
                }
                

                          return res;

                


                   
            }   

      }


   }



    
      


    




   node* shellSort(int size, node *hed=NULL){  // give the size of link list AND  any node of link list
 
        if(hed==NULL){

          hed=head;

          head=NULL;
        }

        int gap=size/2, i=0,j=1,num=0;

       
        node *pr=hed;  node *p=hed;  node *c=hed;    node *pre=NULL;   

        while(1){

           

            if(gap<j){
              
           
                gap=gap/2;

             

                if(gap==0){

                  break;
                }
                   
                j=1;  i=0; pr=hed; p=hed; c=hed;   

            }
                
            stack b1, b2;    

        
                           
            pr=c; p=c; b1.push(c); num=size; size=size-j;
                         
                   
            if(size<gap){

              break;
            }



               
            while(1){

              if(gap==i){

                        
                if(p->data > b1.peek()->data){

                    if(gap!=1){

                      b1.push(pr);
                    }

                    b1.push(p);
                 }
                      
                  while(p->data < b1.peek()->data){

                      if(b1.peek()==hed){

                            hed=p;
                      }


                      if(b1.peek()==c){

                        c=p;
                      }


                      b2.push(b1.pop());


                      pr->next=p->next;               //
                                                      //
                      if(b1.is_empty()!=1){           // swap
                                                      //
                      b1.peek()->next=p;              //  swap
                                                      //
                      }                               //
                                                      //
                      if(gap==1){                     //  swap
                                                      //
                          p->next=b2.peek();          //  swap
                      }                               //
                      else{                           //
                                                      //  swap
                          p->next=b2.peek()->next;    //
                          b2.peek()->next=pr->next;   //  swap
                          pr->next=b2.peek();         //


                          b2.push(pr);

                      }


                      if((b1.is_empty()==1) || (p->data > b1.peek()->data)){

                          b1.push(p);

                          while(b2.is_empty()!=1){

                              b1.push(b2.pop());


                          }

                          p=b1.pop();

                          pr=b1.peek();

                          b1.push(p);

                        }
                        else{

                            if (gap!=1)
                            {
                              pr=b1.pop();
                            }
                            else{
                              pr=b1.peek();

                            }
                        }

                  }
             
                  size=size-i;

                  i=0;

                  if(size<gap){

                    break;
                  }

              }

             if(p!=pr){

               pr=pr->next;
             }

             i++;

             p=p->next;


            }

            if(c!=hed && p!=hed && pr!=hed){

              pre->next=c;

            }
            pre=c;

           
            c=c->next;
            j++;

            size=num;

        }


        if(head==NULL){

          head=hed;
        }

        return hed;


   };










    void traversel(node *h=NULL){

     node *ptr=NULL;

            if(h==NULL){

              ptr=head;

            }
            else{

              ptr=h;

            }
            
          
             
         if(ptr==NULL){

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

   
     singlylinklist s ; 

     int x=0;
   
     



     x=s.inputNode();

     s.shellSort(x);  
     
    
          

    
     s.traversel();


      



  /*   
  */
    return 0;
}


