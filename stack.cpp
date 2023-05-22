#include <iostream>
using namespace std;


class stack {
        private:
                   int top;

                   int arr[5];

        public:
                stack (){

                            top =-1;

                            for (int  i = 0; i < 5; i++)
                            {
                                arr[i]=0;
                            }
                            

                            bool isempty(){

                                if(top==-1){
                                        return true;

                                }
                                else {
                                        return false;
                                }

                            }



                            bool isFull(){

                                if(top==4){
                                        return true;

                                }
                                else {
                                        return false;
                                }

                            }




   


                            void push(int val){

                                             if(isFull())

                                                         cout<<"stack overflow"<<endl;


                                             
                                             else 
                                                       ++top

                                                    arr[top]=val;



                            }



                        

                        int pop(){

                                   if(isempty()){

                                     cout<<"stack underflow"<<endl;


                                   }
                                   else {

                                         int popvalue = arr[top];

                                         arr[top] =0;

                                         --top;

                                         return popvalue;

                                   }


                         int count (){

                                    return (top+1);
                         }

                        }


                        int peek(int pos){

                                         if(isempty()){

                                                    cout<<"stack underflow"<<endl;
                                                      
                                                    return 0;
    
                                         }
                                        else{

                                            return arr[pos];

                                        }

                        }



                        void printAll(){

 
                                        for (int i=4 ; i >= 0; --i)
                                        {
                                            cout<<arr[i]<<endl;
                                        }
                                        
                        }








                }








}


















int main (){

         
         



    return 0;
}a