#include <iostream>
using namespace std;
int partition(int *a,int p,int r)
{
    int j=p;
    int i=j-1;
    int x=a[r];
    for(;j<r;j++)
    {
        if(a[j]<x)
        {
           i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[r],a[i+1]);
    return  i+1;
}
void quick_sort(int *a,int p,int r)
{
   if(p<r)
   {
       int q=partition(a,p,r);
       quick_sort(a,q+1,r);
       quick_sort(a,p,q-1);
   }
}

void max_n(int *a,int p,int r,int n) {
    int q = partition(a, p, r);
    if (q == n) {
        return;
    }
    if (q < n) {
        max_n(a, q + 1, r,n);
    }
    if (q > n) {
        max_n(a, p, q - 1,n);
    }
}
bool isHuiWen(int x)
{
    int tmp=0;
    while(x>tmp)
    {
        tmp=tmp*10+x%10;
        if(tmp==0)return  false;
        x/=10;
    }
    return (tmp==x)||(tmp/10==x);
}
int main() {
 //   int x;
  //  cin>>x;
    cout<<61%9;

    return 0;
}
