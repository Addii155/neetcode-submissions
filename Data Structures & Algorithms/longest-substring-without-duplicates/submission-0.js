class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
       let n = s.length;
        let mp = new Map();
        let ans = 0;
        let left = 0;

        for (let right = 0; right < n; right++) {

            while (mp.has(s[right])) {
                mp.delete(s[left]);
                left++;
            }

            mp.set(s[right], true);

            ans = Math.max(ans, right - left + 1);
        }

        return ans;
    }
}
