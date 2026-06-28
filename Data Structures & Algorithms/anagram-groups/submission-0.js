class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        let mp = new Map();
        for(let i = 0; i<strs.length;i++)
        {
            let s = strs[i].split("").sort().join("");
            if(mp.has(s))
            {
                mp.get(s).push(strs[i]);
            }
            else mp.set(s,[strs[i]]);
        }
        let ans = [];
        for(let [key,i] of mp)
        {
            ans.push(i);
        }
        return ans;
    }
}
