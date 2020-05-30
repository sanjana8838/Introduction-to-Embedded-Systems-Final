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

void print_array(unsigned char array[], int n);
float find_median(unsigned char array[], int n);
float find_mean(unsigned char array[], int n);
unsigned char find_maximum(unsigned char array[], int n);
unsigned char find_minimum(unsigned char array[], int n);
void sort_array(unsigned char array[], int n);
void print_statistics(unsigned char array[], int n, unsigned char max, unsigned char min, float mean, float median);



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
 
 void print_array(unsigned char array[], int n)
 {
 	int i;
 	for( i=0; i<n; i++)
 	{
 		printf("%d\t", array[i]);
 	}
 }
 
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

float find_median(unsigned char array[], int n)
 {
 	unsigned char newa[40];
	 int k, i, j;
 	unsigned char temp=0;
 	for(k=0; k<n; k++)
 	{
 		newa[k]=array[k];
 	}
 	for( i=0; i<n; i++)
 	{
 		for(j=0; j<n-1; j++)
 		{
 			if(newa[j]>newa[j+1])
 			{
 				temp=newa[j];
 				newa[j]=newa[j+1];
 				newa[j+1]=temp;
 			}
 		}
 	}
 	float median=0;
 	if(n%2==0)
 		median= (newa[(n-1)/2] + newa[(n/2)])/2.0;
 	else
 		median= newa[n/2];
 		
 	return median;
 }
 		
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
 
 float find_mean(unsigned char array[], int n)
 {
 	unsigned char sum=0;
	int i;
 	for(i=0; i<n; i++)
 	{
 		sum=sum+array[i];
 	}
 	float mean;
 	mean=sum/n;
 	
 	return mean;
 }
 
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
 
 unsigned char find_maximum(unsigned char array[], int n)
 {
 	unsigned char max=array[0];
 	int i;
 	for( i=0; i<n; i++)
 	{
 		if(max<=array[i])
 			max=array[i];
 	}
 	
 	return max;
 }
 
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
 
unsigned char find_minimum(unsigned char array[], int n)
 {
 	int i;
 	unsigned char min=array[0];
 	for( i=0; i<n; i++)
 	{
 		if(min>=array[i])
 			min=array[i];
 	}
 	
 	return min;
 }		
 		
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
 
  void sort_array(unsigned char array[], int n)
  {
  	unsigned char temp;
	int i, j;
  	for( i=0; i<n; i++)
  	{
  		for(j=i+1; j<n; j++)
  		{
  			if(array[i]<array[j])
  			{
  				temp=array[i];
  				array[i]=array[j];
  				array[j]=temp;
  			}
  		}
  	}
  }
 
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

void print_statistics(unsigned char array[], int n, unsigned char max, unsigned char min, float mean, float median)
{
	printf("Maximum of array is = %d\n", max);
	printf("Minimum of array is = %d\n", min);
	printf("Mean of array is = %f\n", mean);
	printf("Median of array is = %f\n", median);
}

#endif /* __STATS_H__ */
