#include <bits/stdc++.h>

using namespace std;

bitset<33554432> b;

void solve(void) {
  int num;
  
  while (cin >> num) {
    if (b[num]) continue;
    b[num] = true;
    cout << num << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}