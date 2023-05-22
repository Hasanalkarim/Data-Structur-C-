





void Graph::printAllPathsUtil(int x, int y, bool visited[],
int path[], int& path_index)
{

visited[x] = true;

path[path_index] = x;

path_index++;



if (x == y) {

    for (int i = 0; i < path_index; i++)
    cout << path[i] << " ";
    cout << endl;
}
else 
{

    list<int>::iterator i;

    for (i = adj[x].begin(); i != adj[x].end(); ++i){

              if (!visited[*i]){

               printAllPathsUtil(*i, y, visited, path, path_index);
              };
                

    }

   
}

path_index--;
visited[x] = false;
}
