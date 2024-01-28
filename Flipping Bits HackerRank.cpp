/*Problem Link: https://www.hackerrank.com/challenges/flipping-bits/problem?fbclid=IwAR0pMs1P5wo5rW0KgX2XeQHdIcaR9VjDgM8aF6aOroylUqaQlYdCtKJMXLk*/

#include<iostream>
using namespace std;
int main()
{
  short int q;
  cin>>q;
  while(q--)
  {
    unsigned int n;
    cin>>n;
    cout<<(~n)<<endl; //bitwise negation.
  }
  return 0;
}