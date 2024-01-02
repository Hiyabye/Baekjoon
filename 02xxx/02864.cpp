#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b;
  cin >> a >> b;

  for (int i=0; i<a.size(); i++) if (a[i] == '6') a[i] = '5';
  for (int i=0; i<b.size(); i++) if (b[i] == '6') b[i] = '5';
  cout << stoi(a) + stoi(b) << " ";

  for (int i=0; i<a.size(); i++) if (a[i] == '5') a[i] = '6';
  for (int i=0; i<b.size(); i++) if (b[i] == '5') b[i] = '6';
  cout << stoi(a) + stoi(b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}