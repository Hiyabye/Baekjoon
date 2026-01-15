#include <iostream>
#include <string>
using namespace std;

const string m[12] = {
  "January", "February", "March", "April", "May", "June",
  "July", "August", "September", "October", "November", "December"
};

const int d[12] = {
  31, 28, 31, 30, 31, 30,
  31, 31, 30, 31, 30, 31
};

inline bool leap(long long y) {
  return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

void solve(void) {
  long long n; cin >> n;

  long long tot = n * 7;
  if (tot <= 10) {
    cout << "December " << 21 + tot << ", 2012\n";
    return;
  }
  tot -= 10;

  long long y = 2013 + (tot / 146097) * 400;
  tot %= 146097;

  while (tot > 365 + leap(y)) {
    tot -= 365 + leap(y);
    y++;
  }
  if (tot == 0) {
    cout << "December 31, " << --y << "\n";
    return;
  }

  int idx = 0;
  for (int i=0; i<12; i++) {
    int x = d[i] + (i == 1 && leap(y));
    if (tot <= x) {
      cout << m[i] << " " << tot << ", " << y << "\n";
      return;
    }
    tot -= x;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}