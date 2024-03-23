#include <iostream>
#include <string>
using namespace std;

string format(int n) {
  return n < 0 ? '(' + to_string(n) + ')' : to_string(n);
}

void solve(void) {
  int a, b; cin >> a >> b;

  if (a + b == a - b || a + b == a * b || a - b == a * b) {
    cout << "NIE";
  } else if (a + b >= a - b && a + b >= a * b) {
    cout << format(a) << "+" << format(b) << "=" << format(a + b);
  } else if (a - b >= a + b && a - b >= a * b) {
    cout << format(a) << "-" << format(b) << "=" << format(a - b);
  } else if (a * b >= a + b && a * b >= a - b) {
    cout << format(a) << "*" << format(b) << "=" << format(a * b);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}