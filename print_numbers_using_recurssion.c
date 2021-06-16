#include <stdio.h>

void print_n_to_1(int num)
{
    if(0 == num)
    {
        printf("\n");
        return;
    }
    printf("%d ", num);
    print_n_to_1(num-1);
}

void print_1_to_n(int num)
{
    if(0 == num)
    {
        printf("\n");
        return;
    }
    print_1_to_n(num-1);
       printf("%d ", num);
}


int main()
{
  
  print_1_to_n(5);
  printf("\n");
  print_n_to_1(5);
  
  

    return 0;
}
