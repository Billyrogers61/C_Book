#include <stdio.h>
#include "main.h"

void main()
{
    int p[max], n, k, i, j;
    printf("Enter length of array: ");
    scanf("%d", &n);

    //prompt the user to enter elements of the array
    printf("Enter %d elements of the array\n", n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &p[i]);
    }

    //print elements of the array
    printf("\nThe array is:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", p[i]);
    }

    //Prompt user for positon to insert new array element
    printf("\nEnter position where to insert new element: ");
    scanf("%d", &k);
    k--; //The position is always one value higher than the subscript so it is
         //decremented by one

    /* Shifting all the elements of the array one position down from the locationof insertion */
    for (j = n - 1; j >= k; j--)
    {
        p[j + 1] = p[j];
    }
    //Prompt user for the value to insert
    printf("\nEnter the value to insert: ");
    scanf("%d", &p[k]);

    //Print the array after the insertion is complete
    printf("\nArray after insertion of element: \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", p[i]);
    }
}
