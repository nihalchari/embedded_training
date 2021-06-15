/*  To find sum of digits until sum reduces to single digit*/

#include <stdio.h>

int sum(int num)
{
    if(num < 10)
    {
        return num;
    }
    
    int res =0;
    int rem=0;
    while (1)
    {
        while(num)
        {
            rem = num%10;
            res = res + rem;
            num = num/10;
        }
        if(res>9)
        {
            num = res;
            res=0;
        }
        else
        {
            break;
        }
        
    }
    return res;
}

int main()
{
    printf("sum = %d\n", sum(1235));
    return 0;
}
