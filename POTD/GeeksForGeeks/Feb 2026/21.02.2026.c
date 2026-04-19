// User function Template for C

// Function to find the h-index
int hIndex(int citations[], int n) {
    // code here
    int fr[n+1];
    for(int i=0;i<=n;i++)
      fr[i]=0;
    for(int i=0;i< n;i++) 
      if(citations[i]>=n)
        fr[n]+=1;
      else
        fr[citations[i]]+=1;
    int j= n;
    int s= fr[n];
    while(s<j)
    {
        j--;
        s+= fr[j];
    }
    return j;
    
}
