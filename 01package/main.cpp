//#include<iostream>
//using namespace std;
//#define  V 1500
//unsigned int f[V];//全局变量，自动初始化为0
//unsigned int weight[10];
//unsigned int value[10];
//#define  max(x,y)   (x)>(y)?(x):(y)
//int main()
//{
//
//    int N,M;
//    cin>>N;//物品个数
//    cin>>M;//背包容量
//    for (int i=1;i<=N; i++)
//    {
//        cin>>weight[i]>>value[i];
//    }
//    for (int i=1; i<=N; i++)
//        for (int j=1; j<=M; j++)
//        {
//            if (weight[i]<=j)
//            {
//                f[j]=max(f[j],f[j-weight[i]]+value[i]);
//            }
//        }
//
//    cout<<f[M]<<endl;//输出最优解
//
//}
#include <iostream>
using namespace std;
#define INF 0xfff
int f[INF];
int w[INF];
int v[INF];
int n;//n件物品
int C;//容量
int max(int a,int b)
{
    return  a>b?a:b;
}

int main() {
//    cin>>n;
//    cin>>C;
//
//    for(int i=1;i<=n;i++)
//    {
//        cin>>w[i]>>v[i];
//    }
//    int j=C;
//    for(int i=1;i<=n;i++)
//    {
//     //   for(int j=C;j>=1;j--)
//      //  {
//            if(w[i]<=j)
//            {
//                f[j]=max(f[j],f[j-w[i]]+v[i]);
//            }
//       // }
//    }
//    cout<<f[C];
//
//
    return 0;
}
//#include<iostream>
//using namespace std;
//#define  V 1500
//unsigned int f[V];//全局变量，自动初始化为0
//unsigned int weight[10];
//unsigned int value[10];
//#define  max(x,y)   (x)>(y)?(x):(y)
//int main()
//{
//
//    int N,M;
//    cin>>N;//物品个数
//    cin>>M;//背包容量
//    for (int i=1;i<=N; i++)
//    {
//        cin>>weight[i]>>value[i];
//    }
//    for (int i=1; i<=N; i++)
//        for (int j=M; j>=1; j--)
//        {
//            if (weight[i]<=j)
//            {
//                f[j]=max(f[j],f[j-weight[i]]+value[i]);
//            }
//        }
//
//    cout<<f[M]<<endl;//输出最优解
//
//}
//#include<iostream>
//using namespace std;
//#define  V 1500
//unsigned int f[V];//全局变量，自动初始化为0
//unsigned int weight[10];
//unsigned int value[10];
//#define  max(x,y)   (x)>(y)?(x):(y)
//int main()
//{
//
//    int N,M;
//    cin>>N;//物品个数
//    cin>>M;//背包容量
//    for (int i=1;i<=N; i++)
//    {
//        cin>>weight[i]>>value[i];
//    }
//    for (int i=1; i<=N; i++)
//        for (int j=M; j>=1; j--)
//        {
//            if (weight[i]<=j)
//            {
//                f[j]=max(f[j],f[j-weight[i]]+value[i]);
//            }
//        }
//
//    cout<<f[M]<<endl;//输出最优解
//
//}