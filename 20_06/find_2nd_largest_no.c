
#include <stdio.h>
#define ARRAY_SIZE  5

int second_largest_element_in_array(int *arr, int elements)
{
    int res =arr[0];
    int max = arr[0];
    int i=1;
    
    while(i < elements)
    {
        if(arr[i]>max)
        {
            res = max;
            max = arr[i];
        }
        else if(arr[i] < max)
        {
            if(max == res)
            {
                res = arr[i];
            }
        }
      
        ++i;
    }
    
    
    if(res == max)
    {
        return -1;
    }
    else
    {
        return res;
    }
}

int main(void)
{
    int arr[ARRAY_SIZE];
    
    printf("Enter %d array elemets\n", ARRAY_SIZE);
    
    for(int i=0; i<ARRAY_SIZE; ++i)
    {
        scanf("%d",&arr[i]);
    }
    
    
    int val = second_largest_element_in_array(arr, ARRAY_SIZE);
    
    if(val == -1)
    {
        printf("All array elements are equal");
    }
    else
    {
        printf("Second largest element in array is %d\n\n",val);
    }
}





/*outputs

Enter 5 array elemets
1
2
3
4
5
Second largest element in array is 4


Enter 5 array elemets
3
3
3
3
3
All array elements are equal


Enter 5 array elemets
2
2
2
3
2
Second largest element in array is 2


Enter 5 array elemets
9
9
9
3
9
Second largest element in array is 3


*/
