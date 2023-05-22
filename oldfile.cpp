#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;




void read_file(string);

int main (){
   
  




  ifstream myfile ("/home/siam/C++/random.txt");



    //.........checking file is ok or not...........................
    if(!myfile.is_open()){ 

      cout<<" get out"<<endl;


    };
    
  
     
    string item="";

    string price="";

    while(myfile>>item>>price){

            cout<<item<<" : "<<price<<endl;



    }




 return 0;
}

