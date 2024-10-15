#include<stdio.h>
int main()
{
    int initialNum,finalNum,temp,r,sum=0,i;
    printf("initial value=");
    scanf("%d",&initialNum);
    printf("final value=");
    scanf("%d",&finalNum);
    for(i=initialNum; i<=finalNum; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("Armstrong Numbers(1-1000)=%d\t",i);
        }
        sum=0;
    }
}
