/*Here is the problem Link:
https://codeforces.com/problemset/problem/550/B
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,l,r,x;
  cin>>n>>l>>r>>x;
  int c[n];
  int ways = 0;
  for(int i = 0;i<n;i++)
  {
    cin>>c[i];
  }
  
  for(int mask = 0;mask<(1<<n);mask++)
  {
    int count = 0;
    int total_diff = 0;
    int min_diff = 1e9;
    int max_diff = 0;
    for(int i = 0;i<n;i++)
    {
      if((mask>>i) & 1 != 0)
      {
        total_diff = total_diff + c[i];
        min_diff = min(min_diff,c[i]);
        max_diff = max(max_diff,c[i]); 
        count++;      
      } 
    }
    if(total_diff>=l and total_diff<=r and (max_diff-min_diff)>=x and count>=2)    
    {
      ways++;
    }
  }
  cout<<ways;
  return 0;
}