#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void) 
{
    int dwarf[9];
    int isFound = 0;
    int result[7];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &dwarf[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            int sum = 0;

            for (int k = 0, index = 0; k < 9; k++)
            {
                if (k != i && k != j) 
                {
                    sum += dwarf[k];
                    result[index++] = dwarf[k];
                }
            }

            if (sum == 100) 
            {
                bubbleSort(result, 7);

                for (int k = 0; k < 7; k++) 
                {
                    printf("%d\n", result[k]);
                }
                isFound = 1;
                break;
            }
        }

        if (isFound == 1) 
        {
            break;
        }
    }

    return 0;
}