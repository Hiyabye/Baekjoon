#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (v[i] == "botswana") ans += 0;
    else if (v[i] == "ethiopia") ans += 50;
    else if (v[i] == "kenya") ans += 50;
    else if (v[i] == "south-africa") ans += 0;
    else if (v[i] == "tanzania") ans += 50;
    else if (v[i] == "namibia") {
      bool flag = false;
      for (int j=0; j<i; j++) {
        if (v[j] == "south-africa") {
          flag = true;
          break;
        }
      }
      ans += flag ? 40 : 140;
    } else if (v[i] == "zambia") {
      if (i > 0 && v[i-1] == "zimbabwe") ans += 20;
      else ans += 50;
    } else if (v[i] == "zimbabwe") {
      if (i > 0 && v[i-1] == "zambia") ans += 0;
      else ans += 30;
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