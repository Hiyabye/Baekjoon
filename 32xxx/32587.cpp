#include <iostream>
#include <string>
using namespace std;

int calc(char a, char b) {
  if (a == b) return 0;
  if (a == 'R' && b == 'S') return 1;
  if (a == 'S' && b == 'P') return 1;
  if (a == 'P' && b == 'R') return 1;
  return -1;
}

void solve(void) {
  int n; cin >> n;
  string a; cin >> a;
  string b; cin >> b;

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += calc(a[i], b[i]);
  }
  cout << (ans > 0 ? "victory" : "defeat");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}