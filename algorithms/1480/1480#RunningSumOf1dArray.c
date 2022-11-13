int* runningSum(int* nums, int numsSize, int* returnSize){
    int sum = 0;
    int *ans = malloc(sizeof(int)*numsSize);
    
    for (int i = 0;i<numsSize;i++){
        sum+=nums[i];
        ans[i]=sum;
    }
    
    *returnSize=numsSize;
    return ans;
}
