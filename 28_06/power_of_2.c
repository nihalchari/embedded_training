#include <stdio.h>

void is_power_of_two(unsigned int num)
{
    int count =0;
    if(num ==1 || num ==0)
    {
        printf("%d is not power of 2\n",num);
        return;
    }
    
    printf("%d", num);
    while(num)
    {
        if(num & 1 == 1)
        {
            ++count;
        }
        
        if(count > 1)
        {
            printf(" is not power of 2\n");
            return;
        }
        num = num >>1;
    }
    
    if(count == 1)
    {
        printf(" is power of 2\n");
    }
    return;
}


int main()
{
    int num =0;
    is_power_of_two(num);
    
    num =1;
    is_power_of_two(num);
    
    num =2;
    is_power_of_two(num);
    
    num =1024;
    is_power_of_two(num);
    
    num =1000;
    is_power_of_two(num);
    
    return 0;    
}

/*
  0 is not power of 2
  1 is not power of 2
  2 is power of 2
  1024 is power of 2
  1000 is not power of 2
*/
