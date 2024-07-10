#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
using int128 = __int128;

namespace std {
  ostream& operator<<(ostream& os, int128 val) {
    string s;
    while (val) {
      s += (char)(val % 10 + '0');
      val /= 10;
    }
    reverse(s.begin(), s.end());
    return os << s;
  }
}

void hanoi(int n, int a, int b, int c) {
  if (n == 1) {
    cout << a << " " << c << "\n";
  } else {
    hanoi(n - 1, a, c, b);
    cout << a << " " << c << "\n";
    hanoi(n - 1, b, a, c);
  }
}

void solve(void) {
  int n; cin >> n;

  cout << ((int128)1 << n) - 1 << "\n";
  if (n <= 20) hanoi(n, 1, 2, 3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}