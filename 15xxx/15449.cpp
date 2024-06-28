#include <iostream>
#include <vector>
using namespace std;

bool check(int a, int b, int c) {
  return a+b>c && b+c>a && c+a>b;
}

void solve(void) {
  vector<int> l(5);
  for (int i=0; i<5; i++) cin >> l[i];

  int ans = 0;
  for (int i=0; i<3; i++) for (int j=i+1; j<4; j++) for (int k=j+1; k<5; k++) {
    ans += check(l[i], l[j], l[k]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}