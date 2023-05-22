#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph{
    int NUM;
    vector< vector < int > > adj;
     vector< bool > visited;

public:

    void add_edge(int st, int end){
        adj[st][end] = 1;
        adj[end][st] = 1;   // for undirected graph
    }

    void add_vortex(int n){

          NUM = n+1;
          adj.resize(NUM);
         for(int i = 0; i < NUM; i++){
             adj[i].resize(NUM, 0);
             visited.push_back(false);

         }
    }

    void connected_cities(){

      int i=0,cnt=0,  N=0, M=0 ,x=0, y=0;

      cin>>N;
      cin>>M;

      add_vortex(N);       //adding vortex

      while(M--){  // adding adge

          cin>>x; cin>>y;  
          add_edge(x,y); 

      }
       
        
      auto it= visited.begin();         // getting bool vector
      it++;
      i=1;
      while(it!=visited.end()){

           if(visited[i]==false){

                cnt++;                  // counting how many false
                DFS_recursive(i);
            }
            i++;  // 

            it++;
      }
      cnt--;
      cout<<cnt<<endl;
           
    }
    
     void DFS_recursive(int source){
        if(visited[source])
            return;
        
      //  cout << source << ' ';
        visited[source] = true;

        for(int i = 0; i < NUM; i++)
            if(adj[source][i])
                DFS_recursive(i);
    }

   

    void display(){
        for(int i = 0; i < NUM; i++){
            for(int j = 0; j < NUM; j++)
                cout << adj[i][j] << ' ';
            cout << '\n';
        }
    }

    void BFS(int source){
        queue< int > q;
        q.push(source);
        

        while(!q.empty()){
            int s = q.front(); q.pop();
            if(visited[s])
                continue;
            cout << s << ' ';
            visited[s] = true;

            for(int i  = 0; i < NUM; i++)
                if(adj[s][i])
                    q.push(i);
        }
        cout << '\n';
    }



   void DFS(int source){
        stack< int > q;
        q.push(source);
       
        while(!q.empty()){
            int s = q.top(); q.pop();
            if(visited[s]) 
                continue;
    
            visited[s] = true;

            for(int i  = 0; i < NUM; i++)
                if(adj[s][i])            
                    q.push(i);
        }

    }







};


int main(){
    Graph g;

   g.connected_cities();


   /*

 
        {
  vortex v1(0,"Dhaka"), v2(1,"comilla"), v3(2,"barisal"),  v4(3,"nandan"), v5(4,"cox"), v6(5,"sylet"),v7(6,"nn"),v8(7,"nn"),v9(8,"nn");

                    

           g.add_Vortex(v1);
           g.add_Vortex(v2);
           g.add_Vortex(v3);
           g.add_Vortex(v4);
           g.add_Vortex(v5);
           g.add_Vortex(v6);
            g.add_Vortex(v7);
             g.add_Vortex(v8);
              g.add_Vortex(v9);
            

              



          
          
          
            g.add_edge(1,2,400); 
            g.add_edge(1,3,400); 
            g.add_edge(1,4,400); 
            g.add_edge(2,5,400); 
            g.add_edge(3,8,400); 
            g.add_edge(4,6,400); 
              g.add_edge(5,8,400); 
                g.add_edge(6,7,400); 
                   g.add_edge(7,8,400); 





        }

      

  */





   
}