///@brief print bits in character byte without using bitfields.

#include <stdio.h>

union info{
  char ch;
  struct data{
      unsigned a:1;
      unsigned b:1;
      unsigned c:1;
      unsigned d:1;
      unsigned e:1;
      unsigned f:1;
      unsigned g:1;
      unsigned h:1;
  }t;
};


int main()
{
    union info s;
    char ch ='4';
    
    s.ch = ch;
    
    printf("%d%d%d%d%d%d%d%d\n", s.t.h, s.t.g, s.t.f, s.t.e, s.t.d, s.t.c, s.t.b, s.t.a);
    
    //printf("%lu\n",sizeof(s));
    //printf("%c\n",s.ch);;
    
    return 0;    
}



/* ouputs

for ch = '0'  ASCII 48
o/p is 00110000


for ch = 'a'  ASCII 97
o/p is 01100001


for ch = 'A'  ASCII 65
o/p is 01000001
*/


