#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  do {
    int sum = 0;
    while (n) {
      sum += (n % 10) * (n % 10);
      n /= 10;
    }
    n = sum;
  } while (n > 9);
  return n == 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "HAPPY" : "UNHAPPY");
  return 0;
}