#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<bool> > a(n, vector<bool>(3, false));
  for (int i=0; i<n; i++) a[i][rand() % 3] = true;

  for (int i=0; i<n; i++) {
    if (a[i][0]) cout << "swimming ";
    if (a[i][1]) cout << "bowling ";
    if (a[i][2]) cout << "soccer ";
  }
  cout << "\n" << flush;

  string s;
  for (int i=0; i<n; i++) {
    cin >> s;
    if (s == "swimming") a[i][0] = true;
    if (s == "bowling") a[i][1] = true;
    if (s == "soccer") a[i][2] = true;
  }

  for (int i=0; i<n; i++) {
    if (!a[i][0]) cout << "swimming ";
    if (!a[i][1]) cout << "bowling ";
    if (!a[i][2]) cout << "soccer ";
  }
  cout << "\n" << flush;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}