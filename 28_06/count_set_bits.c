///@brief program to find number of set bits

#include <stdio.h>

int count_set_bits(unsigned int num)
{
    
    int count =0;
    
    while(num)
    {
        if(num & 1 == 1)
        {
            ++count;
        }
        num = num >> 1;
    }
    return count;
}

int main()
{
    int bits=0;
    unsigned int num = 0xffffffff;
    bits = count_set_bits(num);
    printf("%d\n",bits);
    
    bits = count_set_bits(0);
    printf("%d\n",bits);
    
    bits = count_set_bits(0x0f0f0f0f);
    printf("%d\n",bits);

}

/* Output
  32
  0
  16
*/
