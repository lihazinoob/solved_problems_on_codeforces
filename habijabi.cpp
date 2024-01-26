#include<iostream>
#include<string>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> x;
  for(int i = 0;i<5;i++)
  {
    int j;
    cin>>j;
    x.push_back(j);
  }
  cout<<x.size();
}
