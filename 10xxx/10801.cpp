#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  vector<int> a(10), b(10);
  for (int i=0; i<10; i++) cin >> a[i];
  for (int i=0; i<10; i++) cin >> b[i];

  int x = 0, y = 0;
  for (int i=0; i<10; i++) {
    if (a[i] > b[i]) x++;
    if (a[i] < b[i]) y++;
  }
  cout << (x > y ? "A" : (x < y ? "B" : "D"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}