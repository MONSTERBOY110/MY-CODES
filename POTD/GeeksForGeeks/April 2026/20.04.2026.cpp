if(n==1) return 0;
        if(n==2) return 1;
        int x=0,y=1;
        for(int i=3;i<=n;i++){
            int p=(i-1)*(x+y);
            x=y;
            y=p;
        }
        return y;
