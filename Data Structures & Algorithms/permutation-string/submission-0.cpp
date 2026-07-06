class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        unordered_map<char,int>mp1,mp2;
        for(auto it:s1)
        {
            mp1[it]++;
        }
        int j=0;
        for(int i=0;i<m;i++)
        {
            mp2[s2[i]]++;
            if((i-j+1)==n)
            {
                bool flag=false;
                for(auto it:mp2)
                {
                    if(mp1[it.first]!=it.second)
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag) return 1;
                 mp2[s2[j]]--;
                if(mp2[s2[j]] == 0)
                    mp2.erase(s2[j]);
                j++;
            }
        }
    return false;
    }
};
