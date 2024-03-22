#include <iostream>
using namespace std;

int calc(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

void solve(void) {
  int l; cin >> l;
  int d; cin >> d;
  int x; cin >> x;

  for (int i=l; i<=d; i++) {
    if (calc(i) == x) {
      cout << i << "\n";
      break;
    }
  }

  for (int i=d; i>=l; i--) {
    if (calc(i) == x) {
      cout << i;
      break;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}