#include <stdlib.h>
#include <stdio.h>


int singleNumber(int* nums, int numsSize)
{
   int i = 0;
   int counter = 0;
   int j = 0;
   int num = 0;

   while (i < numsSize) {
      num = nums[i];
      while (j < numsSize) {
         if (num == nums[j])
            counter++;
      j++;
      }
      j = 0;
      if (counter == 1)
         return (num);
      i++;
      counter = 0;
   }
   return (0);
}

int main (void)
{
   int numsSize = 5;
   int *nums =  malloc(sizeof(int) * numsSize);

   nums[0] = 6;
   nums[1] = 3;
   nums[2] = 1;
   nums[3] = 3;
   nums[4] = 6;

   

   return singleNumber(nums, numsSize);
}