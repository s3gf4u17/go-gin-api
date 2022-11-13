int search(int* nums, int numsSize, int target){
    int min = 0;
    int max = numsSize-1;
    while(max-min>1){
        int mid = (min+max)/2;
        if (nums[mid]==target) return mid;
        if (nums[mid]>target) max = mid-1;
        else min = mid+1;
    }
    if (nums[min]==target)return min;
    if (nums[max]==target)return max;
    return -1;
}
