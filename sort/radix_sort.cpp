//
// Created by lhb on 2017/9/13.
//
#define  INF 0xff
#include "sort.h"
int  get_digit(int x,int index)
{
    int s=1;
    for(int i=1;i<index;i++)
    {
       s*=10;
    }
    return  (x/s)%10;
}
int c[10][INF];
void radix_sort(int *a,int len,int high) {
    for(int i=1;i<=high;i++)
    {
        for(int j=0;j<len;j++)
        {
            int digit=get_digit(a[j],i);
            int k=++c[digit][0];
            c[digit][k]=a[j];
        }
        for(int p=0,v=0;p<10;p++)
        {
            for(int k=1;k<=c[p][0];k++)
            {
               a[v++]=c[p][k];
            }
            c[p][0]=0;
        }
    }
}
