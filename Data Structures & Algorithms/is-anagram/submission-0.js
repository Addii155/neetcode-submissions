class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        let freq = new Map();
        let freq1 = new Map();
        for(const i of s)
        {
            freq.set(i, (freq.get(i) || 0 ) +1);
        }
        for(const i of t)
        {
            freq1.set(i,(freq1.get(i) || 0) +1);
        }
           if (freq.size !== freq1.size) return false;
        for (const [key, value] of freq) {
            if (freq1.get(key) !== value) {
                return false;
            }
        }

        return true;
    }
}
