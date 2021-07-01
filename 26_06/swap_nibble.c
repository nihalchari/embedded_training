
#include<stdio.h>

unsigned char swap_nibble(unsigned char ch)
{
  return((ch & 0x0F) << 4 | (ch & 0xF0) >> 4);
}

int main(void)
{
 
  unsigned int char x = 1;
  printf("%u\n", swap_nibble(ch));
  return 0;
}


/*output
16


1 =  0000 0001
16 = 0001 0000
*/
