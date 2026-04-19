class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int tsum = 0,cmaxsum =0,cminsum=0,maxsum=arr[0],minsum=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            cmaxsum=(cmaxsum+arr[i]>arr[i])?cmaxsum+arr[i]:arr[i];
            maxsum=(maxsum>cmaxsum)?maxsum:cmaxsum;
            
            cminsum=(cminsum+arr[i]<arr[i])?cminsum+arr[i]:arr[i];
            minsum=(minsum<cminsum)?minsum:cminsum;
            
            tsum = tsum + arr[i];
            
        }
        int nrmlsum = maxsum; 
        int cirsum = tsum - minsum;
        if(minsum == tsum)
           return nrmlsum;
        return (nrmlsum>cirsum)?nrmlsum:cirsum;   
    }
};
