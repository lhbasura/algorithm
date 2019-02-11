#include<iostream>
using namespace std;
struct subarr
{
    int begin;
    int end;
    int sum;
};
subarr max(subarr a,subarr b,subarr c)
{
    subarr m=a.sum>b.sum?a:b;
    m=c.sum>m.sum?c:m;
    return m;
}

subarr max_cross(int *a,int left,int mid,int right) {
    int begin = mid, end = mid + 1;
    int max_left = a[mid];
    int  max_right = a[mid + 1];
    int sum=0;
    for (int i = mid; i >= left; i--) {
        sum += a[i];
        if (sum> max_left) {
            max_left = sum;
            begin = i;
        }
    }
    sum=0;
    for (int i = mid + 1; i <= right; i++) {
        sum += a[i];
        if (sum > max_right) {
            max_right = sum;
            end=i;
        }
    }
    subarr ml={begin,mid,max_left};
    subarr mr={mid+1,end,max_right};
    subarr mcross={begin,end,max_left+max_right};
    return max(ml,mr,mcross);
}
subarr find_max_subarr(int *a,int low,int high)
{
   if(high==low)
   {
       return subarr{low,high,a[low]};
   }
    else{
       int mid=(low+high)/2;
       subarr l_arr=find_max_subarr(a,low,mid);
       subarr r_arr=find_max_subarr(a,mid+1,high);
       subarr cross_arr=max_cross(a,low,mid,high);
       return  max(l_arr,r_arr,cross_arr);
   }
}
int main() {
    int a[] = {1, -2, 3, 10, -4, 7, 2, -5};
    subarr subarr1 = find_max_subarr(a, 0, sizeof(a) / sizeof(int) - 1);
    cout << subarr1.sum << ":" << endl;
    for (int i = subarr1.begin; i <= subarr1.end; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
