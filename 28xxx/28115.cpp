#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& a) {
  int n = a.size();
  for (int i=2; i<n; i++) {
    if (a[i] - a[i-1] != a[1] - a[0]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  if (!check(a)) {
    cout << "NO";
    return;
  }

  cout << "YES\n";
  for (int i=0; i<n; i++) cout << a[i] << " ";
  cout << "\n";
  for (int i=0; i<n; i++) cout << "0 ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}