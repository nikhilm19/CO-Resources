#include <iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<stack>
using namespace std;
void updateBIT(int *BITree,int a,int index,int n);
int* construct(int a[],int n);
int getSum(int*,int);
int main()
{
  //code to find sum of 1..i elements in array after updating certain element using fenwick tree.
  int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(freq)/sizeof(freq[0]);
	int *BITree = construct(freq, n);
	cout << "Sum of elements in arr[0..5] is "
		<< getSum(BITree, 5);

	// Let use test the update operation
	freq[3] += 6;
	updateBIT(BITree, 6,3,n); //Update BIT for above change in arr[]

	cout << "\nSum of elements in arr[0..5] after update is "
		<< getSum(BITree, 5);

	return 0;
}
int getSum(int BITree[], int index)
{
	int sum = 0; // Iniialize result
	index = index + 1;
	while (index>0)
	{
	sum+=BITree[index];
		index -= index & (-index);
	}

	return sum;
}
void updateBIT(int *BITree,int a,int index,int n)
{
  //BITree=&a;
  int i;
  index++;
  //std::cout << *(BITree+index) << '\n';

  while (index<=n) {
    BITree[index]+=a;
   index+=index&(-index); //updates index to parent node
  }

}
int* construct(int a[],int n)
{
  int i;
  int b[n+1];
  int *BITree=&b;
  for(i=0;i<n;i++)
    BITree[i]=0;

  for(i=0;i<n;i++)
    updateBIT(BITree,a[i],i,n);
  for (int i=1; i<=n; i++)
        cout << BITree[i] << " ";


  return BITree;

}
