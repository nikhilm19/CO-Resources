#include<stdio.h>
#define N 4
#define for(i,a,b) for(i=a;i<b;i++)
#define INF 99999
void floydWarshal(int [][N]);
int min(int a,int b);
int main()
{
  int i,j;
  int initial[N][N]={{7,5,INF,INF},{7,INF,INF,2},{INF,3,INF,INF},{4,INF,1,INF}}; //initial matrix representation of graph
  floydWarshal(initial);

  return 0;
}

void floydWarshal(int q[N][N])
{

  int i,j,k;
  for(k,0,N)
  {
    for(i,0,N)
    {
      for(j,0,N)
      {
        if(q[i][k]==INF || q[k][j]==INF)continue;
        q[i][j]=min(q[i][j],q[i][k]+q[k][j]); //considering k vertex as intermediate

      }
    }

    for(i,0,N)
    {
      for(j,0,N)
      {
        printf("%d ",q[i][j] );
      }
      printf("\n" );
    }
    printf("\n\n" );
  }


}

int min(int a,int b)
{
  return (a<b?a:b);
}
