#include <iostream>
using namespace std;


int main (){

 int m=0;

 

 cin>>m; 

            if (90<=m)
            {
                 cout<<"A"<<endl;
            }
            else if(85<=m && m<=89) 
            {

                   cout<<"A-"<<endl;

            }
          
            else if(80<=m && m<=84) 
            {

                   cout<<"B+"<<endl;

            }
            else if(75<=m && m<=79) 
            {

                   cout<<"B"<<endl;

            }
            else if(70<=m && m<=74) 
            {

                   cout<<"B-"<<endl;

            }
            else if(65<=m && m<=69) 
            {

                   cout<<"C+"<<endl;

            }
            else if(60<=m && m<=64) 
            {

                   cout<<"C"<<endl;

            }
            else if(55<=m && m<=59) 
            {

                   cout<<"C-"<<endl;

            }
            else if(50<=m && m<=54) 
            {

                   cout<<"D+"<<endl;

            }
            else if(45<=m && m<=49) 
            {

                   cout<<"D"<<endl;

            }
            else if(m<=44) {  
            

                   cout<<"F"<<endl;

            }










return 0;

}

//   A       A-        B+      B         B-       C+      C        C-      D+       D        F

// 90-100   85-89    80-84    75-79    70-74    65-69    60-64    55-59   50-54    45-49    0-44