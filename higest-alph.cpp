#include<iostream>


using namespace std;


void frequent_alph(string);

int main (){


  

   string s="classs";

   

    frequent_alph(s);




    return 0;
}





void frequent_alph(string s){




    char charr[26];

    int intarr[26];
   
    int i=0, max=0,  ind=0 ,alph=0;



    for(i=0; i<26; i++){

        intarr[i]=0;



    };



         
       
    for(i=0; i<26; i++){

        charr[i]=i+97;

        

         

    }


    for(i=0; i<s.length(); i++){

        //  cout<<int(s[i])-97<<endl;

        intarr[int(s[i])-97]=intarr[int(s[i])-97]+1;


    };


    for(i=0; i<26; i++){   

        if(intarr[i]!=0){
        
            if(max<intarr[i]){

                max=intarr[i];
                ind=i;
            }

                        
        }
        

    }; 


        cout<<"result : "<<char(ind+97)<<", "<<max<<"times"<<endl;



};