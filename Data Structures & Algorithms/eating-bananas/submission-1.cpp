class Solution {
public:
    bool check(vector<int>&ans,int m,int& h)
    {
        int c=0;
        for(auto it:ans){
            c+=it/m;
            if(it%m)
            {
                c++;
            }
            if(c>h) return false;
        }
        return c<=h;
    }
    int minEatingSpeed(vector<int>& arr, int h) {
        int n = arr.size();
        int i = 1;
        int mx = INT_MIN;
        for(auto it:arr)
        {
            mx=max(it,mx);
        }
        int j=mx;
        int ans=INT_MAX;
        while(i<=j)
        {
            int m = i + (j-i)/2;
            if(check(arr,m,h))
            {
                j=m-1;
                ans= min(ans,m);
            }
            else{
                i=m+1;
            }
        }
        return ans;
    }
};
