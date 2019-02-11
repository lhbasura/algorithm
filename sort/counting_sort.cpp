//
// Created by lhb on 2017/9/8.
//

void counting_sort(int *a,int *b,int len,int max)
{
   int *c=new int[max];
   int i;
   for( i=0;i<max;i++)
   {
      c[i]=0;
   }
   for(i=0;i<len;i++)
   {
      c[a[i]]++;
   }
   for(i=1;i<max;i++)
   {
      c[i]+=c[i-1];
   }
   for(i=0;i<len;i++)
   {
       b[c[a[i]]-1]=a[i];
      c[a[i]]--;
   }
}