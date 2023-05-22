// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream>
using namespace std;

class brick
{

public:
    int x = 0, y = 0, w = 5, h = 2;

//,,,,,,,,,,,,,,,,,,,,,constructor...........................................
    brick(int x1 = 0, int x2 = 7)
    {

        x = x1;

        y = x2;
    };
    
    
    
    
    
    
//................................function..............................
    void display()
    {

        cout << x << endl;
        cout << y << endl;
        cout << w << endl;
        cout << h << endl;
    }
    
 int area () {
     
       return w*h; 
     
 }  
    
    
};

int main()
{

    brick b1, b2;

    b1 = brick();
    
    
    b1.display();

    //b1.display();

    return 0;
};



