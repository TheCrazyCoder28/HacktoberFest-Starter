#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ld long double
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const ll M = 1e9 + 7;
typedef pair<int, int>	pii;
typedef pair<ll, ll>		pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;

int power(int a, int b) {
	if (b == 0) return 1;
	int temp = power(a, b / 2);
	int result = temp * temp;
	if (result % 2 == 1) result *= a;
	return result;
}
ll ModExponent(ll p, ll q)
{
	ll int y = 0;
	if (q == 0) {return 1;}
	if (q % 2 == 0)
	{
		y = ModExponent(p, q / 2);
		return (y * y) % M;
	}
	else
	{
		y = ModExponent(p, q - 1);
		return ((p % M) * (y)) % M;
	}

}
bool is_prime(int a)
{
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
void PrimeNumbers()
{
	//time complexity using sieve of Eratoshthenes O(loglogn)

	int n;
	cin >> n;
	int prime[n + 1];
	for (int i = 0; i <= n; i++)
	{
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 0;
	//As the pair repeat after the square root
	//of any number so we will just check till square root
	//and update all the multiples of the no. to 0
	for (int i = 0; i <= sqrt(n); i++)
	{
		if (prime[i] == 1)
		{
			for (int j = 2; i * j <= n; j++)
			{
				prime[i * j] = 0;
			}
		}
	}
	//print all index that contains 1
	for (int i = 0; i <= n; i++)
	{
		if (prime[i] == 1)
		{
			cout << i << " ";
		}
	}
	cout << "\n";

}
int test = 1;
void solve()
{
	int n, m, A, B;
	cin >> n >> m >> A >> B;

	vector<vector<int> > arr(n, vector<int> (m, 1));

	int left = 0, top = 0, right = 0;
	for (int j = 0; j < m; j++) {
		top += arr[0][j];
	}

	for (int i = 1; i < n; i++) {
		left += arr[i][0];
	}

	for (int i = 1; i < n; i++) {
		right += arr[i][m - 1];
	}

	if ((top + left - 1) > A || (top + right - 1) > B || (A - (top + left - 1) ) <= 0 || (B - (top + right - 1) ) <= 0 || (top + left) > 1000 || (top + right) > 1000) {
		cout << "Case #" << test << ": " << "Impossible" << endl;
	}
	else {
		cout << "Case #" << test << ": " << "Possible" << endl;
		// cout << top << " " << left << " " << right << " " << A << " " << B << endl;
		//cout << A - (top + left - 1) << endl;
		arr[n - 1][0] = B - (top + left - 1);
		arr[n - 1][m - 1] = A - (top + right - 1);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}




}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
		test++;
	}
	return 0;
}