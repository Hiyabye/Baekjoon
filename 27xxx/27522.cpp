#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  vector<pair<string, char> > v(8);
  for (int i=0; i<8; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());

  int r = 0, b = 0, score;
  for (int i=0; i<8; i++) {
    switch (i) {
      case 0: score = 10; break;
      case 1: score = 8; break;
      case 2: score = 6; break;
      case 3: score = 5; break;
      case 4: score = 4; break;
      case 5: score = 3; break;
      case 6: score = 2; break;
      case 7: score = 1; break;
    }
    if (v[i].second == 'R') r += score;
    else b += score;
  }
  cout << (r > b ? "Red" : "Blue");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}