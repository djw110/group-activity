// JD
// Reverse equality operator. Line 15
// Omit std:: from required locations. Line 25

#include <iostream>

int main()
{
    //initial fibinocci numbers
    int a = 0, b = 1;
    int sum_even = 0;
    // find fibonacci numbers up to 4,000,000
    while (b < 4000000) {
        // if the fibonocci number 'b' is even
        if (b % 2 != 0) {
            // add it to a running sum
            sum_even += b;
        }
        //calculate the next fibonacci number in the series
        int temp = b;
        b = a + b;
        a = temp;
    }
    // print the sum of the even fibonacci numbers
    cout << sum_even << endl;

    return 0;
}

// answer should be 4613732
