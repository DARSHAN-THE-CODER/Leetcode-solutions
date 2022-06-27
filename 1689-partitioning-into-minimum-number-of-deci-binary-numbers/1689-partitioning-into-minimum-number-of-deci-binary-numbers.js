/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    let maxn=0;
    if(n.length==1)
        return Number(n)
    else{
        for(let i=0;i<n.length;i++)
            {
                
                if(Number(n[i])>maxn)
                    maxn=Number(n[i])
            }
    }
    return maxn
};