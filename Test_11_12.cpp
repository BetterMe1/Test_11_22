#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
/*����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ������������

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�*/
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
