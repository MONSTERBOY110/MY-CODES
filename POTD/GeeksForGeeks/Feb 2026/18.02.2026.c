// User function Template for C

// Function to count inversions in the array
int countandmerge(int arr[],int l,int m,int r)
{
    int n1=m-l+1,n2=r-m,left[n1],right[n2];
    for(int i=0;i<n1;i++)
      left[i]= arr[i+l];
    for(int j=0;j<n2;j++)
      right[j]= arr[m+j+1];  
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
          arr[k++]= left[i++];
        else{
            arr[k++]=right[j++];
            res+= (n1-i);
        }
    }
    while(i<n1)
      arr[k++] = left[i++];
    while(j<n2)
      arr[k++] = right[j++];
    return res;  
}


int countinv(int arr[],int l,int r)
{
    int res=0;
    if(l<r)
    {
        int m = (r+l)/2;
        res+= countinv(arr,l,m);
        res+= countinv(arr,m+1,r);
        res+= countandmerge(arr,l,m,r);
    }
    return res;
}
int countInversions(int arr[], int n) 
{
    // code here
   return countinv(arr,0,n-1);
}
