#include<bits/stdc++.h>
using namespace std;
const int N = 3e4;
vector<int>graph[N];
bool visited[N] = {false};
void DFS(int sourcevertex,int n,int t)
{ 
  
    visited[sourcevertex] = true;
    vector<int>::iterator it;
    for(it = graph[sourcevertex].begin(); it!= graph[sourcevertex].end();it++)
    {
      if(visited[*it] != true)
      {
        DFS(*it,n,t);
      }
      else if(*it == t)
      {
        cout<<"YES";
        return;
      }
      else if(*it != t)
      {
        cout<<"NO";
        return;
      }
    } 
}


int main()
{
  int n,t;
  cin>>n>>t;
  int a[n];
  
  for(int i = 0;i<=n;i++)
  {
    cin>>a[i];
    graph[i].push_back(i+a[i]);
  }
  DFS(1,n,t);
  

  return 0;
}
