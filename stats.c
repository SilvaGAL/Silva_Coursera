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
 * @file <Silva_Coursera>
 * @brief <Program that calculates mean, median, maximum value, minimum value from
 a list of chars>
 *
 * <Program that calculates mean, median, maximum value, minimum value from
 a list of chars>
 *
 * @author <Guilherme Silva>
 * @date <12/05/2020>
 *
 */

#include <stdio.h>

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char *array);
void print_array(unsigned char *array);
unsigned char find_median(unsigned char *array);
float find_mean(unsigned char *array);
unsigned char find_maximum(unsigned char *array);
unsigned char find_minimum(unsigned char *array);
void sort_array(unsigned char *array);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("The array: \n");
  print_array(test);
  printf("Sorted array from largest to smallest: \n");
  sort_array(test);
  print_array(test);
  print_statistics(test);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *array){
    printf("Minimum array's value: %d \n", find_minimum(array));
    printf("Maximum array's value: %d \n", find_maximum(array));
    printf("Array's median: %d \n", find_median(array));
    printf("Array's mean: %f \n", find_mean(array));
}

void print_array(unsigned char *array){
	for(int i=0; i < SIZE; ++i)
		printf("%d\t", array[i]);
	printf("\n\n\n");
}

unsigned char find_median(unsigned char *array){
	unsigned n = SIZE;
	sort_array(array);
	n = (n+1)/2 - 1;
	return array[n];
}

float find_mean(unsigned char *array){
	float sum=0.0;
	for (int i = 0; i < SIZE; ++i){
		sum+=array[i];
	}
	return sum/SIZE;
}

unsigned char find_maximum(unsigned char *array){
	unsigned char maximum=array[0];
	for (int i = 0; i < SIZE; ++i){
		if (maximum < array[i])
			maximum = array[i];
	}
	return maximum;
}
unsigned char find_minimum(unsigned char *array){
	unsigned char minimum=array[0];
	for (int i = 0; i < SIZE; ++i){
		if (minimum > array[i])
			minimum = array[i];
	}
	return minimum;
}
void sort_array(unsigned char *array){
	unsigned char aux = 0, max_pos = 0, maximum;
	for (int i = 0; i < SIZE; ++i){
		maximum=array[i];
		max_pos = i;
		for (int j = i+1; j < SIZE; ++j){
			if (maximum < array[j]){
				maximum = array[j];
				max_pos = j;
			}
		}
		aux = array[i];
		array[i] = maximum;
		array[max_pos] = aux;
	}
}