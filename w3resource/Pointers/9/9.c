#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    not my code. come back to this soon.
    */
    int i,n;
    float *element;
	printf("\n\n Pointer : Find the largest element using Dynamic Memory Allocation :\n");
	printf("-------------------------------------------------------------------------\n");
    printf(" Input total number of elements(1 to 100): ");
    scanf("%d",&n);
    element=(float*)calloc(n,sizeof(float));  // Memory is allocated for 'n' elements
    if(element==NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
       printf(" Number %d: ",i+1);
       scanf("%f",element+i);
    }
    for(i=1;i<n;i++)
    {
       if(*element<*(element+i)) {  //woah, what happened ?!
           *element=*(element+i);
       }
    }
    printf(" The Largest element is : %.2f \n\n",*element);
    return 0;
}
