#include<iostream>
#include <sstream>

using namespace std;

int main (){

  int num=0;

  

  string word="245";

  stringstream ss;

  ss << word;

  ss >> num;

  cout<<num+5<<endl;
  



    return 0;
}