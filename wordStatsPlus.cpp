#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;

int str_to_int(string);

int remove_end_space(string);


int unique_letters(string);





//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,wordStatsPlus,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

int main (){


   ifstream myfile("/home/siam/C++/wordStats.txt");

   

   if(!myfile.is_open()){
  
    cout<<"not okk"<<endl;

   };

   string line ="", allline="";


   int i=0, end=0;

   float w=0, k=0 ,wrd=0 ,j=0,n=0;

   
   
   
        
   
   
   while(getline(myfile,line)){

         
         i=0;
         k=k+1;
    //a//
         for(int j=0;  j<line.length(); j++){

            // 1//
                if(line[i]==' '){

                    i=i+1;
                }
                else{

                    j=999999999; 
                }

         }
            
             
         end=remove_end_space(line);  

                    
           // cout<<"i="<<i<<endl;
         // b//
         for (n=i; i<end+1; i++){   //word counter
               
             // 2//
              if(line[i]==' '){

                    w=w+1;

                    // 3//
                    if(line[i-1]==' '){

                         w=w-1; 
                    }                               
            }
             else{
                 wrd=wrd+1;

             }
                      
         };
              
            //  
                
            
         for(n; n < end; i++){   //word counter fininshing
                
                    if(line[n]==' '){

                    }
                    else
                    {
                        w=w+1;
                        n=999999999;  
                    }                  
         }                
          
            allline=allline+" "+line;


    };

     n=unique_letters(allline);

     j=w/k;  wrd=wrd/w; i=(n*100)/26;
                
    
     cout<<"Total lines = "<<k<<endl;
     cout<<"Total words = "<<w<<endl;
     cout<<"Total unique letters = "<<n<<" ("<<i<<char(37)<<" percent of alphabet)"<<endl;                        
     cout<<"Average words/line = "<<j<<endl;     
     cout<<"Average word length = "<<wrd<<endl;

        


    return 0;
};


//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,FUNCTION,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

int str_to_int(string word){

   int num=0;

  stringstream ss;

  ss << word;

  ss >> num;

    return num;
  


};



int remove_end_space(string line){


      int size=0, end=0 ;

       size=line.length()-1;

        end=size;

            for (int i = 0; i < end; i++)
            {
                 if(line[size]==' '){

                     size=size-1;

                 }



            }
            
           return size;

};







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
