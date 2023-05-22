#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;


int str_to_int(string);

int main (){


  ofstream myfile ("/home/siam/C++/jello.txt", ios_base::out | ios_base::app);

    if(!myfile.is_open()){

      cout<<" get out"<<endl;


    };

    
     myfile<<"eating chips"<<endl;











    return 0;
}




int str_to_int(string word){

   int num=0;

  stringstream ss;

  ss << word;

  ss >> num;

    return num;
  


};