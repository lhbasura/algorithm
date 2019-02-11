
#include <math.h>
#include<iostream>
#define INF 0xfff
using namespace std;

int t=0;
int bord[INF][INF];
void chess_bord(int tr,int tc,int dr,int dc,int size)
{
    if (size==1)
    {
        return;
    }
    t++;
    int s=size/2;
    int er=tr+s;
    int ec=tc+s;
    if(dr<er&&dc<ec)//左上
    {
        bord[er][ec]=t;
        bord[er-1][ec]=t;
        bord[er][ec-1]=t;
        chess_bord(tr,tc,dr,dc,s);//左上
        chess_bord(tr+s,tc,er,ec-1,s);//右上
        chess_bord(tr,tc+s,er-1,ec,s);//左下

        chess_bord(er,ec,er,ec,s);//右下
    }
    if(dr>=er&&dc<ec)//右上
    {
        bord[er][ec]=t;
        bord[er-1][ec]=t;
        bord[er-1][ec-1]=t;
        chess_bord(tr,tc,er-1,ec-1,s);//左上
        chess_bord(tr+s,tc,dr,dc,s);//右上
        chess_bord(tr,tc+s,er-1,ec,s);//左下
        chess_bord(er,ec,er,ec,s);//右下
    }
    if(dr<er&&dc>=ec)//左下
    {
        bord[er-1][ec-1]=t;
        chess_bord(tr,tc,er-1,ec-1,s);//左上
        bord[er][ec-1]=t;
        chess_bord(tr+s,tc,er,ec-1,s);//右上

        chess_bord(tr,tc+s,dr,dc,s);//左下
        bord[er][ec]=t;
        chess_bord(er,ec,er,ec,s);//右下
    }
    if(dr>=er&&dc>=ec)//右下
    {
        bord[er-1][ec-1]=t;
        chess_bord(tr,tc,er-1,ec-1,s);//左上
        bord[er][ec-1]=t;
        chess_bord(tr+s,tc,er,ec-1,s);//右上

        bord[er-1][ec]=t;
        chess_bord(tr,tc+s,er-1,ec,s);//左下
        chess_bord(er,ec,dr,dc,s);
    }
}
int main()
{
    int size,k,x,y;
    cin>>k;
    cin>>x>>y;
    size=pow((float)2,k);
    if(size%4!=0)
    {
        cout<<"your enter must be mutiple of four";
        return 0;
    }
    int col=x-1,row=y-1;
    bord[col][row]=0;
    chess_bord( 0, 0, col, row, size);
    for(int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            cout<<bord[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

