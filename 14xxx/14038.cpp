#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  vector<char> v(6);
  for (int i=0; i<6; i++) cin >> v[i];

  int cnt = 0;
  for (int i=0; i<6; i++) {
    if (v[i] == 'W') cnt++;
  }
  cout << (cnt == 0 ? -1 : (8-cnt)/2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}