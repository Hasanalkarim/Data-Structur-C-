#include <iostream>
#include <fstream>
#include <sstream>

#include <cstdlib>

using namespace std;

class stack
{

private:
    int arr[100], top;

public:
    stack()
    {

        int arr[100] = {0};

        top = -1;
    }

    bool is_empty()
    {

        if (top == -1)
        {

            return 1;
        }
        else
        {

            return 0;
        }
    }

    bool is_full()
    {

        if (top == 99)
        {

            return 1;
        }
        else
        {

            return 0;
        }
    }

    void append(int x)
    {

        if (is_full() == 1)
        {

            cout << " stack overflow " << endl;

            exit(1);
        }
        else
        {
            top = top + 1;
            cout << "top=" << top << endl;
            arr[top] = x;
        }
    }

    int pop(int num = -1)
    {

        int x = 0;

        if (is_empty() == 1)
        {

            cout << "stack underflow " << endl;

            exit(1);
        }

        if (num == -1)
        {

            num = arr[top];
            arr[top] = 0;
            --top;

            return num;
        }
        else
        {

            x = arr[num];

            for (num; num <= top; num++)
            {
                arr[num] = arr[num + 1];
            }

            --top;
            return x;
        }
    }

    void remove(int num)
    {

        int x = 0, i = 0;
        ;

        for (i = 0; i <= top; i++)
        {
            if (arr[i] == num)
            {

                num = i;

                for (num; num <= top; num++)
                {

                    arr[num] = arr[num + 1];
                }
                --top;
                break;
            }
        }
    }

    int count()
    {

        if (is_empty() == 1)
        {

            cout << "stack underflow " << endl;

            exit(1);
        }
        else
        {

            return (top + 1);
        }
    }

    int peek(int ind)
    {

        if (is_empty() == 1)
        {

            cout << "stack underflow " << endl;

            exit(1);
        }
        else
        {

            return arr[ind];
        }
    }

    void change(int ind, int val)
    {

        arr[ind] = val;
    }

    void insert(int ind, int val)
    {

        int i = top + 1;

        for (i; i >= ind + 1; --i)
        {
            arr[i] = arr[i - 1];
        }

        arr[ind] = val;

        ++top;
    }

    void display()
    {

        int i;

        if (is_empty() == 1)
        {

            cout << "stack underflow " << endl;

            exit(1);
        }
        else
        {

            for (i = 0; i <= top; i++)
            {

                cout << arr[i] << endl;
            }
        }
    }
};

int main()
{

    stack b1;

      b1.append(2); // 0
     b1.append(3); // 1
      b1.append(4); // 2
     b1.append(5); // 3
      b1.append(6); // 4

    //  b1.remove(5);

    //  b1.insert(1, 90);

    // cout<<" countttt "<<b1.count()<<endl;

    cout << "pop= " << b1.pop(3) << endl;

    b1.display();

    cout << "COUNTTP= " << b1.count() << endl;

    return 0;
}


