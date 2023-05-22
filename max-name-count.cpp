#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;




int main (){


   ifstream myfile("/home/siam/C++/many-name.txt");

   

   if(!myfile.is_open()){
  
    cout<<"not okk"<<endl;

   }
  


      string word="";

      string name="";

      string max_name="";

      int count=0;

      int max=0;

      int x=2;

      

       
             myfile>>word;
             
       while(x){ 

           if(name!=word){

               if(max<count){

                     max=count; 

                     max_name=name;
               }

               name=word;
           
               count=0;;

            }

            if(name==word){

                 count+=1;

            }

         
            if(myfile>>word){

            }   
            else{

            word="324y234ye!$#$#";

            x=x-1;
            } 

      }
     

     
      cout<<max_name<<":"<<max<<endl;





    return 0;
}


