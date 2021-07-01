#include <stdio.h>

int get_bits(int num, int pos, int num_of_bits)
{
    int mask_len = (1 << num_of_bits) - 1;
    //printf("mask_len %d\n", mask_len);
    int mask = mask_len << pos;
    //printf("mask %d\n", mask);
    num = num & mask;
    //printf("num %d\n", num);
    num = num >> pos;
    return num;
}


int set_bits(int num, int pos, int num_of_bits)
{
        int mask_len = (1 << num_of_bits) - 1;
    //printf("mask_len %d\n", mask_len);
    int mask = mask_len << pos;
    //printf("mask %d\n", mask);
    num = num | mask;
    //printf("num %d\n", num);
    return num;
}

void print_bits(int num)
{
    if(num ==0)
    return;
    
    print_bits(num/2);
    printf("%d", (num%2));
}

int main()
{
    int num=0, pos=0, num_of_bits=0;
    
    printf("Enter number\n");
    scanf("%d",&num);
    printf("Enter position\n");
    scanf("%d",&pos);
    printf("Enter num of bits from position\n");
    scanf("%d",&num_of_bits);
    
   // num = get_bits(num,pos,num_of_bits);
    
    num = set_bits(num,pos,num_of_bits);

    print_bits(num);
    return 0;
}



/* Output
for set_bit
Enter number
6
Enter position
1
Enter num of bits from position
3
1110


Enter number
0
Enter position
1
Enter num of bits from position
2
110


for get_bits


Enter number
31
Enter position
1
Enter num of bits from position
3
111


Enter number
65
Enter position
4
Enter num of bits from position
3
100

*/
