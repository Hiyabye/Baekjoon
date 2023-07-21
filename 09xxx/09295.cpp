#include <bits/stdc++.h>

using namespace std;

void solve(int idx) {
  int a, b;
  cin >> a >> b;
  cout << "Case " << idx << ": " << a+b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  for (int i=1; i<=t; i++) {
    solve(i);
  }
  return 0;
}