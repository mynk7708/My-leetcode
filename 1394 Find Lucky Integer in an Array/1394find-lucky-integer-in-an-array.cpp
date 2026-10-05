class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        vector<int> hash(501,0);
        int maxi=-1;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==hash[arr[i]]){
               maxi= max(maxi,arr[i]);
            }
        }
        return maxi;
    }
};