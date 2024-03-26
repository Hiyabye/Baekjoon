#include <iostream>
#include <string>
using namespace std;

bool check(int h, int m, int s) {
  if (h <= 0 || h > 12) return false;
  if (m < 0 || m > 59) return false;
  if (s < 0 || s > 59) return false;
  return true;
}

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  int a[] = {stoi(s.substr(0, 2)), stoi(s.substr(3, 2)), stoi(s.substr(6, 2))};
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      for (int k=0; k<3; k++) {
        if (i == j || j == k || k == i) continue;
        if (check(a[i], a[j], a[k])) ans++;
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}