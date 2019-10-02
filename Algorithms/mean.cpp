#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"Enter n:";
  cin>>n;
  cout<<"Enter n nos:";
  float a[n],sum=0;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  cout<<"Mean:"<<sum/n<<endl;
  return 0;
}
