#include <iostream>
#include <list>
#include <vector>
#include<queue>
#include<stack>
using namespace std;

class edge 
{
  public: 
         int id;

         int weight;
   
        edge(){
            id=0;
        
            weight=0;
        }   
 
         edge(int w, int i=-1){

            if(i==-1){

                id=0;
            }
            else{
            
               id=i;
            }
          
        
            weight=w;
        }  




};
 
class vortex 
{
   public:

      int vortex_id;   

      string  chr;

      list<edge> edglst;


      vortex(){

        vortex_id=0; 

         chr=' ';

         
      }


       vortex(int d, string s){

        vortex_id=d; 

         
         chr=s;
    
    
      }
     
      


      void print_edglist(){

           auto it=edglst.begin();

                
           cout<<"[ ";

               for(it; it!=edglst.end(); it++){

                        cout<<it->id<<" ";

               }
          
           cout<<"] ";
            

      }


 };

class graph 
{  public:
  vector<vortex> vortis;
    vector<bool>  ch;
        

         


   void add_Vortex (vortex v){

        
        int x=0;
       
        for( int i=0; i<vortis.size(); i++ ){

               
                if( vortis[i].vortex_id==v.vortex_id){

                    cout<<"vortex id "<<v.vortex_id<<" already exist  --add_vortex"<<endl;

                    x=1;

                    break;
                }

        } 
        if(x==0){

          vortis.push_back(v);

        }

        ch.push_back(false);

   }

   vortex* return_vortex(int id){

       for (int i=0 ; i<vortis.size(); i++)
       {

               if(vortis[i].vortex_id==id){

                 
                  return &vortis[i] ;
                   
               }
    
       }


    }

   int find_vortex(int id )
   {
        for (int i=0 ; i<vortis.size(); i++)
       {

               if(vortis[i].vortex_id==id){
 
                  return 1 ;   
               }
    
       }

       return 0;
   }

   list<edge>* return_list(int id){

       vortex* v=NULL;

           v=return_vortex(id);



                  return  &v->edglst;


       }


   list<edge> return_list_val(int id){

       vortex* v=NULL;

           v=return_vortex(id);



                  return  v->edglst;


       }
  
  void add_edge(int id1, int id2, int dis){
        
        edge e1, e2;

      

        vortex *von, *vtwo;
       
        e1.id=id2; // id2

        e1.weight=dis;


        e2.id=id1;  //id1

        e2.weight=dis;
      
         von= return_vortex(id1);  //id1
         vtwo= return_vortex(id2);  //id2

         von->edglst.push_back(e1);

         vtwo->edglst.push_back(e2);

        
       
  }

  int is_connected(int id1, int id2)
  {
          vortex *v1=NULL;

          v1=return_vortex(id1);
      
          auto it= v1->edglst.begin();

          for(it; it!=v1->edglst.end(); it++){

                    if(it->id==id2){

                     return 1;
                    }

         }
         return 0;
               
  }



bool src_dst(int src, int dst)
{
  vector<bool> ch(vortis.size(),false);

    list<edge> edg;     //
  
    stack<list<edge>> s;

        
    do{

        if(ch[src]==false){

         edg=return_list_val(src);
         s.push(edg);
         ch[src]=true;

            if(src==dst){
               cout<<src<<" ";
               return true;

            }
             else{
                cout<<src<<" ";
             }

         
        }


         if(!edg.empty()){

           auto it= edg.begin();
           src=it->id;

           edg.pop_front();

         }
         else{
              s.pop();

              if(!s.empty()){

                 edg=s.top();
              }
             

         }
    }
    while(!s.empty());

    return false;
}



    
void dfs(int src){

    

    list<edge> edg;     //
  
    stack<list<edge>> s;

        
    do{

        if(ch[src]==false){

         edg=return_list_val(src);
         s.push(edg);
         ch[src]=true;
        
        }


         if(!edg.empty()){

           auto it= edg.begin();
           src=it->id;

           edg.pop_front();

         }
         else{
              s.pop();

              if(!s.empty()){

                 edg=s.top();
              }
             

         }
    }
    while(!s.empty());

        

 }
  

   
void connected_cities(){

      int i=1,cnt=0, N=0, M=0 ,x=0, y=0;

      cin>>N;
        cin>>M;



      for(i=0; i<N; i++){  //adding vortex

        
           vortex v1(i+1,"nba");

           add_Vortex(v1);


      }

      for(i=0; i<M; i++){     // adding adge

                cin>>x;

                cin>>y;
           add_edge(x,y,400); 


      }
       
      auto it= ch.begin();   // getting bool vector
          i=1;

        for(it; it!=ch.end(); it++){ // checking bool vector is there any false
            
            if(ch[i]==false){

               cnt++;       // counting how many false

                dfs(i);
            }
              

           i++;
        }

             cnt--;
        cout<<cnt<<endl;

}

 void shortest_path(int src, int dest){

      
        queue<int> q;
  
        list<edge>* edg;

        stack<int> s;

    
     
        vector<bool> ch(vortis.size(),false);

        vector<int> prnt(10);
         
         q.push(src); 

         prnt[src]=-1;

         while(!q.empty()){

               src=q.front();

               edg=return_list(src);

               if(ch[src]==false){

                   ch[src]=true;

                   

               }

               auto it=edg->begin();

               for(it; it!=edg->end(); it++){

                    if(ch[it->id]==false){

                       prnt[it->id]=src;

                         ch[it->id]=true;

                         q.push(it->id);

                    }

               }
               q.pop();

         }    

  
          s.push(dest);


          while(1){

             dest= prnt[dest];


              if(dest==-1){

                break;
              }
              
             s.push(dest);


          }
             
              while(!s.empty()){


                cout<<s.top();

                s.pop();


              }
           
               
        

 }






  void bfs(int src)
  {
        queue<int> q;
  
        list<edge>* edg;
     
        vector<bool> ch(vortis.size(),false);
         
         q.push(src); 

         

         while(!q.empty()){

               src=q.front();

               edg=return_list(src);

               if(ch[src]==false){

                   ch[src]=true;

                   cout<<src<<" ";

               }

               auto it=edg->begin();

               for(it; it!=edg->end(); it++){

                    if(ch[it->id]==false){

                         ch[it->id]=true;

                         cout<<it->id<<" ";

                         q.push(it->id);

                    }

               }
               q.pop();

         }     
   }


 
  /* void dfs(int src)
  {

      vector<bool> ch(vortis.size(),false);

         dfs_r(src,ch); 

  }

    */



  void print_all_path(int src, int dst, string ss=" ")
  {
      list<edge>* edg;

      
        edg=return_list(src);

        auto it = edg->begin();

         if(ch[src]==false){

             ch[src]=true;

            ss=ss+" "+to_string(src);

            if(src==dst){

             cout<<ss<<endl;

              // return;    //print a path.
 
            }

         }

         for(it; it!=edg->end();  it++){

            if(ch[it->id]==false){

                print_all_path(it->id,dst,ss);
            }     
         }
         
         
          ch[src]=false;
  } 




  void dfs_r(int src)
  {
      list<edge>* edg;

      
        edg=return_list(src);

        auto it = edg->begin();

         if(ch[src]==false){

             ch[src]=true;

             cout<<src<<" ";

         }

         for(it; it!=edg->end();  it++){

            if(ch[it->id]==false){

                dfs_r(it->id);
            }     
         }
         
         

  } 


 void dfs_loop(int src){

    

    list<edge> edg;     //
  
    stack<list<edge>> s;

        
    do{

        if(ch[src]==false){

         edg=return_list_val(src);
         s.push(edg);
         ch[src]=true;
         cout<<src<<" ";
        }


         if(!edg.empty()){

           auto it= edg.begin();
           src=it->id;

           edg.pop_front();

         }
         else{
              s.pop();

              if(!s.empty()){

                 edg=s.top();
              }
             

         }
    }
    while(!s.empty());

        

 }
  


   void display()
   {

       

       for (int i=0 ; i<vortis.size(); i++)
       {
          cout<<vortis[i].vortex_id<<" "<< vortis[i].chr <<" -->";  vortis[i].print_edglist(); cout<<endl;
       }

   }


   


};


int main()

{
  
      graph g;

           // g.print_all_path(2,5);

            //   g.src_dst(3,5);
        
          // g.bfs(0);

          
             g.connected_cities();

            // g.dfs_r(0);

           // g.bfs(0);

            
      //  g.display();

   //  g.shortest_path(1,8);

     return 0;

}



