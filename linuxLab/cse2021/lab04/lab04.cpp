/*    geom_sum2 is better because it has a faster execution time. 
geom_sum2 is faster because its execution growth rate is O(n)
which is a liniar growth rate and geom_sum1 is 
slower becaue it has an execution growth rate of  O(n^2) which 
is a exponentioal growth. geom_sum1 is like this because of its nested forloop while
geom_sum1 only has one for loop. we can also see that geom_sum2 is faster in the output.
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std;
long long int geom_sum1 (int x, int n);
long long int geom_sum2 (int x, int n);
int main()
{
 int x = 1;
 int n = 1;
 cout << "Please enter x: ";
 cin >> x;

 cout << "Please enter n: ";
 cin >> n;

 using clock = chrono::steady_clock;

 clock::time_point start = clock::now();

 cout << geom_sum1(x, n) << endl;

 clock::time_point end = clock::now();
 clock::duration time_span = end - start;
 double nseconds = double(time_span.count()) * clock::period::num / clock::period::den;
 cout << "The execution time is : " << nseconds << endl;


 start = clock::now();

 cout << geom_sum2(x, n) << endl;

 end = clock::now();
 time_span = end - start;
 nseconds = double(time_span.count()) * clock::period::num / clock::period::den;
 cout << "The execution time is : " << nseconds << endl;
 return 0;
}
long long int geom_sum1 (int x, int n)
{
  long long int result = 0;
  for (int i = 0; i <= n; i++){
    int xpow = 1;
    for(int j = 0; j <= n; j++){
      xpow = xpow * x;
    }
    result = result * x + 1;
  }
  return result;
}
long long int geom_sum2 (int x, int n)
{
  long long int result = 0;
  for (int i = 0; i <= n; i++){
    result = result * x + 1;
  }
  return result;
}
