
#include <stdio.h>
#define ARRAY_SIZE 5

int is_sorted(int *arr, int elements)
{
    
    for(int i = 1; i<elements; ++i)
    {
        if(arr[i] < arr[i-1])
        {
            return -1;
        }
        
    }
    return 0;
    
}


int main(void)
{
    int arr[ARRAY_SIZE];
    
    printf("Enter %d array elemets\n", ARRAY_SIZE);
    
    for(int i=0; i<ARRAY_SIZE; ++i)
    {
        scanf("%d",&arr[i]);
    }
    
    
    int val = is_sorted(arr, ARRAY_SIZE);
    
    if(val == -1)
    {
        printf("Array is not sorted\n");
    }
    else
    {
        printf("Array is sorted\n");
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
Array is sorted

Enter 5 array elemets
5
4
3
2
1
Array is not sorted



Enter 5 array elemets
1  
1
2
3
3
Array is sorted

Enter 5 array elemets
1
2
3
4
1
Array is not sorted

*/
