#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,i,j;
  cout<<"Enter n:";
  cin>>n;
  int a[n],count[n];
  cout<<"Enter n nos:";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    count[i]=1;
  }
  sort(a,a+n);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])count[i]++;
    }
  }
  int max=*max_element(count,count+n);
  for(i=0;i<n;i++)
  {
    if(count[i]==max)break;
  }
  cout<<"Mode is:"<<a[i]<<endl;
  return 0;
}
