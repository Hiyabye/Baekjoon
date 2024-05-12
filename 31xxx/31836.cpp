#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> a, b;
  for (int i=n; i>2; i-=3) {
    a.push_back(i);
    b.push_back(i-1);
    b.push_back(i-2);
  }
  if (n % 3 == 2) {
    a.push_back(1);
    b.push_back(2);
  }

  cout << a.size() << "\n";
  for (int x : a) cout << x << " ";
  cout << "\n" << b.size() << "\n";
  for (int x : b) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}