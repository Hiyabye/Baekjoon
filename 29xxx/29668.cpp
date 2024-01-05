#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string x; cin >> x;
  int k; cin >> k;

  if (x.length()-x.find('.')-1 <= k) {
    cout << x;
    for (int i=x.length()-x.find('.'); i<=k; i++) cout << '0';
    return;
  }

  string ans = x.substr(0, x.find('.')+k+1);
  if (x[x.find('.')+k+1] >= '5') {
    for (int i=ans.length()-1; i>=0; i--) {
      if (ans[i] == '.') continue;
      if (ans[i] == '9') {
        ans[i] = '0';
        continue;
      }
      ans[i]++;
      break;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}