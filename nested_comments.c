#include <stdio.h>

int main()
{

    printf("Nested Comments demo\n");
    
    /* Outer comment block
        
        // Double line comments are allowed inside block style comments    
        // Introducing another block style comment here inside  will 
        // throw Compile time error
        //fix : use #if 0 - #endif
         
    End of ourter comment block */
    
    #if 0       //change to #if 1
    
        printf("inside #if block\n");
    
    /*
        Comment block
        printf("inside comment block\n");
        // upon changing #if 0 to #if 1, printf statement following #if will execute
    
    */
    
    #endif
    
    
    return 0;
}
