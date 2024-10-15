#include <stdio.h>
int main()
{
    int num=2, sum = 12, i =3, j = 7;
    switch(num)
    {
    case 1:
    case 2:
        sum += --j*2;
        i--*j-- + ++i;
    case 3:
        sum = i--*j--;
    case 4:
        sum *= i++/j--;
        i=i%j;
    default:
        break;
    }
    printf("%d %d %d",sum,i,j);
    return 0;
}
