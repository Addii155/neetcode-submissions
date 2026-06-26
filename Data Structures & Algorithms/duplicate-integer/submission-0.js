class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        nums.sort();
        let n = nums.length;
        for(let i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]) return true;
        }
        return false;
    }
}
