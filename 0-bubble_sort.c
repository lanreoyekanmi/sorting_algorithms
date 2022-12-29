#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */ 
void bubble_sort(int *array, size_t size)

{

    for (size_t i = 0; i < size - 1; i++)

    {

        for (size_t j = 0; j < size - i - 1; j++)

        {

            if (array[j] > array[j + 1])

            {

                int temp = array[j];

                array[j] = array[j + 1];

                array[j + 1] = temp;



                // print the array after each swap

                printf("Array after swap: ");

                for (size_t k = 0; k < size; k++)

                {

                    printf("%d ", array[k]);

                }

                printf("\n");

            }

        }

    }

}


