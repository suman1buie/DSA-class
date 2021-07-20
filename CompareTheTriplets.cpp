// Program Link
// https://www.hackerrank.com/challenges/compare-the-triplets/problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Alice=0,Bob=0;
    int a[3];
    int b[3];
    for(int i=0;i<2;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<2;i++)
    {
        cin>>b[i];
    }
  
//  Hear I comper a[] and b[]
  
   for(int i=0; i<2; i++)
    {
      if(a[i]>b[i])
      {
          Alice++;
      }
      if(a[i]<b[i])
      {
          Bob++;
      }
      if(a[i]==b[i])
      {
          Alice=Alice+0;
          Bob=Bob+0;
      }
    }
        
    cout <<Alice <<" "<<Bob;
    return 0;
}
