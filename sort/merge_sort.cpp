//
// Created by cust on 17-4-10.
#include "sort.h"
void merge_arr(int *a,int *temp,int left,int mid,int right)
{
    int i=left;
    int k=0;
    int j=mid+1;
    while (j<=right&&i<=mid) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i<=mid)
        temp[k++]=a[i++];
    while (j<=right)
        temp[k++]=a[j++];
    for(i=0;i<k;i++)
    {
        a[left+i]=temp[i];
    }
}
void merge_sort(int *a,int left,int right,int*temp)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        merge_sort(a,left,mid,temp);
        merge_sort(a,mid+1,right,temp);
        merge_arr(a,temp,left,mid,right);
    }
}
