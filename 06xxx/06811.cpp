#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;

  int cnt = 0;
  for (int i=0; a*i<=d; i++) for (int j=0; a*i+b*j<=d; j++) for (int k=0; a*i+b*j+c*k<=d; k++) {
    if (i == 0 && j == 0 && k == 0) continue;
    cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel\n";
    cnt++;
  }
  cout << "Number of ways to catch fish: " << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}