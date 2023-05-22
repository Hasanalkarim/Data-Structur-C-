#include <iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

int main() {

       
  int  arr[100]= {1, 20, 30, 40, 50, 60 };
  


 int size=0;

      //but size is int type 

 size = *(&arr+1)-arr;  // find the size of array

         cout<<size<<endl;

         

  return 0;
}