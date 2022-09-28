#define _CRT_SECURE_NO_WARNINGS

/*
描述
输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
输入描述：
输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含n个整数（范围1~5000），用空格分隔。

输出描述：
输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔。
*/

#include <stdio.h>

//int main() {
//    int n = 0, i = 0, arr[1000] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int cnt = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] != 0 && arr[i] == arr[j])
//            {
//                arr[j] = 0;//重复的先设置成0，后面整体删除
//                cnt++;
//            }
//        }
//    }
//    int slow = 0, fast = 0;
//    while (fast < n)
//    {
//        if (arr[fast] != 0)
//            arr[slow++] = arr[fast++];
//        else
//            fast++;
//    }
//    for (i = 0; i < n - cnt; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}