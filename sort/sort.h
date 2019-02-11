//
// Created by cust on 17-4-10.
//

#ifndef ALGORITHM_ALGORITHM_H
#define ALGORITHM_ALGORITHM_H

#endif //ALGORITHM_ALGORITHM_H

#include <iostream>
using namespace std;
//排序
void bubble_sort(int *a,int len);//冒泡排序
void insert_sort(int *a,int len);//插入排序
void merge_sort(int *a,int left,int right,int*temp);//归并排序
void heap_sort(int *a,int len);//堆排序
void quick_sort(int a[],int p,int r);//快速排序
void counting_sort(int *a ,int *b,int len,int max);//计数排序
void radix_sort(int *a,int len,int high);//基数排序

