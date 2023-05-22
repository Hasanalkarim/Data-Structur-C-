#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;




void read_file(string);

int main (){
   
   read_file("/home/siam/C++/jello.txt");






 return 0;
}

//.....................................................function,,,,,,,,,,,,,,,,,,,.....//




void read_file(string line){


  ifstream myfile (line,ios_base::out | ios_base::app);



    //.........checking file is ok or not...........................
    if(!myfile.is_open()){ 

      cout<<" get out"<<endl;


    };
    
  
     
    string word="";

   while( getline(myfile,word) ){

           cout<<word<<endl;


  }

}