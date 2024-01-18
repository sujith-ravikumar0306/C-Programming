//DYNMAIC MEMORY ALLOCATION IN C:-

/*

//malloc()

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,*ptr;
    printf("Enter the no of integers you want to store:");
    scanf("%d",&n);

    ptr=(int*)malloc((sizeof(int))*n);

    printf("\nEnter the integers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));    //no need to use ampersand as "ptr" itself deals with address
    }
    printf("\nThe integers are:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(ptr+i));//should use "*" to dereference the address to get its content.
    }
    free(ptr);
}



//calloc()

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr=NULL,n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    ptr= (int*)calloc(n,sizeof(int));      //contiguous memory allocation

    printf("\nElements initialized by default: (Note: Addresses are randomly generated from heap for each run)");
    for(i=0;i<n;i++){
        printf("\nAddress: %d ,",ptr+i);        //randomly generated as the memory is freed after usage
        printf("content:%d",*(ptr+i));          //initialize to zero by default.
    }

    printf("\nEnter integers:");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }

    printf("\nElements entered: (Note: Addresses are randomly generated from heap for each run)");
    for(i=0;i<n;i++){
        printf("\nAddress: %d ,",ptr+i);        //randomly generated as the memory is freed after usage
        printf("content:%d",*(ptr+i));
    }
    free(ptr);      //frees the memory in heap ,created with calloc()
    printf("\nMemory allocated is free now.");
}



//realloc()

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr=NULL,i,n1,n2,n3;
    printf("Enter total no. of integers:");
    scanf("%d",&n1);
    ptr=calloc(n1,sizeof(int));

    printf("\nEnter elements:");
    for(i=0;i<n1;i++){
        scanf("%d",ptr+i);
    }
    printf("\nElements entered: (Note: Addresses are randomly generated from heap for each run)");
    for(i=0;i<n1;i++){
        printf("\nAddress: %d ,",ptr+i);        //randomly generated as the memory is freed after usage
        printf("content:%d",*(ptr+i));
    }

    //extending the memory
    printf("\nEnter a larger size than previous to reallocate memory:");
    scanf("%d",&n2);
    if(n2<=n1){
        printf("Enter a larger number!");
    }
    else
    {
        ptr=realloc(ptr,n2*sizeof(int));
        printf("\nReallocated memory:(extended memory)");
        for(i=0;i<n2;i++){
        printf("\nAddress: %d ,",ptr+i);        //randomly generated as the memory is freed after usage
        printf("content:%d",*(ptr+i));
        }
    }

    //shrinking of memory
    printf("\nEnter a smaller size than previous to reallocate memory:");
    scanf("%d",&n3);
    if(n3>=n2){
        printf("Enter a smaller number!");
    }
    else
    {
        ptr=realloc(ptr,n3*sizeof(int));
        printf("\nReallocated memory:(shrinked memory)");
        for(i=0;i<n3;i++){
        printf("\nAddress: %d ,",ptr+i);        //randomly generated as the memory is freed after usage
        printf("content:%d",*(ptr+i));
        }
    }

    //accessing the element even after shrinking by reallocation
    printf("\n\nAccessing the 3rd element after shrinkage=%d",*(ptr+2));

    printf("\n\nptr before free(): %d",ptr);                  //base address
    printf("\ncontent of ptr before free(): %d",*(ptr));    //ptr[0]

    free(ptr);
    printf("\n\nMemory has been cleared!");

    printf("\n\nptr after free(): %d",ptr);                   //base address
    printf("\ncontent of ptr after free(): %d",*(ptr));     //garbage value

    ptr=NULL;
    printf("\n\nptr after initialized as NULL: %d",ptr);                   //it is pointing address '0'.
    printf("\ncontent of ptr after initialized as NULL: %d",*(ptr));     //dereferencing an unreferenceable address.

}

*/

// Memory leak in c - the exhaust of heap memory due to improper use of dynamic memory allocation that may lower performance
                    //  of the system if not handled properly (clearing memory after using).

#include<stdio.h>
#include<stdlib.h>


void main()
{
    int ch=1;
    int *ptr;
    while(ch){
        printf("Memory leak example:\n");
        ptr=(int*)malloc(500000*sizeof(int));
        printf("Enter \'0\' to exit and any number to continue:");
        scanf("%d",&ch);
        free(ptr);
        //the above line will prevent the memory leak in each time the loop runs.
    };
    printf("Exited successfully!");
}








































































