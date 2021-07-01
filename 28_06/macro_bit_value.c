#include<stdio.h>

#define BIT_VALUE(n, p)  ((((1 << p) & n) != 0) ? 1 : 0)
///@brief program to print value to bit in given number

int main()
{
    int num=0, bit_pos=0;
    
    printf("Enter number\n");
    scanf("%d",&num);
    printf("Enter bit position\n");
    scanf("%d",&bit_pos);
    
    if(BIT_VALUE(num,bit_pos) == 1)
    {
        printf("Bit value at position %d is 1",bit_pos);
    }
    else{
        printf("Bit value at position %d is 0",bit_pos);
    }
    
    return 0;
}


/*
Enter number
7
Enter bit position
3
Bit value at position 3 is 0

Enter number
7
Enter bit position
2
Bit value at position 2 is 1

*/
