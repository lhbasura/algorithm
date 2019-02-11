#include <iostream>
using namespace std;
int C(int n,int m)
{

    if(m>n-m)
    {
       m=n-m;
    }
    if(m==0)
        return 1;
    int s=n/m;
    for(int i=1;i<m;i++)
    {
        s*=n-i;
        s/=i;
    }
    return s;
}
void yanghui_triangle(int n)
{
    int space_num=n-1;
    for(int row=1;row<=n;row++)
    {
        for(int k=1;k<=space_num;k++)
        {
            cout<<" ";
        }
        space_num--;
        for(int col=1;col<=row;col++)
        {
            cout<<C(row-1,col-1)<<" ";
        }
        cout<<endl;
    }
}
int main() {
    yanghui_triangle(30);
    return 0;
}