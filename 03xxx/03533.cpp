#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> x(10);
  for (int i=0; i<10; i++) cin >> x[i];

  int ans = 0;
  for (int i=0; i<9; i++) for (int j=i+1; j<10; j++) ans ^= x[i] | x[j];
  for (int i=0; i<8; i++) for (int j=i+1; j<9; j++) for (int k=j+1; k<10; k++) ans ^= x[i] | x[j] | x[k];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}