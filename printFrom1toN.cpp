#include<iostream>
using namespace std;
int n;
  
void printing(int temp)
{
  if(temp<=n)
  {
    cout<<temp<<"\n";
    temp++;
    printing(temp);
  }
  else if(temp > n)
  {
    return;
  }
}
int main()
{
  
  cin>>n;
  int temp = 1;
  printing(temp);
  return 0;
}