#include <iostream>
using namespace std;
int main()
{
  int current_fib = 2;
  int previous_fib = 1;
  int summation;
  int temp;
  while (current_fib < 4000000)
    {
      if (current_fib % 2 == 0){
        summation += current_fib;
      }
      temp = current_fib;
      current_fib = previous_fib + temp;
      previous_fib = temp;

    }
  cout << summation << "\n";
}
