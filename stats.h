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
 * @brief <list of functios>
 *
 * <declaration of all stats.c fuctions>
 *
 * @author <Guilherme Silva>
 * @date <12/05/2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
		/* Add Your Declarations and Function Comments here */ 

		/**
		 * @brief <Prints the array's mean, median, maximum and minimum>
		 *
		 * <This function takes an array of char as a parameter and
		 it prints the output of the following functions: find_mean(), 
		 find_median(), find_maximum() and find_minimum(). >
		 *
		 * @param <*array> <pointer of an array of 8-bit char with size defined by SIZE constant>
		 *
		 * @return <void>
		 */
		void print_statistics(unsigned char *array);
		/**
		 * @brief <Prints the array's elements>
		 *
		 * <This function takes an array of char and prints it>
		 *
		 * @param <*array> <pointer of an array of 8-bit char with size defined by SIZE constant>
		 *
		 * @return <void>
		 */
		void print_array(unsigned char *array);
		/**
		 * @brief <Finds the array's median value among its elements>
		 *
		 * <This function takes an array of 8-bit char and finds its median value>
		 *
		 * @param <*array> <pointer of an array of 8-bit char with size defined by SIZE constant>
		 *
		 * @return <the array's 8-bit unsigned char median >
		 */
		unsigned char find_median(unsigned char *array);
		/**
		 * @brief <Finds the array's mean value among its elements>
		 *
		 * <This function takes an array of 8-bit char and finds its mea value >
		 *
		 * @param <*array> <pointer of an array of 8-bit char with size defined by SIZE constant>
		 *
		 * @return <the array's float mean >
		 */
		float find_mean(unsigned char *array);
		/**
		 * @brief <Finds the array's maximum value>
		 *
		 * <This function finds the maximum value among array's elements>
		 *
		 * @param <*array> <pointer of an array of 8-bit char with size defined by SIZE constant>
		 *
		 * @return <the maximum array's 8-bit unsigned char value >
		 */
		unsigned char find_maximum(unsigned char *array);
		/**
		 * @brief <Finds the array's minimum value>
		 *
		 * <This function finds the minimum value among array's elements>
		 *
		 * @param <*array> <pointer of an array of 8-bit char with size defined by SIZE constant>
		 *
		 * @return <the minimum array's 8-bit unsigned char value >
		 */
		unsigned char find_minimum(unsigned char *array);
		/**
		 * @brief <Given an array of data and a length, sorts the array from largest to smallest.)>
		 *
		 * <Given an array of data and a length, sorts the array from largest to smallest.)
		  (The zeroth Element should be the largest value, and the last element (n-1) should 
		  be the smallest value. >
		 *
		 * @param <*array> <pointer of an array of 8-bit char with size defined by SIZE constant>
		 *
		 * @return <void>
		 */
		void sort_array(unsigned char *array);

#endif /* __STATS_H__ */
