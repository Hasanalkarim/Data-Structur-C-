#include <iostream>
#include <vector>
using namespace std;


  vector<vector<int>> G;

  vector<bool> visited;

  int N;

 


  void DFS_recursive(int source){
        if(visited[source])
            return;
        
        visited[source] = true;
    
        int x=G[source].size();

       for (int i = 0; i < x; ++i)
		  DFS_recursive(G[source][i]);
    }




int main()
{
	int M, cnt=0;
	cin >> N >> M;

      N++;

    visited.resize(N);
	G.resize(N);
	while (M--) {
		int a, b;
		cin >> a >> b;
		
		G[a].push_back(b);
		G[b].push_back(a);
	}

	
      auto it= visited.begin();         // getting bool vector
       it++;
       int  i=1;
      while(it!=visited.end()){

           if(visited[i]==false){

                cnt++;                  // counting how many false
                DFS_recursive(i);
            }
            i++;  // 

            it++;
      }




	cout << --cnt << endl;
}