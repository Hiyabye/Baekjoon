#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  cout << "SET " << idx << "\n";
  for (int i=0; i<n; i+=2) cout << v[i] << "\n";
  for (int i=n-1-(n&1); i>=0; i-=2) cout << v[i] << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}