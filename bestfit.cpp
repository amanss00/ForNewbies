#include<stdio.h>

int main()
{
int np,nb,min=1000,s;
printf("Enter number of processes:");
scanf("%d",&np);
int ap[np][2];
printf("Enter size of each process:\n");
for( int i=1;i<=np;i++)
{
printf("P[%d]:",i);
scanf("%d",&ap[i][0]);
ap[i][1]=0;
}
printf("Enter number of blocks:");
scanf("%d",&nb);
int ab[nb][3];
printf("Enter size of each block:\n");
for( int i=1;i<=nb;i++)
{
printf("B[%d]:",i);
scanf("%d",&ab[i][0]);
ab[i][1]=0;
ab[i][2]=0;
}
for (int i=1;i<=np;i++)
{

for(int j=1;j<=nb;j++)
{
  if(ap[i][0]<ab[j][0] && (ab[j][0]-ap[i][0])<min && ab[j][1]==0)
  {
    min=ab[j][0]-ap[i][0];
    s=j;
  }
}
  ab[s][1]=i;
  ab[s][2]=ap[i][0];
  ap[i][1]=1;
  min=1000;
}
printf("Block\tSize\tProcess\tSize\tStatus\n");
for(int i=1;i<=nb;i++)
{
printf("B[%d]\t%d\t%d\t%d\t",i,ab[i][0],ab[i][1],ab[i][2]);
if(ab[i][1]==0)
{
printf("Not Allocated\n");
}
else
{
printf("Allocated\n");
}
}
}
