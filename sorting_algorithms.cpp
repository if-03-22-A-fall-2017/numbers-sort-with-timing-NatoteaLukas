/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdio.h>
#include <stdlib.h>

void init_random(int* small_array, int size)
{
  for (int i = 0; i < size; i++)
  {
      small_array[i] = rand();
  }
}
void bubble_sort(int* small_array, int size)
{
  int temp = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if(small_array[i] < small_array[j])
      {
        temp = small_array[i];
        small_array[i] = small_array[j];
        small_array[j] = small_array[i];
      }
    }
  }
}
void insertion_sort(int* small_array, int size)
{
  for (int i = 1; i < size; i++)
   {
       int number = small_array[i];
       int j = i-1;
       while (j >= 0 && small_array[j] > number)
       {
           small_array[j+1] = small_array[j];
           j = j-1;
       }
       small_array[j+1] = number;
   }
}
