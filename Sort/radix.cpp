// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;


void count_sort(int [], int, int);

void radix_sort(int [], int);

int get_max(int [], int);




int main() {
  

     int num;

     cout<<"enter size"<<endl;

     cin>>num;

     int input[num];

     cout<<"enter input "<<endl;

     for(int i=0;  i<num;  i++){


         cin>>input[i];

     }
     


     radix_sort(input, num);

       

     cout<<"output "<<endl;

     for(int i=0;  i<num;  i++){


         cout<<input[i]<<endl;

     }

    // cout<<endl<<"hiegst value "<<get_max(input, num)<<endl;

  /**/
    return 0;
}

//****************************************************FUNCTIONS***********************************************

void radix_sort(int input[ ], int num){

 int  m=0;

  m=get_max(input, num);


  for(int div=1; m/div>0; div=div*10){

          count_sort(input, num, div);


  }
 

}


















void count_sort(int input[ ], int num, int div){


   int output[num]={0};

   int count[10]={0};

   int i=0;


   //counting

   for ( i = 0; i < num; i++)
   {
    
     ++count[(input[i]/div)%10];          


   };


   //cumilative add

    for (i = 1; i < 10; i++)
   {
    
     count[i]=count[i-1]+count[i];


   };

   // final out put


    for ( i =num-1; i > -1; i--)
   {
    
       output[--count[((input[i]/div)%10)]]=input[i];         

   };


     for ( i = 0; i < num; i++)
   {
    
      input[i]= output[i];

   };


   
};



int get_max(int arr[], int s){

   int max=arr[0];

   for(int i=1;  i<s; i++){

            if(arr[i]>max){

                max=arr[i];

            }


   }
 

      return max;

}