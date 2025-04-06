#include <iostream>
using namespace std;

long long a[18] = {
  888888888888888888,
  88888888888888888,
  8888888888888888,
  888888888888888,
  88888888888888,
  8888888888888,
  888888888888,
  88888888888,
  8888888888,
  888888888,
  88888888,
  8888888,
  888888,
  88888,
  8888,
  888,
  88,
  8
};

bool solve(void) {
  long long n; cin >> n;

  int cnt = 0;
  for (int i=0; i<18; i++) {
    while (n >= a[i]) n -= a[i], cnt++;
    if (cnt > 8) return false;
  }
  return n == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}