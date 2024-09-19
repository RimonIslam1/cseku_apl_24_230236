#include<stdio.h>
int main()
{
    int n,a,b,c,count,i;
    scanf("%d",&n);
    count=0;
    for(i=n;i>0;i--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(((a==b)&&(a==1)) || ((b==c)&&(b==1)) ||((c==a)&&(c==1)))
           {
           count++;
        }
    }
    printf("%d\n",count);
    return 0;
 
}