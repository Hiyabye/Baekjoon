#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> t(4);
  for (int i=0; i<4; i++) cin >> t[i];

  int sum = 300;
  for (int i=0; i<4; i++) sum += t[i];
  return sum <= 1800;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}