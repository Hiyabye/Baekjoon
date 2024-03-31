#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> v(6);
  for (int i=0; i<6; i++) cin >> v[i];
  if (*max_element(v.begin(), v.end()) == 0) return false;

  sort(v.begin(), v.end());
  int sum = v[1] + v[2] + v[3] + v[4];

  cout << sum / 4;
  if (sum % 4 == 2) cout << ".5";
  else if (sum % 4) cout << "." << (sum % 4) * 25;
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}