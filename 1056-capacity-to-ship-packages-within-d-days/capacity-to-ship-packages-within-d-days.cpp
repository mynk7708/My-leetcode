class Solution {
public:
  int maxii(vector<int>& weights) {
        int maxi = INT_MIN;
        for (int i = 0; i <weights.size(); i++) {
            if (weights[i] > maxi) {
                maxi = weights[i];
            }
        }
        return maxi;
    }
    int sumarr(vector<int>& weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
        }
        return sum;
    }
    int function(vector<int>& weights,int capacity){
        int day=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(load + weights[i]>capacity){
                 day = day + 1;
                 load=weights[i];
            }
            else{
                load=load+weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=maxii(weights);
        int high=sumarr(weights);
        while(low<=high){
            int mid=(low+high)/2;
            if(function(weights,mid)<=days)
        high=mid-1;
        
        else
        low=mid+1;
    }
    return low;
    }
};