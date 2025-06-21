#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int a, b, k; cin >> a >> b >> k;

  vector<int> ans;
  ans.push_back(a); ans.push_back(b);
  for (int i=a+1; i<=b-1; i++) {
    if (i % a == 0 && b % i == 0) ans.push_back(i);
  }

  if (ans.size() < k) {
    cout << -1;
  } else {
    for (int i=0; i<k; i++) cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}