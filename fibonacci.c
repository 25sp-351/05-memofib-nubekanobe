#include <string.h> 
#include "cache.h"

#define BUFFER_SIZE 10
#define MAX_FIB 92 // 


// ========== FUNCTION POINTERS ================ // 
long_func_ptr assigned_provider = NULL; 
long_func_ptr original_provider = NULL; 

// ============ PROTOTYPES ========= //
long long fibonacci(int nth_number);

// ============ MAIN =============== //

int main(int argc, char *argv[]){

    if(argc > 1){
        printf("Unexpected argument provided"); 
        return 1; 
    };

    assigned_provider = fibonacci; 
    assigned_provider = initialize_cache(fibonacci, use_cache); 

    int nth_number; 
    int parsed_char_count; 
    char buffer[BUFFER_SIZE];

    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
        
        if (sscanf_s(buffer, "%d%n", &nth_number, &parsed_char_count) != 1 || buffer[parsed_char_count] != '\0'|| nth_number < 0){
            printf("Failed to provide a valid integer\n");
            break;
        }

        if (nth_number <= MAX_FIB){
            printf("Fibonacci number #%d is %lld\n", nth_number, (*assigned_provider)(nth_number));  
        } else {
            printf("LONG LONG INT can only store up to %dth fibonacci number\n", MAX_FIB); 
        }
        
        // DEBUG AND TESTING CACHE -- MUST INITIALIZE CACHE TO USE // 
        //print_cache(); 
    }
}


// ================ FIBONACCI ========================= // 
// A standard implementation of the fibonacci function. // 
// Receives an int parameter and returns that "nth"     //
// fibonacci number                                     //
// ==================================================== //

long long fibonacci(int nth_number){

    if (nth_number == 0) return 0; 
    if (nth_number == 1) return 1; 
    
    return (*assigned_provider)(nth_number - 1) + (*assigned_provider)(nth_number - 2); 
}
