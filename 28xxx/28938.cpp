#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int sum = 0;
  for (int i=0; i<n; i++) sum += v[i];
  cout << (sum > 0 ? "Right" : sum < 0 ? "Left" : "Stay");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}