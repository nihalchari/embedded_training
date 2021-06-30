///@brief MACRO to find if number is even or odd

#include <stdio.h>

#define EVEN_OR_ODD(x) ((x%2==0) ? 0 : 1)


int main()
{
    int i =2;
    
    if(EVEN_OR_ODD(i))
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    
    return 0;    

}


/* output
  even
*/
