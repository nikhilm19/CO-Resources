/*      Coding is today's language of creativity
----------------I am NIKHIL MULCHANDANI-----------------
    SARVAJANIK COLLEGE OF ENGINEERING & TECHNOLOGY,SURAT
            B.E COMPUTER ENGINEERING 2ND YEAR
*/
//http://www.geeksforgeeks.org/graph-and-its-representations/
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
struct node{
  struct node* next;
  int dest;
}; //node contains destination
struct adj
{
  struct node *head;
};//adj is the pointer to first node of the list

struct graph{
  int v;
  struct adj* array;
};//graph contains the array of lists
typedef struct graph graph;
typedef struct adj adj;
typedef struct node node;
void addEdge_STL(vector<int> adj[],int s,int d)
{
  adj[s].push_back(d);
  adj[d].push_back(s);
}
void printGraph_STL(vector <int> adj[],int n)
{
  int i,j;
  for(i,0,n)
  {
    for(j,0,adj[i].size())
      cout<<adj[i][j]<<" ";
    cout<<"\n";
  }

}
node*createNode(int des)
{
  node*newnode=(node*)malloc(sizeof(node));
  newnode->dest=des;
  newnode->next=NULL;
  return newnode;
}
graph* createGraph(int n)
{
  int i;
  graph*g=(graph*)malloc(sizeof(graph));
  g->v=n;
  g->array=(adj*)malloc(n*sizeof(adj));
  for(i,0,n)
    g->array[i].head=NULL;
  return g;
}
void addEdge(graph*g,int s,int d)
{
  //add new node at the beginning of the list
  node*newnode;
  newnode=createNode(d);
  newnode->next=(g->array[s]).head;
  g->array[s].head=newnode;
  //do same for d to s as undirected graph
  newnode=createNode(s);
  newnode->next=g->array[d].head;
  g->array[d].head=newnode;
}
void printGraph(graph*g,int n)
{
  int i;
  for(i,0,n)
  {
    while (g->array[i].head!=NULL) {
      /* code */
      cout<<g->array[i].head->dest<<" ";
      g->array[i].head=(g->array[i].head)->next;
    }
    cout<<"\n";
  }
}
int main()
{
  //program to implement adjancency list of graph
  int V = 5;
  graph* graph = createGraph(V);
  addEdge(graph, 0, 1);
  addEdge(graph, 0, 4);
  addEdge(graph, 1, 2);
  addEdge(graph, 1, 3);
  addEdge(graph, 1, 4);
  addEdge(graph, 2, 3);
  addEdge(graph, 3, 4);
  // print the adjacency list representation of the above graph
  printGraph(graph,V);
  vector <int> g[V];
  addEdge_STL(g, 0, 1);
  addEdge_STL(g, 0, 4);
  addEdge_STL(g, 1, 2);
  addEdge_STL(g, 1, 3);
  addEdge_STL(g, 1, 4);
  addEdge_STL(g, 2, 3);
  addEdge_STL(g, 3, 4);
  printGraph_STL(g,V);

  return 0;
}
