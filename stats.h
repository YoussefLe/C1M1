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
 * @file <stats.h> 
 * @brief This task involves writing several functions to analyze an aaray of unsigned char
 * data. The functions should compute the maximum, minimun, mean, and median of the data set.
 * Additionally,the data should be sorted in descending order.
 * All statistical values must be rounded down to nearest integer. Once the analysis and sorting are complete,
 * the results should be displyed in a well formated manner.
 * @author <Youssef LAMINE>
 * @date <2025-03-31 >
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Printing the statistics of an array
 * 
 * This function takes the mean, median, maximum, and minimum values of an array
 * and prints them to the console.
 *
 * @param <mean> The mean value of the array
 * @param <median> The median value of the array
 * @param <max> The maximum value of the array
 * @param <min> The minimum value of the array
 *
 * @return void
 */
void print_statistics(unsigned char mean, unsigned char median, unsigned char max, unsigned char min);

/**
 * @brief Printing the array
 * 
 * This function takes an array and its size as input and prints the elements
 * of the array to the console.
 *
 *
 * @param <array> The array to be printed
 * @param <size> The size of the array
 *
 * @return void
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief Finding the median of an array
 * 
 * This function takes an array and its size as input and returns the median
 * value of the array.
 *
 *
 * @param <array> The array to find the median of
 * @param <size> The size of the array
 *
 * @return The median value of the array
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief Finding the mean of an array
 * 
 * This function takes an array and its size as input and returns the mean
 * value of the array.
 *
 *
 * @param <array> The array to find the mean of
 * @param <size> The size of the array
 *
 * @return The mean value of the array
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Finding the maximum value of an array
 * 
 * This function takes an array and its size as input and returns the maximum
 * value of the array.
 *
 * @param <array> The array to find the maximum value of
 * @param <size> The size of the array
 *
 * @return The maximum value of the array
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Finding the minimum value of an array
 * 
 * This function takes an array and its size as input and returns the minimum
 * value of the array.
 *
 *
 * @param <array> The array to find the minimum value of
 * @param <size> The size of the array
 *
 * @return The minimum value of the array
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Sorting an array in descending order
 * 
 * This function takes an array and its size as input and sorts the array
 * in descending order.
 *
 *
 * @param <array> The array to be sorted
 * @param <size> The size of the array
 *
 * @return void
 */
void sort_array(unsigned char *array, unsigned int size);
#endif /* __STATS_H__ */
