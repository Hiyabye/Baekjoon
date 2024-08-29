#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(10);
  for (int i=0; i<10; i++) cin >> v[i];

  int a = -1, b = -1;
  for (int i=0; i<10; i++) {
    if (!v[i]) continue;
    if (~a) b = i;
    else a = i;
  }

  if ((v[b] - v[a]) % (b - a)) {
    cout << -1;
    return;
  }

  int d = (v[b] - v[a]) / (b - a);
  for (int i=0; i<10; i++) {
    cout << v[a] + d * (i - a) << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}