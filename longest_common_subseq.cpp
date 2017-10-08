/*      Coding is today's language of creativity
----------------I am NIKHIL MULCHANDANI-----------------
    SARVAJANIK COLLEGE OF ENGINEERING & TECHNOLOGY,SURAT
            B.E COMPUTER ENGINEERING 2ND YEAR
*/
//http://www.geeksforgeeks.org/longest-common-subsequence/
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
#define array_input(a,n) for(i=0;i<n;i++)cin>>a[i];
#define array_output(a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";
int lcs(char *x,char *y,int m,int n)
{
  int l[n+1][m+1],i,j;
  for (i = 0; i <=n; i++) {
    /* code */
    for (j = 0; j <=m; j++) {
          //other seq is empty
      if (i==0||j==0) {
        /* code */
        l[i][j]=0;
      }

      else if (x[i-1]==y[j-1]) {
        /* if both last characters are same then add 1 to the previous lcs */
        l[i][j]=1+l[i-1][j-1];
      }
      else {
        //if not same then find max from removing last char from either of two strings
        l[i][j]=max(l[i-1][j],l[i][j-1]);
      }

  }
}
return l[n][m];
}
int recursive_lcs(char *x,char *y,int n,int m)
{
  if(n==0||m==0)return 0;
  if(x[n-1]==y[m-1])
  {
    //if last char are same
    return 1+recursive_lcs(x,y,n-1,m-1);
  }
  //if not same then recurse through sub-problems
  else return max(recursive_lcs(x,y,n-1,m),recursive_lcs(x,y,n,m-1));
}
int main()
{
  char x[]="abcdefh";
  char y[]="abchsd";
  std::cout << lcs(x,y,strlen(x),strlen(y)) << '\n';
  std::cout << recursive_lcs(x,y,strlen(x),strlen(y)) << '\n';
  return 0;
}
