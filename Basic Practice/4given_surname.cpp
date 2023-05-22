#include <iostream>

using namespace std;


int main (){

  int len;

 
 string name="", sur="";



 

  
getline(cin,name);


      len=name.length();


   for (len; len >0; len--)
   {
       if(name[len]==' '){

           for (len; len < name.length(); len++)
           {
                 
                   sur=sur+name[len];

                    name[len]=' ';



           }
           
             break;

       }
   }
   

     
//...........output......................


cout<<"Given name: "<<name<<endl;

cout<<"Surname: "<<sur<<endl;











return 0;

}
