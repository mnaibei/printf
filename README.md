printf Test Files
General info
How to use
What do the results mean?
General info
Use these files to test the following specifiers that are used in the Holberton School _printf project.

% - percent_test.c
%c - char_test.c
%s - string_test.c
%d - int_test.c
%i - int_test.c
%u - u_test.c
%o - o_test.c
%x - x_test.c
%X - X_test.c
%p - p_test.c
How to use
Clone repository to your local testfile directory
Use one test file at a time
Compile ALL of your .c files with the following gcc flags:
gcc -Werror -Wextra -Wall -pedantic -Wno-format *.c
Execute the produced a.out file
What do the results mean?
These files compare the return values of our new _printf to the return values of standard printf
If the return values are different, the output will be a list of numbers that refer to the edge case which your _printf has failed to produce the correct output.
If _printf and standard printf return values MATCH:
NO ERRORS DETECTED
If _printf and standard printf return values DO NOT MATCH:
Error on array member: 3
If the above message is seen, '3' indicates which edge case has failed.
Refer to the comments above array at the end of variable declarations IN THE TEST FILE
/* 1 2 3 4 5 6 7 */
{0, INT_MAX, INT_MIN, 100, 99, -100, -99};
In this case, 3 refers to the edge case INT_MIN
