#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;



int remove_end_space(string);

//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,wordStatsPlus,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

int main (){

    

      string line ="m  m";

      
             
             cout<<"size "<<remove_end_space(line)<<endl;
    


    return 0;
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
