#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) a[i] = i+1;

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    cout << "? " << a[i] << " " << a[j] << endl;
    char c; cin >> c;
    if (c == '<') swap(a[i], a[j]);
  }

  cout << "!";
  for (int i=0; i<n; i++) cout << " " << a[i];
  cout << endl;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}