#include <deque>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<char> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  deque<char> dq; dq.push_back(v[0]);
  for (int i=1; i<n; i++) {
    if (v[i] <= dq.front()) dq.push_front(v[i]);
    else dq.push_back(v[i]);
  }

  for (char c : dq) cout << c;
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}