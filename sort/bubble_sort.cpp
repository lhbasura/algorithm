//
// Created by cust on 17-4-10.
//
#include "sort.h"
void bubble_sort(int *a,int len)
{
    int temp;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
