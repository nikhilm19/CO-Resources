//algo to transform one string to another in lowest cost using DP
#include <iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<stack>
#include<list>
using namespace std;
#define for(i,a,b) for(i=a;i<b;i++)
//#define forf(i,b,a) for(i=b;i>a;i--)

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n,m,i,j;
  string s1,s2;
  cin>>s1>>s2;
  n=s1.length(),m=s2.length();
  int dp[n+1][m+1];
  //there are three cases.. delete a character,insert or replace.
  //delete--i+1,j
  //insert i+1,j-1,
  //replace i+1,j+1
  for(i,0,n+1)
  {
    for(j,0,m+1)
    {
      if(i==0)dp[i][j]=j;  //if s1 is null string
      else if (j==0)dp[i][j]=i;   //if s2 is null
      else if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1];    //if both char same
      else
      {
        dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);   //consider min of three(insert,delete,replace);

      }
    }
  }
  std::cout << dp[n][m] << '\n';
}
  return 0;

}
