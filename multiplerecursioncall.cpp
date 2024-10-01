#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) return n;      // Base case: if n is 0 or 1, return n
    int last = fibo(n - 1);    // Recursive call to compute fibo(n-1)
    int slast = fibo(n - 2);   // Recursive call to compute fibo(n-2)
    return last + slast;       // Combine results of fibo(n-1) and fibo(n-2)
}

int main() {
    int result = fibo(7);      // Calculate fibo(7)
    cout << result << "";      // Print result
    return 0;
}