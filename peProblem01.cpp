//thaddeusmaddeus

#include <iostream>

//for simplicity
using namespace std;

int multiple_summator(int max){
  int sum;

  for ( int i = 1; i < 1000; i++)
    {
      if ( (i % 3) == 0 || (i % 5) == 0 ){
        sum  += i;
      }
    }

  return sum;
}

int main ()
{
  int sum = multiple_summator(1000);

  cout << sum << "\n";
}
