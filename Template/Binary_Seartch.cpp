// bound( 處理有序的 )
vector<int> v = {1, 2, 4, 6, 7, 8, 310, 4579, 52137940};
sort(v.begin(), v.end());
auto a = lower_bound(v.begin(), v.end(), lower)
auto b = lower_bound(v.begin(), v.end(), high)
cout << distance(a, b);

// 手刻 ( 無序 )
vector<int> v = {1, 2, 4, 6, 7, 8, 310, 4579, 52137940};
int l = 0, r = v.size() - 1;
while (l <= r)
{ 
  int mid = (l + r) >> 1;
  if (v[mid] == tar) ans = mid;
  else if (v[mid] < t) l = mid + 1;
  else r = mid - 1;
}
