#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(void) {
  long long a, b; cin >> a >> b;

  vector<string> ans;
  while (a != b) {
    while (!(a & 1) && !(b & 1)) a >>= 1, b >>= 1;
    if (a & 1 && b & 1) {
      if (a > b) {
        ans.push_back("A+=B");
        a += b;
      } else {
        ans.push_back("B+=A");
        b += a;
      }
    } else if (a & 1) {
      ans.push_back("A+=A");
      a <<= 1;
    } else {
      ans.push_back("B+=B");
      b <<= 1;
    }
  }

  cout << ans.size() << "\n";
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