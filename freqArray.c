#include<stdio.h>

int main()
{
    int arr[100], count[100];
    int size, i, j, ch;


    printf("Enter size of array: ");
    scanf("%d", &size);


    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);


        count[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        ch = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                ch++;


                count[j] = 0;
            }
        }


        if(count[i] != 0)
        {
            count[i] = ch;
        }
    }


    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(count[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], count[i]);
        }
    }

    return 0;
}
