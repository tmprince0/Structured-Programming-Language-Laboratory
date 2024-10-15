#include<stdio.h>
int main()
{
    int N,sum=0,a=1;
    printf("Enter the last number of the series= ");
    scanf("%d",&N);
    printf("1+2+3+......+%d",N);
    while(a<=N){
        sum=sum+a;
        a=a+1;
    }
    printf("=%d\n",sum);
    getch();
}
