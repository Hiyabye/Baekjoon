#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<string> st;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    st.insert(s);
  }

  for (int i=1; i<n; i++) {
    string s; cin >> s;
    st.erase(s);
  }
  cout << *st.begin();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}