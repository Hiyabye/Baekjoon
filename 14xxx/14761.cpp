#include <iostream>
using namespace std;

void solve(void) {
  int x, y, n; cin >> x >> y >> n;

  for (int i=1; i<=n; i++) {
    if (!(i % x) && !(i % y)) cout << "FizzBuzz";
    else if (!(i % x)) cout << "Fizz";
    else if (!(i % y)) cout << "Buzz";
    else cout << i;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}