#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;



class stack {

 private:  int arr[100], top;

  


  public:
  
         stack () {

          int  arr[100]={0};

          top =-1;

        }

        bool is_empty(){

             if(top==-1){

                    return 1;

             }
             else{
               
                   return 0;

             }


        }

         bool is_full(){

             if(top==99){

                    return 1;

             }
             else{

                   return 0;

             }


        }

        
        void push(int x){

                 if(is_full()==1){

                     cout<<" stack overflow "<<endl;

                     exit( 1 );

                 }
                 else{
                         top=top+1;    
                         //cout<<"top="<<top<<endl;
                         arr[top]=x;

                     }
        }



        int pop(){
                     int num=0;
               
                    if(is_empty()==1){

                        cout<<"stack underflow "<<endl;

                           exit( 1 );

                    }
                    else{
                          
          
                         num=arr[top];
                           arr[top]=0;
                              --top;
                       
                        return num;
        

                    }

               }


        int pop(int num){

                           int x=0;

                          if(is_empty()==1){

                        cout<<"stack underflow "<<endl;

                           exit( 1 );

                    }
                    else{

                               x=arr[num];
                                 
                          
                             for (num; num <= top; num++)
                             {
                                  arr[num]=arr[num+1];
                             }
                             
                            --top;                             
                            return x;
                        
        

                    }
         



                        



                 }


          void remove(int num){

               int x=0, i=0;;

               for (i = 0; i <=top; i++)
               {
                    if(arr[i]==num){
                               
                       num=i;
                         
                       for (num; num <= top; num++){
                         
                              arr[num]=arr[num+1];
                         }
                         --top;           
                         break;
                        
                    }

               }
               

          }



          int count(){


                if(is_empty()==1){

                        cout<<"stack underflow "<<endl;

                           exit( 1 );
                    }
                    else{
                    
                         return (top+1);

                    }

           
          }

          int peek(int ind){


                if(is_empty()==1){

                        cout<<"stack underflow "<<endl;

                         exit( 1 );

                    }
                    else{
                    
                         return arr[ind];

                    }


              
          }

          void change (int ind, int val ){

                     arr[ind]=val;

          }



          void insert(int ind , int val){

                  int i=top+1;
                  
                     

                for ( i; i >= ind+1; --i)
                {
                     arr[i]=arr[i-1];
                }

                arr[ind]=val;
                


                  ++top;


          }

      
  void reverse(stack  s){

 
          
        s.push(300);




        }
        


        void display(){

                       int i;


                       
   
                    if(is_empty()==1){

                         cout<<"stack underflow "<<endl;

                         exit( 1 );

                    }
                    else{

                
                          

                      for ( i = 0; i<=top; i++)
                      {
                             
                         cout<<arr[i]<<endl;

                      }
                       
                        
        

                    }







        }
   


};



int main (){

    

   stack b1;



        b1.push(20);
        b1.push(21);
        b1.push(22);
        b1.push(23);
  
    

        b1.reverse(b1);
      
        b1.display();
          

    return 0;
}


