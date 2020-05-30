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
 * @file Stats Week 1 Assignment
 * @brief Week 1 assignment includes defining various functions and 
 * calling them in the main function that is defined in the stats.c file
 *
 * Sample array of type unsigned char is defined in the main function.    
 * Header file stats.h is included. Functions from the stats.h user-  
 * defined library are called here and executed when the program is run.
 *
 * @author Sanjana Ramesh
 * @date 05/11/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() 
{
	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	unsigned char max, min;
	int i;
	float median, mean;
	max = find_maximum(test, SIZE);
	min = find_minimum(test, SIZE);
	median = find_median(test, SIZE);
	mean = find_mean(test, SIZE);
	print_statistics(test, SIZE, max, min, mean, median);
	sort_array(test, SIZE);
	print_array(test, SIZE);
	
}


