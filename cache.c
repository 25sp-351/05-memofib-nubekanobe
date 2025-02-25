#include <stdlib.h>
#include "cache.h"

long long* cache; // Define the cache array

// ============== INITIALIZE_CACHE ================== //
// Initialize the cache values to NOT PRESENT (-1)    //
// ================================================== //

long_func_ptr initialize_cache(long_func_ptr original_provider_func, long_func_ptr cache_provider_func) {

    cache = (long long*) malloc(CACHE_SIZE * sizeof(long long));

    original_provider = original_provider_func; 
    assigned_provider = cache_provider_func; 
    
    cache[0] = 0;
    cache[1] = 1; 

    for (int cache_entry = 2; cache_entry < CACHE_SIZE; cache_entry++) {
        cache[cache_entry] = NOT_PRESENT;
    }

    return assigned_provider; 
}

// ================== CACHED_FIBONACCI ================= //
// Cacheing function. Calls original provider (recursive)//
// fibonacci if value has not been previously cached, to //
// compute and cache the result.                         // 
// ===================================================== //

long long use_cache(int nth_number) {

    if (cache[nth_number] == NOT_PRESENT) {
        cache[nth_number] = (*original_provider)(nth_number);

        /* DEBUG PRINT STATEMENT
        printf("Calculating fibonacci(%d) = %lld\n", nth_number, cache[nth_number]);
        */
    }
        /* DEBUG PRINT STATEMENT
    else 
        printf("Using cached fibonacci(%d) = %lld\n", nth_number, cache[nth_number]);
        */

    return cache[nth_number];
}

// ================== PRINT_CACHE ==================== //
// Prints the current contents of the Fibonacci cache. //
// =================================================== //

void print_cache() {
    printf("Cache:\n");
    for (int ix = 0; ix < CACHE_SIZE; ix++) {
        if (cache[ix] != NOT_PRESENT) {
            printf("cache[%d] = %lld\n", ix, cache[ix]);
        }
    }
}