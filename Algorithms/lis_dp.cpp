//longest increasing subsequence by dynamic programming

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
#define forr(i,b,a) for(i=b;i>a;i--)
#define array_input(a,n) for(i=0;i<n;i++)cin>>a[i];
#define array_output(a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";
int main()
{
  int i,j,c,k,n;
  int a[]={1,2,3,4,6,1,2,3,345};
  n=sizeof(a)/sizeof(int);
  int dp[n],choices[n];
  choices[0]=1;
  for (i = 0; i <n; i++) {
    /* code */
    dp[i]=1;
    //choices[i]=1;
  }
  for ( i = n; i>=0; i--) {
    c=1;
    for ( j = i+1; j <n; j++) {
      if(a[j]>a[i])
      {
        choices[c++]=(dp[j]+1);
      }
    }
    dp[i]=*max_element(choices,choices+c);

  }

  for ( i = 0; i <n; i++) {
    /* code */
    std::cout << dp[i] << '\n';
  }
  std::cout << *max_element(dp,dp+n) << '\n';
  return 0;
}
