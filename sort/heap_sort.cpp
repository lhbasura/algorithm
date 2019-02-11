//
// Created by cust on 17-4-10.
//

#include "sort.h"
int left(int i)
{
    return 2*(i+1)-1;
}
int right(int i)
{
    return 2*(i+1);
}
int parent(int i)
{
    return (i+1)/2-1;
}
void heap_max(int *a,int index,int size) {
    int l = left(index);
    int r = right(index);
    if(l>=size||r>=size)
    {
        return;
    }
    int largest=a[l]>a[r]?l:r;
    largest=a[index]>=a[largest]?index:largest;
    if(largest!=index) {
        swap(a[index], a[largest]);
        heap_max(a,largest,size);
    }
}
void build_heap(int *a,int len)
{
    for(int i=len/2-1;i>=0;i--)
    {
       heap_max(a,i,len);
    }
}
void heap_sort(int *a,int len)
{
   int size=len;
    build_heap(a,len);
    for(int i=len-1;i>=1;i--)
    {
        swap(a[i],a[0]);
        size--;
        heap_max(a,0,size);
    }
}
