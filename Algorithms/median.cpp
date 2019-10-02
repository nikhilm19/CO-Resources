#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
  int n,i,mid;
  cout<<"Enter n:";
  cin>>n;
  float a[n],avg;
  cout<<"Enter nos:";
  for(i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  if(n%2==1)
  {
    mid=(n-1)/2;
    cout<<"Median is:"<<a[mid]<<endl;
  }
  if(n%2==0)
  {
    mid=n/2;
    avg=(a[mid]+(a[mid-1]))/2;
    cout<<"Median is:"<<avg<<endl;
  }
  return 0;
}
