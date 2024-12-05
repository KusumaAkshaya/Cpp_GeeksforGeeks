#include <iostream>
using namespace std;

const int MAX = 1000;

int f[MAX] = {0};

int fib(int n)
{
   if(n == 0)
   return 0;

   if(n == 1 || n ==2 ) return (f[n] = 1);
   
   if(f[n]) return f[n];

   int k = (n & 1) ? (n+1)/2 : n/2; // n&1 is 1 if n is odd , else 0

    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);

     return f[n];

}



int main()
{
   int n ;
   cin >> n;
   cout << "fibonacci(" << n << ") : " << fib(n) << endl;
   return 0;
}