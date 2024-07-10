#include <bits/stdc++.h>
using namespace std;

template <class T> using V = vector<T>;
#define all(x) begin(x), end(x)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  V<int> v(n);
  for (auto &x : v) {
    cin >> x;
  }
  sort(all(v));
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int nums_greater_eq = n - i;
    if (nums_greater_eq >= v[i]) {
      ans = max(ans, v[i]);
    } else {
      ans = max(nums_greater_eq, ans);
    }
  }
  cout << ans << endl;
}
