class Solution {
    /**
     * @param {number[]} numbers
     * @param {number} target
     * @return {number[]}
     */
    twoSum(numbers, target) {
            const mp = new Map();

        for (let i = 0; i < numbers.length; i++) {
            const req = target - numbers[i];

            if (mp.has(req)) {
                return [mp.get(req) + 1, i + 1];
            }

            mp.set(numbers[i], i);
        }

        return [];
    }
}
