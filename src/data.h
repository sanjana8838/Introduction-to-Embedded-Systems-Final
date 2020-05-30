/**
 * @file data.h
 * @brief Abstraction of basic data manipulations
 *
 * This header file provides an abstraction of data manipulation
 * via function calls. 
 *
 * @author Sanjana Ramesh
 * @date May 30, 2020
 *
 */
 #ifndef __DATA_H__
#define __DATA_H__

/**
 * @brief Integer to ASCII conversion 
 *
 * Number to be converted is passed as signed 32-bit integer and appropriate
 * manipulation performed using pointer arithmetic
 *
 * @param data input integer to be converted
 * @param ptr pointer to where converted value is stored
 * @param base 
 *
 * @return uint8_t length of converted data
 */
 uint8_t my_itoa(int32_t data, uint8_t *ptr, uint32_t base);
 
 /**
 * @brief ASCII to Integer conversion 
 *
 * String to be converted is passed as uint8_t pointer and appropriate
 * manipulation performed using pointer arithmetic
 *
 * @param ptr pointer to where string is stored
 * @param digits Number of digits in character
 * @param base 
 *
 * @return int32_t converted 32-bit signed integer is returned
 */
 int32_t my_atoi(uint8_t *ptr, uint8_t digits, uint32_t base);
 
 #endif /* __DATA_H__ */
