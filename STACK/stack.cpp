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
                         
                       if(is_empty()==1){

                            ++top;

                            arr[top]=x;


                       }
                       else{


                                 if(arr[top]>x){

                                    int temp=0;
                                    temp=pop();

                                    ++top;

                                    arr[top]=x;

                                      ++top;


                                     arr[top]=temp;
                                 }
                                 else{

                                          ++top;

                                          arr[top]=x;


                                 }














                       }





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

          void reverse (){

               int temp=0,size=0;

            if(top%2==0){
             //odd
              
                  size=top/2;


            }
            else{
               //even
                   size=(top+1)/2;

            }
             

           
             

            for (int i=0; i<size; i++ ){

                 temp=arr[i];
                
                 arr[i]=arr[top-i];

                 arr[top-i]=temp;

            }




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


       b1.push(7);
       b1.push(6);
       b1.push(5);
       b1.push(4);
       b1.push(3);
       b1.push(2);
      
     
       
        //  b1.remove(5);

        //  b1.insert(1,90);  
         
       // cout<<" countttt "<<b1.count()<<endl;

           
            
     b1.display();


    //  b1.reverse();
     
       
     //  cout<<endl;

         //  b1.display();
     
     // cout<<"COUNTTP= "<<b1.count()<<endl;


      

          

    return 0;
}

