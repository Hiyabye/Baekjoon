#include <iomanip>
#include <iostream>
using namespace std;

int main(void) {
  double a, b;
  cin >> a >> b;
  cout << fixed << setprecision(10) << a / b << endl;
  return 0;
}