#include <stdio.h>

#define ROW1 2
#define COL1 3
#define ROW2 COL1
#define COL2 ROW1

int main()
{
    int arr[3][4] = {
                        {10,11,12,13},
                        {20,21,22,23},
                        {30,31,32,33},
                    };
    
    int i=0;
    int j=0;
    
    for(i; i<3;++i)
    {
        printf("Address of %dth array = %p %p\n",i, arr[i], *(arr+i));
        for(j=0; j<4; ++j)
        {
            printf("%d ", arr[i][j]);
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    
    return 0;
}


/*
Address of 0th array = 0x7ffcf7d1d810 0x7ffcf7d1d810
10 10 11 11 12 12 13 13 
Address of 1th array = 0x7ffcf7d1d820 0x7ffcf7d1d820
20 20 21 21 22 22 23 23 
Address of 2th array = 0x7ffcf7d1d830 0x7ffcf7d1d830
30 30 31 31 32 32 33 33 
*?
