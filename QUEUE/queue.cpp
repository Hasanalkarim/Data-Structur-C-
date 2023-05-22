#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;

class queue {

 private:  int arr[5], rear,front;

  


  public:
  
         queue () {

          int  arr[5]={0};

          rear=-1;

          front=-1;

        }

        

        bool is_empty(){

            if(front && rear ==-1){

                    return 1;

            }
            else{
            
                return 0;

            }

        }
        bool is_full(){
            
            
            if(rear==4){
                
                
                return 1;
                
                
            }
            else{
                
                
                return 0;  
                
            }
            
            
        }
        
        void enqueue(int val){
            
            if(is_full()==1){
                
                cout<<"queue is full"<<endl;

                 //  this will end  the function
            }
            else if(is_empty()==1){
                
                 rear=0;
                 
                 front=0;          
            }
            else{
                
                ++ rear;

            
            }
            
              arr[rear]=val; 
                
            
        }


        int dequeue(){

            int x=0;

           if(is_empty()==1){
                
                cout<<"queue is empty"<<endl;   
                  return -1;
            }
            else if(front==rear){
                    
                       x=arr[front];  
            
                       arr[front]=0;


                       front=-1;
                        rear=-1;

            }
             else{

                     x=arr[front];  

                      arr[front]=0;

                    ++front;

             }
           return x;

        }


        int count(){

            return (rear-front)+1;

        }
       
        void display(){               
   
                    if(is_empty()==1){

                         cout<<"stack underflow "<<endl;

                         exit( 1 );

                    }
                    else{

                         int i=0;

                         i=front;
                          

                      for ( i = 0; i<=rear; i++){
                      
                             
                         cout<<arr[i]<<" ";

                      }
                       
                        
        

                    }


                    

        }
        
        
     
};








        






int main (){

    
   queue A ,B;

           while(1){

           int *p= new int;

           cin>>*p;

            if(*p==-1){

                break;
            }
            else if(*p%2==0){

                   A.enqueue(*p);

            }
            else{

                  B.enqueue(*p);
            }

           }

          A.display();
          cout<<endl;
          B.display();


             // cout<<endl;
             //cout<<endl;

             // cout<<q1.count()<<endl;

          

    return 0;
}




