#include <iostream>
#include <fstream>
#include <sstream>

#include <cstdlib>

using namespace std;



class node {

  public: int data; 

          int  key;
           
          node *next;

     node(){

          key =0;
          
          data=0;

         next=NULL;
     }

     node(int ki, int val){

         key=ki;

        data=val;
          next=NULL;  

     }

       

};


class stack
{

private:
    node * arr[100];
    
    
    int  top;

public:
    stack()
    {

        

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

    void push(node *x)
    {

        if (is_full() == 1)
        {

            cout << "push: stack overflow " << endl;

        
        }
        else
        {
            top = top + 1;
            arr[top] = x;
        }
    }

    node* pop(int ind = -1)
    {

        node *x = NULL;

        if (is_empty() == 1)
        {

            cout << "pop: stack underflow " << endl;
         
        }
        else if (ind == -1)
        {

            x= arr[top];
            arr[top] = NULL;
            --top;

            return x;
        }
        else
        {

            x = arr[ind];

            for (ind; ind <= top; ind++)
            {
                arr[ind] = arr[ind + 1];
            }

            --top;
            return x;
        }
    }

    void remove(node * nod)
    {

        int num = 0, i = 0;
        ;

        for (i = 0; i <= top; i++)
        {
            if (arr[i] == nod)
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

         cout<< "count: stack underflow " << endl;
   
        }
        else
        {

            return (top + 1);
        }
    }

    node* peek(int ind=-1)
    {

        if (is_empty() == 1)
        {

            cout << "peek: stack underflow returned NULL " << endl;

            return NULL;
        }
        else if(ind == -1){

             ind=top;

        }
        return  arr[ind];
        
    }



    void change(int ind, node* nod)
    {

        arr[ind] = nod;
    }

   

    void display()
    {

        int i;

        if (is_empty() == 1)
        {

            cout << "display: stack underflow " << endl;
            
        }
        else
        {

            for (i = 0; i <= top; i++)
            {

                cout << arr[i]->data << endl;
            }
        }
    }
};

int main()
{

    

      
    node * n1= new node(1,10);


     node * n2= new node(2,20);


      node * n3= new node(3,30);

       node * n4= new node(4,40);
    
     node *p=NULL;

    
          
   

          stack b1;
                                                // 0   10       1 20   3 30  \\   30 

          b1.push(n1);

          b1.push(n2);


          b1.push(n3);
 

          b1.peek()->next=b1.peek(1);

              b1.peek(1)->next=b1.peek(0);

              p=b1.peek();

              while(p!=NULL){

                cout<<p->data<<endl;

                p=p->next;
              }

          


            
               cout<<endl<<"display"<<endl;

               b1.display();


               b1.change(0,n4);

              


               cout<<endl<<"display"<<endl;

               b1.display();


          

         /* */

            

            

         

       


    


     










    return 0;
}


