#include <iostream>
#include <vector>
using namespace std;

vector<int> input(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> ret(5, 0);
  for (int i=0; i<n; i++) ret[v[i]]++;
  return ret;
}

char solve(void) {
  vector<int> a = input();
  vector<int> b = input();

  for (int i=4; i>=1; i--) {
    if (a[i] != b[i]) return a[i] > b[i] ? 'A' : 'B';
  }
  return 'D';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << solve() << "\n";
  return 0;
}