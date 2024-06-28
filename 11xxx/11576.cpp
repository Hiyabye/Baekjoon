#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int m; cin >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  long long num = 0;
  for (int i=0; i<m; i++) {
    num = a * num + v[i];
  }

  vector<int> ans;
  while (num) {
    ans.push_back(num % b);
    num /= b;
  }

  while (!ans.empty()) {
    cout << ans.back() << " ";
    ans.pop_back();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}