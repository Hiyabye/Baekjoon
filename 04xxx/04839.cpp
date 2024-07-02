#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int p[10] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23};

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> v(10, n);
  for (int i=1; i<10; i++) {
    v[i] = v[i-1] / p[i];
    v[i-1] %= p[i];
  }

  vector<string> ans;
  for (int i=0; i<10; i++) {
    if (!v[i]) continue;
    string s = to_string(v[i]);
    for (int j=1; j<=i; j++) s += "*" + to_string(p[j]);
    ans.push_back(s);
  }

  cout << n << " = " << ans[0];
  for (int i=1; i<ans.size(); i++) cout << " + " << ans[i];
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}