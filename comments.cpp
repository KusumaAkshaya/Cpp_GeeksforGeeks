#include <iostream>
using namespace std;

class GFC{

public:
int fib(int n)
{
    int a=0, b=1, c;
    int i;

    for(i=2; i<=n; i++)
    {
       c = a+b;
       a = b;
       b = c;
    }

    return c;

}
};

int main()
{
   GFC g;
   int n ;
   cin >> n;
   cout << "fibonacci number n = " << g.fib(n) ; 
   return 0;
}