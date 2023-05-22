// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;





int main() {
    

    int A=0, B=0, C=0;
    cout << "A= "<<endl;
    cin>>A;
 
      cout << "B= "<<endl;
    cin>>B;

      cout << "C= "<<endl;
    cin>>C;



    if(A<B && A<C)


    {

       cout<<"smll A"<<endl;

    }
    else if(B<A && B<C)


    {

       cout<<"smll B"<<endl;

    }
    else {


            cout<<"smll C"<<endl;
    }

    return 0;
}