//Tilak Mangrudkar 60
//A* Algo
#include <stdio.h>
#define max 100
int main(void)
{
  int n;
  int m=9999;
  printf("enter the number of nodes\n");
  scanf("%d",&n);
  int i,j;
  int mat[n][n];
  printf("Enter the matrix\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&mat[i][j]);
    }
  }
  int arr[n];
  printf("Enter the heuristic values\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  int start;
  printf("Enter the start node\n");
  scanf("%d",&start);
  int goal;
  printf("enter the goal state\n");
  scanf("%d",&goal);
  int visited[max]={0};
  int t=0;
  visited[start]=1;
  int x=start;
  int p=0;
  int y;
  int v;
  int sum=0;
  printf("Start state is %c\n",start+65);
  printf("End state is %c\n",goal+65);
  printf("%c ",start+65);
  while(x!=goal)
  {
    for(i=0;i<n;i++)
    {
      if(mat[x][i]!=0 && visited[i]!=1)
      {
        p=mat[x][i]+arr[i];
        if(m>p)
        {
          y=mat[x][i];
          m=p;
          v=i;
        }
      }
    }
    sum=sum+y;
    visited[v]=1;
    printf("%c ",v+65);
    x=v;
    m=9999;
  }
  printf("cost is %d\n",sum);
  return 0;
}





/*
0 10 15 20
10 0 35 25
15 35 0 30
20 25 30 0

0 6 4 2

*/
