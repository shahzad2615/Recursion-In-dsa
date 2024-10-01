#include <iostream>  // Includes the iostream library for input/output operations.
using namespace std;  // Allows the use of standard library functions without the "std::" prefix.

bool pallindrome(int i, string s) {  // Function definition that checks if the string is a palindrome.
    // Takes two parameters: 'i' (an integer index) and 's' (the string to be checked).
    if (i >= s.size() / 2) return true;  
    // Base case: If 'i' is greater than or equal to half the size of the string, the recursion stops.
    // This is because we've checked all necessary characters. At this point, the function returns true, 
    // indicating that all the characters matched and the string is a palindrome.

    if (s[i] != s[s.size() - i - 1]) return false;
    // Check: If the character at index 'i' is not equal to the character at index 's.size() - i - 1' 
    // (the corresponding character from the other end), the function returns false, meaning the string 
    // is not a palindrome.
    // return is used to return the function

    return pallindrome(i + 1, s);  
    // Recursion: Call the function again with the next index (i + 1). This checks the next pair of characters.
    // The function continues checking until it either finds mismatching characters or reaches the base case.
}

int main() {
    string s = "madam";  
    // A string 's' is initialized with the value "madam", which is known to be a palindrome.

    int result = pallindrome(0, s);  
    // The function `pallindrome` is called with the starting index 0 and the string 's'. 
    // This checks if the string is a palindrome by comparing characters from both ends of the string.
    // The result is stored in the variable `result`.

    cout << result << " ";  
    // The result (either 1 or 0, since 'bool' is implicitly cast to an integer) is printed.
    // In C++, 'true' is represented as 1, and 'false' is represented as 0.

    return 0;  
    // End of the program.
}



// Dry run 
// if(i>=n/2) it means that when i will get 2 it will condition will also