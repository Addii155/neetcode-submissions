#include<bits/stdc++.h>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};
