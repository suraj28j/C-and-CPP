#include<stdio.h>
#include<conio.h>

void main()
{
    int nums[5] = {1,2,3,4,5};
    int even[] = {2,4};
    int odd[3] = {1,3}; // odd[2] = 0 default value
    printf("%d",even[1]); // 4

    int nums_size = sizeof(nums)/sizeof(nums[0]); // number of array elements
    printf("%d",nums_size);
}
