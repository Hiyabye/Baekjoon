#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int cur = 1;
  for (int i=0; i<n; i++) {
    cout << (v[i].length() < cur ? ' ' : v[i][cur-1]);
    cur = v[i].length();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}