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
 * @file stats.h
 * @brief Header file for stats.c
 *
 * Includes function declarations for
 * print_statistics();
 * print_array();
 * find_median();
 * find_mean();
 * find_maximum();
 * find_minimum();
 * sort_array();
 *
 * @author Ayesha Naikodi
 * @date 05/16/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints statistics obtained for an input unsigned char dataset
 *
 * This function prints the minimum, maximum, mean, and median of the input unsigned char dataset given its length. The function calls various other functions to calculate the statistical data.
 *
 * @param unsigned char *array: Pointer to a dataset <add description here>
 * @param unsigned int length: Number of items in dataset
 *
 * @return No return. Prints results to the screen.
 */

 void print_statistics(unsigned char *array, unsigned int length);

 /**
  * @brief Prints the input unsigned char array to the screen
  *
  * This function takes the unsigned char array as input along with the number of items in the array and prints the array to the screen.
  *
  * @param unsigned char *array: Pointer to a dataset <add description here>
  * @param unsigned int length: Number of items in dataset
  *
  * @return No return. Prints results to the screen.
  */

 void print_array(unsigned char *array, unsigned int length);

 /**
  * @brief Computes the median of an input dataset
  *
  * This function calculates the median of the input dataset array given the number of items in the array and returns it
  *
  * @param unsigned char *array: Pointer to a dataset <add description here>
  * @param unsigned int length: Number of items in dataset
  *
  * @return unsigned char: Median of the dataset
  */

 unsigned char find_median(unsigned char *array, unsigned int length);

 /**
  * @brief Computes the mean of an input dataset
  *
  * This function calculates the mean of the input dataset array given the number of items in the array and returns it
  *
  * @param unsigned char *array: Pointer to a dataset <add description here>
  * @param unsigned int length: Number of items in dataset
  *
  * @return unsigned char: Mean of the dataset
  */

 unsigned char find_mean(unsigned char *array, unsigned int length);

 /**
  * @brief Finds the maximum of an input dataset
  *
  * This function identifies the maximum of the input dataset array given the number of items in the array and returns it
  *
  * @param unsigned char *array: Pointer to a dataset <add description here>
  * @param unsigned int length: Number of items in dataset
  *
  * @return unsigned char: Maximum of the dataset
  */

 unsigned char find_maximum(unsigned char *array, unsigned int length);

 /**
  * @brief Finds the minimum of an input dataset
  *
  * This function identifies the minimum of the input dataset array given the number of items in the array and returns it
  *
  * @param unsigned char *array: Pointer to a dataset <add description here>
  * @param unsigned int length: Number of items in dataset
  *
  * @return unsigned char: Minimum of the dataset
  */

 unsigned char find_minimum(unsigned char *array, unsigned int length);

 /**
  * @brief Sorts the array from largest to smallest
  *
  * This function sorts the input array from its largest item to smallest given its length. The largest item is stored in array[0] and the smallest in array[length-1]. It changed the input array and doesn't return anything.
  *
  * @param unsigned char *array: Pointer to a dataset <add description here>
  * @param unsigned int length: Number of items in dataset
  *
  * @return No return. Prints results to the screen.
  */

 void sort_array(unsigned char *array, unsigned int length);

#endif /* __STATS_H__ */
