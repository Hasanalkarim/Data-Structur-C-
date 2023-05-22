#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;


int str_to_int(string);

int main (){


   ifstream myfile("/home/siam/C++/random.txt");

   

   if(!myfile.is_open()){
  
    cout<<"not okk"<<endl;

   }
  

     string item ="";
     string price ="";


     while(getline(myfile,item)){

          getline(myfile,price);

           cout<<item<<" : "<<str_to_int(price)+5<<endl;

     }



    return 0;
}




int str_to_int(string word){

   int num=0;

  stringstream ss;

  ss << word;

  ss >> num;

    return num;
  


};