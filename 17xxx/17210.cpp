#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;
  int x; cin >> x;

  if (n > 5) {
    cout << "Love is open door";
    return;
  }

  for (int i=0; i<n-1; i++) {
    if (x == 0) {
      cout << "1\n";
      x = 1;
    } else {
      cout << "0\n";
      x = 0;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}