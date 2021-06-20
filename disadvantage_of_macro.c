#include <stdio.h>

#define SQUARE(x) x*x
#define SQUARE_SAFE(x) ((x)*(x))

int main()
{
    int a = 2;
    int b = 2;
   
    printf("%d\n",SQUARE(a));
    printf("%d\n",SQUARE(a+1)); //disadvantage of macro
   
    printf("%d\n",SQUARE_SAFE(b));
    printf("%d\n",SQUARE_SAFE(b+1));
  
    return 0;
}
