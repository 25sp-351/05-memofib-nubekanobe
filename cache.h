#ifndef CACHE_H
#define CACHE_H

#include <stdio.h> 

#define CACHE_SIZE 100
#define NOT_PRESENT -1

typedef long long (*long_func_ptr)(int nth_number); // define a type called long_func_ptr 
extern long_func_ptr assigned_provider;  // Declaring function pointers
extern long_func_ptr original_provider;  


long_func_ptr initialize_cache(long_func_ptr original_provider_func, long_func_ptr cache_provider_func); 
long long use_cache(int nth_number); 
void print_cache(); 

#endif 