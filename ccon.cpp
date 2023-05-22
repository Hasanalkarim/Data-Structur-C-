#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

Graph G;
vector<int> seen;

void dfs(int v, int s)
{
	if (seen[v] != -1) // false na hoile return korbe
		return ;
	
	seen[v] = s;
	for (int i = 0; i < G[v].size(); ++i)
		dfs(G[v][i], s);
}

int main()
{
	int N, M;
	cin >> N >> M;
	G.resize(N);
	while (M--) {
		int a, b;
		cin >> a >> b;
		--a, --b;

		//cout<<a<<" "; cout<<b;
		G[a].push_back(b);
	//	G[b].push_back(a);
	}

	

	seen.assign(N, -1);
	
	for (int i = 0; i < N; ++i){

           dfs(i, i);

		   
	}

         /*
		 cout<<seen[0]<<" ";
		  cout<<seen[1]<<" ";
		   cout<<seen[2]<<" ";
	
               */

	vector<int> tp(N, 0);
	for (int i = 0; i < N; ++i)
		++tp[seen[i]];
	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		if (tp[i])
			++ans;
	}
	cout << ans - 1 << endl;
}