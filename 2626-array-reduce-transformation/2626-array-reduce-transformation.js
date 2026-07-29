/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let currsum=init;
    for(let i=0;i<nums.length;i++){
        currsum=fn(currsum,nums[i]);
    }
    return currsum;
};