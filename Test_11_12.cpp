#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
/*给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的两个整数。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。*/
int* twoSum(int nums[], int numsSize, int target){
	int num2[] = { 0, 0 };
	for (int i = 0; i<numsSize; i++){
		for (int j = i + 1; j<numsSize; j++){
			if (nums[i] + nums[j] == target){
				//printf("%d\n", i);
				int num[] = { i, j };
				for (int m = 0; m < 2; m++){
					printf("%d,", num[m]);
				}
				return num;
			}
		}
	}
	for (int m = 0; m < 2; m++){
		printf("%d ", num2[m]);
	}
	return num2;
}
void main(){
	int nums[] = { 2, 7, 11, 15 };
	int target = 9;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	twoSum(nums, numsSize, target);
	system("pause");
}
