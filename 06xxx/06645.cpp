#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string name, op;
  double price;
};

bool solve(void) {
  int n; string s; cin >> n >> s;
  if (n == 0 && s == "END") return false;
  vector<Person> v(n);
  for (int i=0; i<n; i++) cin >> v[i].name >> v[i].op >> v[i].price;

  cout << s << "\n";
  for (int i=0; i<n; i++) {
    cout << v[i].name << ":";
    bool flag = false;
    for (int j=0; j<n; j++) {
      if (i == j) continue;
      if (v[i].op == "buy" && v[j].op == "sell" && v[j].price <= v[i].price) {
        cout << " " << v[j].name; flag = true;
      } else if (v[i].op == "sell" && v[j].op == "buy" && v[j].price >= v[i].price) {
        cout << " " << v[j].name; flag = true;
      }
    }
    if (!flag) cout << " NO-ONE";
    cout << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}