#include <iostream>
#include <vector>
using namespace std;

int a[3] = {35, 100, 10};
int b[3] = {30, 60, 9};

void solve(void) {
  int q; cin >> q;
  vector<int> v(3);
  for (int i=0; i<3; i++) cin >> v[i];

  int ans = 0, cur = 0;
  while (q--) {
    if (v[cur] == a[cur] - 1) {
      q += b[cur];
      v[cur] = 0;
    } else {
      v[cur]++;
    }
    ans++; cur = (cur + 1) % 3;
  }
  cout << "Martha plays " << ans << " times before going broke.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}