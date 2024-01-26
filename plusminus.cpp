#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  float pos = 0;
  float neg = 0;
  float zero = 0;
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i] == 0)
    {
      zero++;
    }
    else if(arr[i] > 0)
    {
      pos++;
    }
    else if(arr[i]<0)
    {
      neg++;
    }
  }
  cout<<setprecision(6)<<(pos/n)<<endl << neg/n << endl << zero/n;

  return 0;
}