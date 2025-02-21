# Tests cases for fibonacci.c (Calculates and Outputs nth Fib Numer)

# Test Case 1: Command Line Arguments After the Program Name

### Description: 
A test to verify that program will not accept any command line arguments

### Input: 
./fib

./fib 1

### Expected Output: 
Indicates that arguments are not expected and terminates the program. 

### Actual Output
Unexpected argument provided


# Test Case 2: Program Accepts Valid Integers

### Description: 
A test to verify that input must be integers. Any non-integer or negative inputs will terminate the program

### Input: 
./fib
-1

./fib 
10a

./fib 
a10

### Expected Output: 
Program terminates on negative or non-integer inputs 

### Actual Output
Program accepts positive integers only.


# Test Case 3: Program Outputs the Correct Fibonacci Number

### Description: 
A test to verify that the correct output is displayed

### Input: 
./fib 
10
20
30


### Expected Output: 
10th fibonacci number is 55
20th fibonacci number is 6765
30th fibonacci number is 832040

### Actual Output: 
./fib
10
10th fibonacci number is 55
20
20th fibonacci number is 6765
30
30th fibonacci number is 832040


# Test Case 4: Program Is Storing and Reusing Memoized Values

### Description: 
A test to verify that the program is caching and retrieving 
computer values, and performing redundant calculations

Including print debug statements for testing

### Input: 
./fib
25
24

### Expected Output: 
The 25th fibonacci number is 75025. 
The 2th fibonacci number is 46,368
Each number should only be computed once

### Actual Output 
Calculating fibonacci(2) = 1
Calculating fibonacci(3) = 2
Using cached fibonacci(2) = 1
Calculating fibonacci(4) = 3
Using cached fibonacci(3) = 2
Calculating fibonacci(5) = 5
Using cached fibonacci(4) = 3
Calculating fibonacci(6) = 8
Using cached fibonacci(5) = 5
Calculating fibonacci(7) = 13
Using cached fibonacci(6) = 8
Calculating fibonacci(8) = 21
Using cached fibonacci(7) = 13
Calculating fibonacci(9) = 34
Using cached fibonacci(8) = 21
Calculating fibonacci(10) = 55
Using cached fibonacci(9) = 34
Calculating fibonacci(11) = 89
Using cached fibonacci(10) = 55
Calculating fibonacci(12) = 144
Using cached fibonacci(11) = 89
Calculating fibonacci(13) = 233
Using cached fibonacci(12) = 144
Calculating fibonacci(14) = 377
Using cached fibonacci(13) = 233
Calculating fibonacci(15) = 610
Using cached fibonacci(14) = 377
Calculating fibonacci(16) = 987
Using cached fibonacci(15) = 610
Calculating fibonacci(17) = 1597
Using cached fibonacci(16) = 987
Calculating fibonacci(18) = 2584
Using cached fibonacci(17) = 1597
Calculating fibonacci(19) = 4181
Using cached fibonacci(18) = 2584
Calculating fibonacci(20) = 6765
Using cached fibonacci(19) = 4181
Calculating fibonacci(21) = 10946
Using cached fibonacci(20) = 6765
Calculating fibonacci(22) = 17711
Using cached fibonacci(21) = 10946
Calculating fibonacci(23) = 28657
Using cached fibonacci(22) = 17711
Calculating fibonacci(24) = 46368
Using cached fibonacci(23) = 28657
Calculating fibonacci(25) = 75025
25th fibonacci number is 75025
Fibonacci Cache:
fib_cache[2] = 1
fib_cache[3] = 2
fib_cache[4] = 3
fib_cache[5] = 5
fib_cache[6] = 8
fib_cache[7] = 13
fib_cache[8] = 21
fib_cache[9] = 34
fib_cache[10] = 55
fib_cache[11] = 89
fib_cache[12] = 144
fib_cache[13] = 233
fib_cache[14] = 377
fib_cache[15] = 610
fib_cache[16] = 987
fib_cache[17] = 1597
fib_cache[18] = 2584
fib_cache[19] = 4181
fib_cache[20] = 6765
fib_cache[21] = 10946
fib_cache[22] = 17711
fib_cache[23] = 28657
fib_cache[24] = 46368
fib_cache[25] = 75025
24
Using cached fibonacci(24) = 46368
24th fibonacci number is 46368
Fibonacci Cache:
fib_cache[2] = 1
fib_cache[3] = 2
fib_cache[4] = 3
fib_cache[5] = 5
fib_cache[6] = 8
fib_cache[7] = 13
fib_cache[8] = 21
fib_cache[9] = 34
fib_cache[10] = 55
fib_cache[11] = 89
fib_cache[12] = 144
fib_cache[13] = 233
fib_cache[14] = 377
fib_cache[15] = 610
fib_cache[16] = 987
fib_cache[17] = 1597
fib_cache[18] = 2584
fib_cache[19] = 4181
fib_cache[20] = 6765
fib_cache[21] = 10946
fib_cache[22] = 17711
fib_cache[23] = 28657
fib_cache[24] = 46368
fib_cache[25] = 75025

