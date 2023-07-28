#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string p, s;
  int n, x = 0;

  cin >> p;
  cin >> n;
  cin >> s;

  deque<int> dq;
  for (int i=0; i<s.size(); i++) {
    if (s[i] == '[' || s[i] == ']') continue;
    if (s[i] != ',') x = x*10 + s[i]-'0';
    else {
      dq.push_back(x);
      x = 0;
    }
  }
  if (s.size() > 2) dq.push_back(x);

  bool rev = false;
  for (int i=0; i<p.size(); i++) {
    if (p[i] == 'R') rev = !rev;
    else {
      if (dq.empty()) {
        cout << "error\n";
        return;
      }
      if (rev) dq.pop_back();
      else dq.pop_front();
    }
  }

  cout << "[";
  for (int i=0; i<dq.size(); i++) {
    cout << (rev ? dq[dq.size()-i-1] : dq[i]);
    if (i != dq.size()-1) cout << ",";
  }
  cout << "]\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}