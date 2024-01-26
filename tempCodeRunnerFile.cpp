#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n][n];
  int primdiag = 0;
  int secdiag = 0;
  for(int i = 0;i<n;i++)
  {
    for(int j = 0;j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  for(int i = 0;i<n;i++)
  {
    for(int j = 0;j<n;j++)
    {
      if(i == j)
      {
        primdiag =primdiag + arr[i][j];
      }
      else if(j == (n-i))
      {
        secdiag= secdiag + arr[i][j];
      }
    } 
  }
  cout<<abs(primdiag - secdiag);
  return 0;
}