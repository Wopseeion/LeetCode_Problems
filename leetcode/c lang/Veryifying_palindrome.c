/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1*/


// #include <stdbool.h>

// bool isPalindrome(int x) {
//     int num = x;
//     int originalNum = x;
//     long long int reversedNum = 0;
    
//     while (num != 0) {
//         int remainder = num % 10;
//         reversedNum = reversedNum * 10LL + remainder; 
//         num /= 10;
//     }
    
//     return originalNum >= 0 && originalNum == reversedNum;
// }


#include <stdio.h>

// Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // Function prototype declaration

int main()
{
    int d, e, c;
    printf("Enter values for d\n");
    scanf("%d", &d);

    printf("Enter the value fo e\n");
    scanf("%d", &e);
    c = sum(d, e); // Function Call
    printf("The value of c is %d\n", c);

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;

    return result;
}