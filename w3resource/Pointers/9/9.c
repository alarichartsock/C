#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ctr;
    int *element;
    printf("Input number of elements (1-100): \n");
    scanf("%i",&ctr);
    element = (int*)calloc(ctr,sizeof(int));  // Memory is allocated for 'n' elements
    if(element==NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    for(int i=0;i<ctr;i++) {
       printf(" Number %d: ",i+1);
       scanf("%i",element+i);
    }
    for(int i=0;i<ctr;++i)
    {
       if(*element<*(element+i))
           *element=*(element+i);
    }
    printf(" The Largest element is :  %i \n\n",*element);

    return 0;
}
