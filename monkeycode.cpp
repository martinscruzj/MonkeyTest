#include <iostream>

using namespace std;

int factorial(int n);

int main(int argc, char** argv)
{
   cout << "0 factorial is " << factorial(0) << endl;
   cout << "4 factorial is " << factorial(4) << endl;
}

int factorial(int n)
{
   int res = 0;
   if (n > 0) {
      return n*factorial(n-1);
   }
   else{
      return 1;
   }
}
