#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000;

int f[MAX] = {0};

int fib(int n)
{
   double phi = (1+sqrt(5))/2;
   return round((pow(phi, n))/sqrt(5));
}



int main()
{
   int n ;
   cin >> n;
   cout << "fibonacci(" << n << ") : " << fib(n) << endl;
   return 0;
}