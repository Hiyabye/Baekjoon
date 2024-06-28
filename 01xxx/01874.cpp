#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  stack<int> s;
  int cur = 1;
  vector<char> ans;
  for (int i=0; i<n; i++) {
    while (cur <= a[i]) {
      s.push(cur++);
      ans.push_back('+');
    }
    if (s.top() == a[i]) {
      s.pop();
      ans.push_back('-');
    } else {
      cout << "NO\n";
      return;
    }
  }

  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}