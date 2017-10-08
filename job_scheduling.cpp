/*      Coding is today's language of creativity
----------------I am NIKHIL MULCHANDANI-----------------
SARVAJANIK COLLEGE OF ENGINEERING & TECHNOLOGY,SURAT
B.E COMPUTER ENGINEERING 2ND YEAR
*/
//http://www.geeksforgeeks.org/job-sequencing-problem-set-1-greedy-algorithm/
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
#define array_input(a,n) for(i,0,n)cin>>a[i];
#define array_output(a,n) for(i,0,n)cout<<a[i]<<" ";
#define size 4
struct job
{
  char job_id;
  int deadline,profit;
};
bool comp(job a,job b)
{
  return a.profit>b.profit;
}
int main()
{
  int i,j;

  job arr[size]={
    {'a',2,100},{'b',1,19},{'d',1,25},{'e',3,15}
  };
  sort(arr,arr+size,comp);
  bool status[size];
  int result[size];
  for(i=0;i<size;i++)
  {
    status[i]=false;

  }
  for(i=0;i<size;i++)
  {
    for ( j=min(size, arr[i].deadline)-1; j>=0; j--)
    {
      {
        if(status[j]==false)
        {
          result[j]=i;
          status[j]=true;
          break;
        }
      }
    }
  }
  for(i=0;i<size;i++)
  {
    if(status[i]==true)
    {
      printf("%c ",arr[result[i]].job_id );
    }
  }
  return 0;
}
