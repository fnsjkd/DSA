#include<iostream>
using namespace std;

 int main () {
     
     bool isPrime(int n) {
for(int i = 2; i < n; i++) {
if(n % i == 0) {
return 0; // not prime
}
}
return 1; // prime
}

5. Pass by Value Example:
cpp
void dummy(int n) {
n++;
cout << "Value inside function: " << n << endl;
}
