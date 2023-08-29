#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n; cin >> n;

  priority_queue<int> a;
  priority_queue<int, vector<int>, greater<int> > b;
  while (n--) {
    int num; cin >> num;

    if (a.size() == b.size()) a.push(num);
    else b.push(num);
    if (!a.empty() && !b.empty() && a.top() > b.top()) {
      int x = a.top(); a.pop();
      int y = b.top(); b.pop();
      a.push(y); b.push(x);
    }
    cout << a.top() << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}