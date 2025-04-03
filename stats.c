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
 * @file <stats.c> 
 * @brief This task involves writing several functions to analyze an aaray of unsigned char
 * data. The functions should compute the maximum, minimun, mean, and median of the data set.
 * Additionally,the data should be sorted in descending order.
 * All statistical values must be rounded down to nearest integer. Once the analysis and sorting are complete,
 * the results should be displyed in a well formated manner.
 *
 * @author <Youssef LAMINE>
 * @date <2025-03-31 >
 *
 */



 #include <stdio.h>
 #include "./stats.h"
 
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
   unsigned char max,min,mean,median;
   unsigned char sorted[SIZE];
   unsigned char i;
 
 
 }
 
 /* Add other Implementation File Code Here */
 void print_statistics(unsigned char mean, unsigned char median, unsigned char max, unsigned char min) {
   printf("Mean: %d\n", mean);
   printf("Median: %d\n", median);
   printf("Max: %d\n", max);
   printf("Min: %d\n", min);
 }
 void print_array(unsigned char *array, unsigned int size) {
   for (unsigned int i = 0; i < size; i++) {
     printf("%d ", array[i]);
   }
   printf("\n");
 }
 unsigned char find_median(unsigned char *array, unsigned int size) {
   if (size % 2 == 0) {
     return (array[size / 2 - 1] + array[size / 2]) / 2;
   } else {
     return array[size / 2];
   }
 } 
 unsigned char find_mean(unsigned char *array, unsigned int size) {
   unsigned int sum = 0;
   for (unsigned int i = 0; i < size; i++) {
     sum += array[i];
   }
   return sum / size;
 }
 unsigned char find_maximum(unsigned char *array, unsigned int size) {
   unsigned char max = array[0];
   for (unsigned int i = 1; i < size; i++) {
     if (array[i] > max) {
       max = array[i];
     }
   }
   return max;
 }
 unsigned char find_minimum(unsigned char *array, unsigned int size) {
   unsigned char min = array[0];
   for (unsigned int i = 1; i < size; i++) {
     if (array[i] < min) {
       min = array[i];
     }
   }
   return min;
 }
 void sort_array(unsigned char *array, unsigned int size) {
   for (unsigned int i = 0; i < size - 1; i++) {
     for (unsigned int j = 0; j < size - i - 1; j++) {
       if (array[j] > array[j + 1]) {
         unsigned char temp = array[j];
         array[j] = array[j + 1];
         array[j + 1] = temp;
       }
     }
   }
 }
 
 