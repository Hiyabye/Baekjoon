#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  int p; cin >> p;

  vector<int> ans;
  ans.push_back(p & 1 ? p+1 : p-1);
  ans.push_back(p & 1 ? n-p : n-p+1);
  ans.push_back(p & 1 ? n-p+1 : n-p+2);
  sort(ans.begin(), ans.end());

  for (int i=0; i<3; i++) cout << ans[i] << " ";
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}