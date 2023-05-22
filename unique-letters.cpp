//The number of "unique letters" is 14 because the file contains 
//14 distinct letters of the alphabet from A-Z: a, b, e, h, i, l, n, o, q, r, s, t, u, and y.
#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;






int unique_letters(string);


int main (){


   string line ="Tobeb,,   $,,,";

  
   cout<<"totall alph: "<<unique_letters(line)<<endl; 

  

   
     cout<<"ayon:"<<55*12<<endl;

  
    

    return 0;
};


//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,FUNCTION,,,,,,,,,,,,,,,,,,,,,,,,,,,

int unique_letters(string s){




    int charr[52];

    int intarr[52];
   
    int i=0, countt=0 ;



    for(i=0; i<52; i++){

         intarr[i]=0;         // making full array zero



         if(i<26){           //filling up a-z
           
            charr[i]=i+97;

            

        }
        else{                //filling up A-Z
            
            charr[i]=i+39;
           

        }



    };

   

    for(i=0; i<s.length(); i++){


          if(64<int(s[i]) && 91>int(s[i])){

                //cout<<s[i]<<endl;

                intarr[int(s[i])-65]=intarr[int(s[i])-65]+1; 

          }
          else if(96<int(s[i]) && 123>int(s[i])){

                intarr[int(s[i])-97]=intarr[int(s[i])-97]+1;

          }   





         //cout<<int(s[i])-97<<endl;
 
          //cout<<s[i]<<endl;


       


    };


    for(i=0; i<26; i++){   

        if(intarr[i]!=0){

            countt=countt+1;
                        
        }
        

    }; 
                   
                   
                
    return countt;

       //   cout<<countt<<endl;

    



};



