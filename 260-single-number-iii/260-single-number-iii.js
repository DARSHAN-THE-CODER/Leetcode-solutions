/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function(nums) {
    
    let obj={}
    let arr=[]
    
    for(let i=0;i<nums.length;i++)
    {
        obj[nums[i]] ? obj[nums[i]]++ : obj[nums[i]]=1;
    }
    for(let j=0;j<nums.length;j++)
    {
        if(arr.length==2)
            {
                return arr;
            }
        if(obj[nums[j]]==1)
            arr.push(nums[j])

    }
    return arr
};