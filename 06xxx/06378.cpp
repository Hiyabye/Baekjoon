#include <iostream>
#include <string>
using namespace std;

int digital(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

bool solve(void) {
  string n; cin >> n;
  if (n == "0") return false;

  int sum = 0;
  for (char c : n) sum += c - '0';
  while (sum >= 10) sum = digital(sum);

  cout << sum << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}