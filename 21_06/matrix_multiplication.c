#include <stdio.h>

#define ROW1 2
#define COL1 3
#define ROW2 COL1
#define COL2 2

int main()
{
    int arr1[ROW1][COL1];
    int arr2[ROW2][COL2];
    int arr3[ROW1][COL2];
    
    printf("Enter Elelemts for %d*%d matrix\n", ROW1,COL1);
    
    for(int i = 0; i < ROW1; ++i)
    {
        for(int j = 0; j < COL1; ++j)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("\nEnter Elelemts for %d*%d matrix\n", ROW2,COL2);
    
    for(int i = 0; i < ROW2; ++i)
    {
        for(int j = 0; j < COL2; ++j)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for(int i = 0; i<ROW1; ++i)
    {
        for(int j = 0; j < COL2; ++j)
        {
            arr3[i][j]=0;
            for(int k=0; k < COL1; ++k)
            {
                arr3[i][j] = arr1[i][k] + arr2[k][j];
            }
        }
    }
    
    printf("\n Resulatant matrix is is\n");
    for(int i = 0; i < ROW1; ++i)
    {
        for(int j = 0; j < COL2; ++j)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


/* output

Enter Elelemts for 2*3 matrix
1
1
1
1
1
1

Enter Elelemts for 3*2 matrix
1
1
1
1
1
1

 Resulatant matrix is is
2 2 
2 2 

----------------------------------------------------------------------------------------------

Enter Elelemts for 2*3 matrix
0
0
0
0
0
0

Enter Elelemts for 3*2 matrix
5
5
5
5
5
5

 Resulatant matrix is is
5 5 
5 5 


*/
