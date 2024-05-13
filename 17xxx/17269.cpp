#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int alp[26] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

void solve(void) {
  int n, m; cin >> n >> m;
  string a, b; cin >> a >> b;

  string name = "";
  for (int i=0; i<min(n, m); i++) {
    name += a[i];
    name += b[i];
  }
  for (int i=min(n, m); i<max(n, m); i++) {
    name += (n > m) ? a[i] : b[i];
  }

  vector<int> ans(n+m);
  for (int i=0; i<name.size(); i++) {
    ans[i] = alp[name[i] - 'A'];
  }
  for (int i=0; i<n+m-2; i++) {
    for (int j=0; j<n+m-i-1; j++) {
      ans[j] = (ans[j] + ans[j+1]) % 10;
    }
  }
  cout << (ans[0] * 10 + ans[1]) << "%";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}