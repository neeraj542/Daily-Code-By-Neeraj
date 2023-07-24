// This program takes an input number n and prints its multiples from 1 to 10 using recursion
#include <iostream>
#include <string>
using namespace std;

// This function takes a number num and an index i and prints num*i
// It then increments i and calls itself recursively until i is greater than 10
void solve(int num, int i){
    if(i>10){
        return; // Base case: stop the recursion when i is greater than 10
    }
    
    int ans = num*i; // Calculate the answer
    cout << ans << endl; // Print the answer
    i++; // Increment i
    solve(num, i); // Call the function again with the updated i
}
int main()
{
    int n; cin >> n; // Take the input number n
    solve(n, 1); // Call the solve function with n and 1 as parameters
    cout << "return aa gya"; // Print a message when the program ends
}
