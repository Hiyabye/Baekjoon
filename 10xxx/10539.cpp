#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> b(n);
  for (int i=0; i<n; i++) cin >> b[i];

  cout << b[0];
  for (int i=1; i<n; i++) cout << " " << b[i]*(i+1)-b[i-1]*i;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}