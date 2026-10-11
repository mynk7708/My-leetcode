class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long t1=0;
        long long t2=1,nxt=0;
        nxt=t1+t2;
        vector<long long>store;
        
vector<long long>arr(4,0);
        store={0,1,1};
        while(t1+t2<=n){
           t1=t2;
            t2=nxt;
            nxt=t1+t2;
            store.push_back(nxt);
        }
        int m = store.size(); 
        int j = 0;
        for (int i = m - 1; i >= m - 4 && i >= 2 && j < 4; i--) { 
            arr[j] = store[i] + store[i - 1] + store[i - 2]; 
            j++;
        } 
        if (arr[0] == n || arr[1] == n || arr[2] == n || arr[3] == n) {
            return true;
        } else {
            return false;
        }
    }
};