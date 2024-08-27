#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  vector<int> a, b;
  for (int i=0; i<n; i++) {
    if (s[i] & 1) a.push_back(s[i]);
    else b.push_back(s[i]);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<int>());

  cout << "Case #" << idx << ": ";
  for (int i=0, j=0; i+j<n;) {
    if (s[i+j] & 1) cout << a[i++] << " ";
    else cout << b[j++] << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}