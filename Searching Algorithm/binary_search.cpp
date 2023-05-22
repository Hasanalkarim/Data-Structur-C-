#include <iostream>

using namespace std;

int linearSearch(int a[], int value, int right) {
 
    int  left=0 ,mid=0;


                 
               
              while(left<=right){
                     
                  mid=(left+right)/2;
       

                  if(value==a[mid]){

                       return mid;

                   }
                   else if(value>a[mid]){

                       left=mid+1;


                   }
                   else{
                        right=mid-1;

                   }

              }
               
           return -1;


}

int main() {
  int arr [5], r8;


  cout << "Please enter 5 elements of the Array" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }


  cout << "Please enter an element to search" << endl;
  int num;
  cin >> num;

   r8=*(&arr+1)-arr;


    r8=linearSearch(arr,num,r8);

            if(r8==-1){

               cout<<"number "<<num<<" doesn't exist in the array "<<endl;


            }
            else{

               cout<<"number "<<num<<" found in "<<" index "<<r8<<endl;
              

            }

   

  return 0;
}