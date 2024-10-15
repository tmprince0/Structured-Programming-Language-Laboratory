#include<stdio.h>
int main()
{
    int N,sum=0,i;
    printf("Enter the last number of the series= ");
    scanf("%d",&N);
    printf("1+2+3+......+%d",N);
    for(i=1;i<=N;i++)
    {
        sum=sum+i; //sum=1,3,6
    }
    printf("=%d\n",sum);
    getch();
}
