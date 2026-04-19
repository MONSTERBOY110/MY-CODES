class kQueues {
  public:
  int cnt, nn;
  vector<queue<int>>vq;
    kQueues(int n, int k) {
        cnt=0; nn=n;
        vq.resize(k);
    }

    void enqueue(int x, int i) {
        vq[i].push(x);
        cnt++;
    }

    int dequeue(int i) {
        if(vq[i].size()){
            int xx=vq[i].front(); vq[i].pop();
            cnt--; return xx;
        }
        return -1;
    }

    bool isEmpty(int i) {
       return !vq[i].size();
    }

    bool isFull() {
        return cnt==nn;
    }
};
