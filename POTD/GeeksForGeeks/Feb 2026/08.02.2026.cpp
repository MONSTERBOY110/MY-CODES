// User function Template for C

// Function to find maximum product subarray
int maxProduct(int arr[], int n) 
{
    // code here
    int i,cmax=arr[0],cmin=arr[0],prod=arr[0];
    for(i=1;i<n;i++)
    {
      int t= max(arr[i],cmax*arr[i],arr[i]*cmin);
      cmin= min(arr[i],cmax*arr[i],arr[i]*cmin);
      cmax=t;
      prod=max(cmax,prod,cmax);
    }
    return prod;
}
int max(int a,int b,int c)
{
    if(a>=b && a>=c) return a;
    if(b>=c && b>=a) return b;
    return c;
}
int min(int a,int b,int c)
{
    if(a<=b && a<=c) return a;
    if(b<=c && b<=a) return b;
    return c;
}
