#include<stdio.h>
#include<limits.h>
int minmul(int arr[], int i,int j,int mem[][j+1])
{
  int k, res=INT_MAX;
  if(i+1==j)
     return 0;
   if (mem[i][j]!=-1)
     return mem[i][j];
   for(k=i+1;k<j;k++)
  {
   int curr=minmul(arr,i,k,mem)+minmul(arr,k,j,mem   +arr[i]*arr[k]*arr[];
   if(curr<res) res=curr;
  }
mem[i][j]=res;
return res;
}
int matmul(int arr[], int n){
int mem[n][n];
int i,j;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       mem[i][j]=-1;
return minmul(arr,0,n-1,mem);
}
int main()
{
int n, i;
printf("Enter Range: ");
scanf("%d",&n);
int arr[n];
printf("Enter Dimensions in Chain:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int res = matmul(arr,n);
printf("Result: %d", res);
return 0;
}
