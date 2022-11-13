int pivotIndex(int* nums, int numsSize){
// left sum = 0
// right sum = array sum
// for i,num in enumerate(nums)
// if left == right: return 1
// else left+=array[i], right-=array[i]
    int leftsum, rightsum = 0;
    for (int i = 1;i<numsSize;i++){
        rightsum+=nums[i];
    }
    if(leftsum==rightsum) return 0;
    for (int i = 1;i<numsSize;i++){
        leftsum+=nums[i-1];
        rightsum-=nums[i];
        if(leftsum==rightsum) return i;
    }
    return -1;
}
