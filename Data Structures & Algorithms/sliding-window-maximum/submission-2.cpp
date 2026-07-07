class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        int j=0;
        if(k==1) return arr;
        int mx=INT_MIN;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,arr[i]);
            if((i-j+1)>k)
            {
                int temp = arr[j];
                if(mx==temp)
                {
                    mx=INT_MIN;
                    
                    for(int left = j+1 ; left<=i;left++)
                    {
                        mx=max(mx,arr[left]);
                    }
                    j++;
                }else j++;
            }
            if((i-j+1)==k)
            ans.push_back(mx);
        }
        return ans;
    }
};
