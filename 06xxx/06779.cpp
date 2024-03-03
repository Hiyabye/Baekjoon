#include <iostream>
using namespace std;

void solve(void) {
  int h; cin >> h;
  int m; cin >> m;

  for (long long t=1; t<=m; t++) {
    if (-6*t*t*t*t + h*t*t*t + 2*t*t + t <= 0) {
      cout << "The balloon first touches ground at hour: " << t;
      return;
    }
  }
  cout << "The balloon does not touch ground in the given time.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}