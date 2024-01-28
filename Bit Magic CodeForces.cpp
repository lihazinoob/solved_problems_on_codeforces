/*Problem Link: https://www.codechef.com/problems/BITMAGIC?fbclid=IwAR0St-24GdZOS8T1ipv1Q1-WyQZbBYDREAMV2vl87tewr_9CsRBcxjOHnaM&tab=statement*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n,k;
    cin>>n>>k;
    if((!(n & (1<<k)))) //checking if the kth bit is unset
    {
      n = n | (1 << k);
    }
    cout<<n<<endl;
  }


  return 0;
}