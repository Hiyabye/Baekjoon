#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> ans(5, 0);
  for (int i=0; i<n; i++) {
    if (v[i] == "M" || v[i] == "L") ans[0]++;
    else if (v[i] == "S") ans[3]++;
    else if (v[i] == "X") ans[4]++;
    else if (stoi(v[i]) >= 12) ans[1]++;
    else ans[2]++;
  }

  for (int i=0; i<5; i++) cout << ans[i] << " ";
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}