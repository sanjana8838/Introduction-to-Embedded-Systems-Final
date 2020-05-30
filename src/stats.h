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
 * @file Stats Header Files
 * @brief a set of functions that execute instructions on an array are 
 * defined in this file
 *
 * Various functions that perform instructions to print an array, find the
 * maximum and minimum of an array, etc. are defined in this file.
 *
 * @author Sanjana Ramesh
 * @date 05/11/2020
 *
 */
#include <stdio.h>
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief print_array prints the elements of the array
 *
 * This functions takes an array and its length as an input and 
 * proceeds to print the passed array uing a for loop
 *
 * @param array The array to be printed
 * @param n The length of the array
 *
 *
 * @return no value
 */
 
 void print_array(unsigned char array[], int n);
 
 /**
 * @brief find_median computes the median of a passed array
 *
 * This functions takes an array and its length as an input and 
 * proceeds to calculate the median of the elements of the array
 *
 * @param array The array to be printed
 * @param n The length of the array
 *
 *
 * @return the median of the array
 */

float find_median(unsigned char array[], int n);
 		
 /**
 * @brief find_mean calculates the mean of the list of eements in the array
 *
 * This functions takes an array and its length as an input and 
 * proceeds to calculate the median of the elements of the array
 *
 * @param array The array to be printed
 * @param n The length of the array
 *
 *
 * @return the median of the array
 */			
 
 float find_mean(unsigned char array[], int n);
 
 /**
 * @brief find_maximum finds the largest element of the array
 *
 * This functions takes an array and its length as an input and 
 * proceeds to search through the array for the largest value
 *
 * @param array The array to be printed
 * @param n The length of the array
 *
 *
 * @return the largest element of the array
 */	
 
 unsigned char find_maximum(unsigned char array[], int n);
 
 /**
 * @brief find_minimum finds the largest element of the array
 *
 * This functions takes an array and its length as an input and 
 * proceeds to search through the array for the smallest value
 *
 * @param array The array to be printed
 * @param n The length of the array
 *
 *
 * @return the smallest element of the array
 */	
 
unsigned char find_minimum(unsigned char array[], int n);		
 		
 /**
 * @brief sort_array sorts the elements of the array in descending order
 *
 * This functions takes an array and its length as an input and 
 * proceeds to sort the array in descending order
 *
 * @param array The array to be printed
 * @param n The length of the array
 *
 *
 * @return no value
 */	
 
 void sort_array(unsigned char array[], int n); 
 
/**
 * @brief print_statistic prints the statistics of the given array 
 * (which includes minimum, maximum, mean and median of the array)
 *
 * This functions takes an array, its length, its maximum value,
 *  minimum value, mean and median as an input and proceeds print the data
 *
 * @param array The array to be printed
 * @param n The length of the array
 * @param max The largest value of the array
 * @param min The smallest value of the array
 * @param mean The mean of the elements of the array
 * @param median The median of the elements of the array
 *
 * @return no value
 */	

void print_statistics(unsigned char array[], int n, unsigned char max, unsigned char min, float mean, float median);


#endif /* __STATS_H__ */
