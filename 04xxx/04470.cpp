#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string s; getline(cin, s);
  cout << idx << ". " << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}