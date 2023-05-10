/*

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

*/

// C program for the above approach
#include <stdarg.h>
#include <stdio.h>

// Variadic function to find the largest number
int LargestNumber(int n, ...)
{
       // Declaring pointer to the argument list
       va_list ptr;

       // Initializing argument to the list pointer
       va_start(ptr, n);

       // Initializing variable and its type
       int max = va_arg(ptr, int);

       for (int i = 0; i < n - 1; i++)
       {
              // Accessing current variable and pointing to next
              int temp = va_arg(ptr, int);
              max = temp > max ? temp : max;
       }

       // End of argument list traversal
       va_end(ptr);

       return max;
}

// Driver Code
int main()
{
       printf("%d\n", LargestNumber(2, 1, 2));
       printf("%d\n", LargestNumber(3, 7, 4, 5));
       printf("%d\n", LargestNumber(4, 6, 55, 8, 9));
       return 0;
}