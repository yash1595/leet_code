/*int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    for(i=0;i<numsSize && (target>nums[i]);i++);
    return i;
}*/

int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    for(i=0;i<numsSize && (target>nums[i]);i++);
    return i;
}