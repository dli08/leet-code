int* twoSum(int* nums, int numsSize, int target)
{
    int *a=(int*)malloc(2*sizeof(int));
    
    for(int i;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
                a[0]=i;
                a[1]=j;
        }
    }
    return a;   
}