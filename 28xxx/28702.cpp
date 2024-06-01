#include <iostream>
#include <string>
using namespace std;

string calc(int n) {
  if (n % 3 == 0 && n % 5 == 0) return "FizzBuzz";
  if (n % 3 == 0) return "Fizz";
  if (n % 5 == 0) return "Buzz";
  return to_string(n);
}

string solve(void) {
  string a, b, c; cin >> a >> b >> c;

  if (a[0] >= '0' && a[0] <= '9') return calc(stoi(a) + 3);
  if (b[0] >= '0' && b[0] <= '9') return calc(stoi(b) + 2);
  if (c[0] >= '0' && c[0] <= '9') return calc(stoi(c) + 1);
  return "";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}