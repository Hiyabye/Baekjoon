#include <iostream>
using namespace std;

bool check(int n) {
  while (n) {
    if (n % 10 != 4 && n % 10 != 7) return false;
    n /= 10;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  do {
    if (check(n)) {
      cout << n;
      return;
    }
  } while (n--);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}