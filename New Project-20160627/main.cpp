#include <iostream>

using namespace std;

int fibSeq(int, int, int, int);
const int FIRST = 0; // first number of Fib Seq
const int SECOND = 1; // second number of Fib Seq

int main()
{
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "The " << n << " number of the Fibonacci Sequence is " << fibSeq(n) << endl;
   
   return 0;
}

// Returns the nth number of the Fibonacci Sequence
int fibSeq(int n, int acc = 1, int prev = 0, int prevNum = 0) {
    if (n < 1) {
        return 0;
    }else if (prevNum == n) {
        return acc;
    } else {
        return fibSeq(n - 1, acc + prev, acc, prevNum + 1);
    }
}

