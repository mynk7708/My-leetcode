class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        vector<int>cnt(2001,0);
        int m=cnt.size();
        for(int i=0;i<n;i++){
            cnt[arr[i]+1000]++;
        }
        sort(cnt.begin(),cnt.end());
        for(int i=1;i<m;i++){
            if(cnt[i]>0 && cnt[i]==cnt[i-1]){
                return false;
            }
            }
        
        return true;
    }
};