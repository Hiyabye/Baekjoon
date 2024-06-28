  #include <iostream>
  #include <string>
  #include <algorithm>
  using namespace std;

  void solve(void) {
    string a; cin >> a;
    string b; cin >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string c = "";
    int carry = 0;
    for (int i=0; i<max(a.length(), b.length()); i++) {
      int x = i < a.length() ? a[i] - '0' : 0;
      int y = i < b.length() ? b[i] - '0' : 0;
      int z = x + y + carry;
      carry = z / 10;
      c += (z % 10) + '0';
    }
    if (carry) c += '1';
    reverse(c.begin(), c.end());

    cout << c;
  }

  int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
  }