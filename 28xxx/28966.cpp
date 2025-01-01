#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int odd = 0;
  for (int i=0; i<n; i++) {
    if (a[i] & 1) odd++;
  }
  if (odd != (n+n%2)/2) {
    cout << "-1 -1";
    return;
  }

  vector<int> b, c;
  for (int i=0; i<n; i++) {
    if (a[i] & 1) {
      if (i & 1) b.push_back(i+1);
    } else {
      if (!(i & 1)) c.push_back(i+1);
    }
  }

  if (b.size() == 1 && c.size() == 1) {
    cout << b[0] << " " << c[0];
  } else if (n > 2 && b.empty() && c.empty()) {
    cout << "1 3";
  } else {
    cout << "-1 -1";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}