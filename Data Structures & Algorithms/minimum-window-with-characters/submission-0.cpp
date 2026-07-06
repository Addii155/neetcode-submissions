class Solution {
public:
    string minWindow(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int a1=-1;
        int a2=-1;
        int ans= INT_MAX;
        if(n<m) return "";
        unordered_map<char,int>mp1,mp2;
        for(auto it:s2)
            mp2[it]++;
        int j=0;
        for(int i=0;i<n;i++)
        {
            mp1[s1[i]]++;
                while(1)
                {
                    bool flag=false;
                    for(auto it:mp2)
                    {
                        if(mp1[it.first]<it.second)
                        {
                            flag=true;
                            break;
                        }
                    }
                    if(!flag) 
                    {
                        mp1[s1[j]]--;
                        if(mp1[s1[j]] == 0)
                        mp1.erase(s1[j]);
                        if((i-j+1)<ans)
                        {
                            ans=i-j+1;
                            a1=j;
                            a2=i;
                        }
                        j++;
                    }else break;
                }

        }
    return a1!=-1 ?  s1.substr(a1,a2-a1+1) : "";
    }
};
