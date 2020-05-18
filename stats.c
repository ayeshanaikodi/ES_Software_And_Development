/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Performs statistical analysis on an array of unsigned char data items
 *
 * Finds the maximum, minimum, mean, and median of a data set of unsigned char.
 * Sorts the dataset from largest to smallest
 *
 * @author Ayesha Naikodi
 * @date 05/16/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test, SIZE);
  print_statistics(test, SIZE);
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *array, unsigned int length)
{
  printf("Mean is: %d \n",find_mean( array, length));
  printf("Median is: %d \n",find_median( array, length));
  printf("Maximum is: %d \n",find_maximum( array, length));
  printf("Minimum is: %d \n",find_minimum( array, length));


}


void print_array(unsigned char *array, unsigned int length)
{
  int count = 0;
  printf("Array is: \n");
  for(int i=0; i < length; i++)
  {
    printf("%d\t", *(array+i));
    count++;
    if(count == 10)
    {
      printf("\n");
      count = 0;
    }
  }

  printf("\n");

}

unsigned char find_median(unsigned char *array, unsigned int length)
{
  if(length%2 == 0)
  {
    return (*(array+(length/2)) + *(array+(length/2)-1))/2;
  }
  else
  {
    return *(array + ((length-1)/2));
  }

}

unsigned char find_mean(unsigned char *array, unsigned int length)
{
  unsigned int average = 0;
  if(length <=0)
  {
    length = 1;
  }

  for(int i=0; i<length; i++)
  {
    average += *(array+i);
  }

  average /= length;
  return (unsigned char)average;

}

unsigned char find_maximum(unsigned char *array, unsigned int length)
{
  return *(array);

}

unsigned char find_minimum(unsigned char *array, unsigned int length)
{
  return *(array + length -1);
}


void sort_array(unsigned char *array, unsigned int length)
{
  unsigned char temp = 0;

  for(int j=0; j<length; j++)
  {
  for(int i=0; i<(length-1); i++)
  {
    if(*(array+i) < *(array+i+1))
    {
      temp = *(array+i);
      *(array+i) = *(array+i+1);
      *(array+i+1) = temp;
    }

  }
  }

}
