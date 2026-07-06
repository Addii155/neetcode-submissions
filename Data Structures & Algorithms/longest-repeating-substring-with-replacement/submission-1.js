class Solution {
    /**
     * @param {string} s
     * @param {number} k
     * @return {number}
     */
    characterReplacement(s, k) {
        let mp = new Map();
        let a= 0;
        let n = s.length;
        let mx = 0;
        let j=0,i=0;
        while(i<n)
        {
            mp.set(s[i],((mp.get(s[i]) || 0)) +1 );
            mx = Math.max(mx,mp.get(s[i]));
            while(((i-j+1)-mx)>k)
            {
                mp.set(s[j], mp.get(s[j]) - 1);
                
                j++;
            }
            a = Math.max(a,i-j+1);
            i++;
        }
        return a;
    }
}
