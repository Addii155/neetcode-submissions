class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
         vector<int>ans;
         int n = arr.size();
        //  int ans=0;
         for(int i=0;i<n;i++)
         {
            int c=0;
            int j = i+1;
            while(j<n && arr[i]>=arr[j]) j++;
            if(j<n)
            ans.push_back(j-i);
            else ans.push_back(0);
            
         }
         return ans;
    } 
};
