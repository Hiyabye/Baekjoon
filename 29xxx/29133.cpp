#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;

  vector<int> ans;
  if (a + b + c == d) ans.push_back(1);
  if (a*a + b*b + c*c == d) ans.push_back(2);
  if (a*a*a + b*b*b + c*c*c == d) ans.push_back(3);
  cout << (ans.size() == 1 ? ans[0] : -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}