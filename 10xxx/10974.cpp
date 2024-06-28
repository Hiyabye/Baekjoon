#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a;
vector<bool> b;

void backtrack(int idx) {
  if (idx == n) {
    for (int i=0; i<n; i++) {
      cout << a[i] << " ";
    }
    cout << "\n";
    return;
  }

  for (int i=1; i<=n; i++) {
    if (b[i]) continue;
    b[i] = true;
    a[idx] = i;
    backtrack(idx+1);
    b[i] = false;
  }
}

void solve(void) {
  cin >> n;
  a.resize(n);
  b.resize(n+1, false);
  backtrack(0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}