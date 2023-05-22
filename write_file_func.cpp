#include<iostream>
#include <fstream>
#include <sstream>
using namespace std;


void write_file(string);

int main (){

   write_file("/home/siam/C++/jello.txt");






    return 0;
}





void write_file(string line){


 

  ofstream myfile (line, ios_base::out | ios_base::app);

  if(!myfile.is_open()){

     cout<<" get out"<<endl;

    };

     string word="";


    getline(cin,word);

    myfile<<word<<endl;



}