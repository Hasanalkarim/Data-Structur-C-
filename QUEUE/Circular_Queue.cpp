#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;

class circular_Queues {

 private:  int arr[5], rear,front,count;

  


  public:
  
         circular_Queues () {

          int  arr[5]={0};

          rear=-1;

          front=-1;

          count=0;

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
            
            
            if(front==((rear+1)%5)){
                
                
                return 1;
                
                
            }
            else{
                
                
                return 0;  
                
            }
            
            
        }
        
        void enqueue(int val){
            
            if(is_full()==1){
                
                cout<<"queue is full"<<endl;

                     return ;

                 //  this will end  the function
            }
            else if(is_empty()==1){
                
                 rear=0;
                 
                 front=0;          
            }
            else{
                
                rear=(rear+1)%5;

            
            }
            
              arr[rear]=val; 
                
              ++count;
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

                    front=(front+1)%5;

             }

            --count;

           return x;

        }


        int Count(){

            return count;

        }
       
        void display(){               
   
                    if(is_empty()==1){

                         cout<<"stack underflow "<<endl;

                         exit( 1 );

                    }
                    else{

                         int i=0;

                    
                          

                      for ( i = 0; i<5; i++){
                      
                             
                         cout<<arr[i]<<" ";

                      }
                       
                        
        

                    }


                    

        }
        
        
     
};








        






int main (){

    
   circular_Queues q1;
   

           q1.enqueue(20);
           q1.enqueue(21);
           q1.enqueue(22);
           q1.enqueue(23);
           q1.enqueue(24);


             q1.display();

              cout<<endl;
             cout<<endl;
               
             q1.dequeue();
             q1.dequeue();
                              
              


             q1.display();



             q1.enqueue(50);
           q1.enqueue(31);

             cout<<endl;
             cout<<endl;
               
             q1.display();
            
             cout<<endl;
             cout<<endl;



             cout<<q1.is_full()<<endl;

             cout<<endl;
             cout<<endl;

              //cout<<q1.Count()<<endl;

              q1.enqueue(550);

    return 0;
}




