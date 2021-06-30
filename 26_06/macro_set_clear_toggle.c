///@brief write a MACRO to clear set and toggle a bit

#include <stdio.h>

#define MASK 1
#define CLEAR(num, pos) (num = (num & ~(1 << pos)))
#define SET(num, pos) (num = (num | (1 << pos)))
#define TOGGLE(num, pos) (num = (num ^ (1 << pos)))

int main()
{
    unsigned int x =0x87654321;
    
    CLEAR(x,0);
    printf("%x\n",x);
    
    SET(x,0);
    printf("%x\n",x);
    
    TOGGLE(x,0);
    printf("%x\n",x);
    
    TOGGLE(x,0);
    printf("%x\n",x);
    
    return 0;    
}


/*output 
  87654320
  87654321
  87654320
  87654321
*/
