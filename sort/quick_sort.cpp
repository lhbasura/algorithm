//
// Created by cust on 17-4-10.
//

#include "sort.h"
#include <iostream>
using namespace std;
int partition(int *a,int p,int r)
{
    int i=p-1;
    int x=a[r];
    for(int j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
           i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[r],a[i+1]);
    return i+1;
}
void quick_sort(int a[],int p,int r)
{
   if(p<r)
   {
       int q=partition(a,p,r);
       quick_sort(a,p,q-1);
       quick_sort(a,q+1,r);
   }
}