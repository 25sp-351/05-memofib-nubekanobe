#include "fib_cache.h"

long long fib_cache[CACHE_SIZE]; // Define the cache array

// ============== INITIALIZE_CACHE ================== //
// Initialize the cache values to NOT PRESENT (-1)    //
// ================================================== //

void initialize_cache() {

    fib_cache[0] = 0;
    fib_cache[1] = 1; 

    for (int cache_entry = 2; cache_entry < CACHE_SIZE; cache_entry++) {
        fib_cache[cache_entry] = NOT_PRESENT;
    }
}

// ================== CACHED_FIBONACCI ================= //
// Cacheing function. Calls original provider (recursive)//
// fibonacci if value has not been previously cached, to //
// compute and cache the result.                         // 
// ===================================================== //

long long fibonacci_cache(int nth_number) {

    if (fib_cache[nth_number] == NOT_PRESENT) {
        fib_cache[nth_number] = (*original_provider)(nth_number);

        /* DEBUG PRINT STATEMENT
        printf("Calculating fibonacci(%d) = %lld\n", nth_number, fib_cache[nth_number]);
        */
    }
        /* DEBUG PRINT STATEMENT
    else 
        printf("Using cached fibonacci(%d) = %lld\n", nth_number, fib_cache[nth_number]);
        */

    return fib_cache[nth_number];
}

// ================== PRINT_CACHE ==================== //
// Prints the current contents of the Fibonacci cache. //
// =================================================== //

void print_cache() {
    printf("Fibonacci Cache:\n");
    for (int ix = 0; ix < CACHE_SIZE; ix++) {
        if (fib_cache[ix] != NOT_PRESENT) {
            printf("fib_cache[%d] = %lld\n", ix, fib_cache[ix]);
        }
    }
}