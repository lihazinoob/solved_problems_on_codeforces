/*Problem Link : https://www.codechef.com/problems/BIT?fbclid=IwAR0a1vCzMfJmyl0z_Jw4zj21vJKh6GPx4-__1by3ve2FAiqJyTEpqiTIbEE*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while (testcase--)
  {
    /* code */
    int n;
    cin>>n;
    int count = 0;
    //taking all the numbers from 1 to n by this iner loop
    for(int i = 1;i<=n;i++)
    {
      int temp = i;
      while(temp)
      {
        if(temp & 1)
        // bitwise and with 1
        {
          count++;
        }
        temp = temp >> 1; //bitwise right shift
      }
    }
    cout<<count<<"\n";  
  }
  return 0;
}