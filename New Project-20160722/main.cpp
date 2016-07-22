#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int);

int main()
{
    int side = 7;
    int primes = 8;
    int composites = 5;
    double percent = 62;
    
    const int SQR8 = 8;
    const int SQR4 = 4;
    const int SQR2 = 2;
    
    int num1 = 31;
    int sum1 = 18;
    int num2 = 37;
    int num3 = 43;
    
    while (percent > 10) {
        ++side;
        
        sum1 += SQR8;
        num1 += sum1;
        num2 += sum1 + SQR2;
        num3 += sum1 + SQR4;
        
        if (isPrime(num1)) {
            primes++;
        } else { composites++; }
        
        if (isPrime(num2)) {
            primes++;
        } else { composites++; }
        
        if (isPrime(num3)) {
            primes++;
        } else { composites++; }
        
        composites++;
        
        percent = (primes / (primes + composites)) * 100;
    }
    
    cout << "The length of sides is: " << side << endl;
    
    return 0;
}

// Return true if x is prime
int isPrime (int x) {
    int factor = x / 2;
    while (factor > 1) {
        if (x % factor == 0) {
            return false;
        }
        --factor;
    }
    return true;
}