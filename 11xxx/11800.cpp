#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
vector<string> w = {"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};

void solve(int idx) {
  int a, b; cin >> a >> b;

  cout << "Case " << idx << ": ";
  if (a == b) cout << w[a];
  else if ((a == 5 && b == 6) || (a == 6 && b == 5)) cout << "Sheesh Beesh";
  else cout << v[max(a, b)] << " " << v[min(a, b)];
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}