#include <iostream>

using namespace std;

bool multOfThree(int);
bool multOfFive(int);

int main()
{
   int count = 0;
   int sum = 0;
   for (int i = 1; i < 1000; ++i) {
       if (multOfThree(i) || multOfFive(i)) {
           count++;
           sum += i;
       }
   }
   
   cout << "Sum: " << sum << endl;
   
   return 0;
}

// return true if n is multiple of 3
bool multOfThree(int n) {
    if (n % 3 == 0) {
        return true;
    } else {
        return false;
    }
}

// return true if n is multiple of 5
bool multOfFive(int n) {
    if (n % 5 == 0) {
        return true;
    } else {
        return false;
    }
}