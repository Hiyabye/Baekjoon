#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  int sum = 0;
  for (int i=0; i<n; i++) {
    int d; cin >> d;
    sum += d;
  }
  return (sum % 2 == 0) || (n > 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}