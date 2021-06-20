///@brief Left rotate array upto users choice

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

void rotate_array(int *arr, int size, int val)
{
    
    int * ptr = (int *)malloc(sizeof(int)*val);
    int j=0;
    
    for(int i=0; i<val; ++i)
    {
        ptr[i] = arr[i];
    }
    
    
    for(int i = 0; i<val; ++i)
    {
        for(int j=0; j<size-1; ++j)
        {
            arr[j] = arr[j+1];
        }
        
    }
    
    for(int i=0, j= size - val; i<val; ++i, ++j)
    {
        arr[j] = ptr[i];
    }
    
    return;
}


int main(void)
{
    int arr[ARRAY_SIZE];
    int num_of_rotation=0;
    
    printf("Enter %d array elemets\n", ARRAY_SIZE);
    
    for(int i=0; i<ARRAY_SIZE; ++i)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter number of rotations\n");
    scanf("%d",&num_of_rotation);
    
    rotate_array(arr,ARRAY_SIZE,num_of_rotation);

    printf("Array after rotation for %d position\n", num_of_rotation);

    for(int i=0; i<ARRAY_SIZE; ++i)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;

}



/*
outputs

Enter 5 array elemets
1
2
3
4
5
Enter number of rotations
1
Array after rotation for 1 position
2 3 4 5 1 


Enter 5 array elemets
1
2
3
4
5
Enter number of rotations
2
Array after rotation for 2 position
3 4 5 1 2 


Enter 5 array elemets
1
2
3
4
5
Enter number of rotations
3
Array after rotation for 3 position
4 5 1 2 3 

*/
