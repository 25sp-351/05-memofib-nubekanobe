#ifndef FIB_CACHE_H
#define FIB_CACHE_H

#include <stdio.h> 

#define CACHE_SIZE 100
#define NOT_PRESENT -1

typedef long long (*long_func_ptr)(int nth_number); // define a type called long_func_ptr 
extern long_func_ptr fibonacci_provider;  // Declaring function pointers
extern long_func_ptr original_provider;  


void initialize_cache(); 
long long cached_fibonacci(int nth_number); 
void print_cache(); 

#endif 