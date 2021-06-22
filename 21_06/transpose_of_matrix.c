#include <stdio.h>

#define ROW1 2
#define COL1 3
#define ROW2 COL1
#define COL2 ROW1

int main()
{
    int arr1[ROW1][COL1];
    int arr2[ROW2][COL2];
    
    
    printf("Enter Elelemts for %d*%d matrix\n", ROW1,COL1);
    
    for(int i = 0; i < ROW1; ++i)
    {
        for(int j = 0; j < COL1; ++j)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("\nYour matrix  is\n");
    for(int i = 0; i < ROW1; ++i)
    {
        for(int j = 0; j < COL1; ++j)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    
    for(int i = 0; i<ROW2; ++i)
    {
        for(int j=0; j<COL2; ++j)
        {
            arr2[i][j] = arr1[j][i];
        }
    }
    
    
    printf("\nTranspose of matrix  is\n");
    for(int i = 0; i < ROW2; ++i)
    {
        for(int j = 0; j < COL2; ++j)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


/*output

Enter Elelemts for 2*3 matrix
1 
2
3
4
5
6

Your matrix  is
1 2 3 
4 5 6 

Transpose of matrix  is
1 4 
2 5 
3 6 
----------------------------------------------------------------------------

Enter Elelemts for 2*3 matrix
100
200
300
400
500
600

Your matrix  is
100 200 300 
400 500 600 

Transpose of matrix  is
100 400 
200 500 
300 600 

*/
