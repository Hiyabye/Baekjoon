#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  if (next_permutation(a.begin(), a.end())) {
    for (int i=0; i<n; i++) {
      cout << a[i] << " ";
    }
  } else {
    cout << "-1";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}