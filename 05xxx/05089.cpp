#include <iostream>
#include <set>
#include <string>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  cin.ignore();
  if (n == 0) return false;

  set<string> st;
  while (n--) {
    string s; getline(cin, s);
    st.insert(s);
  }
  
  cout << "Week " << idx << " " << st.size() << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}