class Solution {
  public:
   int minSteps(vector<int>& arr, int start, int end) {
    // code here
    if(start == end) 
        return 0;
    vector<int> steps(1000, 1e9);
    queue<int> q;
    steps[start] = 0;
    q.push(start);
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        for(int &val: arr) {
            int next = (curr * val) % 1000;
            if(steps[curr] + 1 < steps[next]) {
                steps[next] = steps[curr] + 1;
                if(next == end)
                    return steps[next];
                q.push(next);
            }
        }
    }
   return -1;
   }
};
