#include <stdio.h>

void SortArray(int Size, int* parr)
{
    int i, j, temp;    

    for (i = 0; i < Size; i++)
    {
        for (j = i + 1; j < Size; j++)
        {
            if(*(parr + j) < *(parr + i))
            {
                temp = *(parr + i);
                *(parr + i) = *(parr + j);
                *(parr + j) = temp;
            }            
        }
    }
    printf("\nSorted Array Elements using Pointer = ");
    for(i = 0; i < Size; i++)
    {
        printf("%d  ", *(parr + i));
    }    
}

int main()
{
    int Size=5;


    int arr[5]={5,4,3,2,1};

    SortArray(Size, arr);   
    printf("\n");    
}
