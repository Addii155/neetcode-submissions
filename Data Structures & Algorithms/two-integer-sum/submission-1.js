class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let mp = new Map();
        for(let i=0; i< nums.length;i++)
        {
            let req = target -  nums[i];
            if(mp.has(req))
            {
                return [mp.get(req),i];
            }
            mp.set(nums[i],i);
        }

    }
}
