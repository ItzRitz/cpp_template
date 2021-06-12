#include <bits/stdc++.h>

using namespace std;

// Constants
#define INF 				1e18
#define MOD 				1000000007
#define PI 					3.1415926535897932384626

// Redefinations
#define ll 					long long int
#define vi 					vector<int>
#define pii 				pair<int,int>
#define vvi 				vector<vi>
#define vll 				vector<ll>
#define vvll 				vector<vll>
#define vpii 				vector<pii>
#define pb 					push_back
#define mp 					make_pair
#define F 					first
#define S 					second

// C style I/O
#define si(x)				scanf("%d",&x)
#define sl(x)				scanf("%lld",&x)
#define ss(s)				scanf("%s",s)
#define pi(x)				printf("%d\n",x)
#define pl(x)				printf("%lld\n",x)
#define ps(s)				printf("%s\n",s)

// Loops
#define FO(a,b,c) 			for(int i=a; i<b; i+=c)
#define FR(a,b,c) 			for(int i=a; i>=b; i-=c)
#define FA(it, a) 			for(auto it = a.begin(); it != a.end(); it++)
#define FAR(it, a) 			for(auto it = --a.end(); it != --a.begin(); it--)

// Debug
#define deb(x)  			cout<<#x<<"="<<x<<endl;
#define debb(x,y)  			cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl;

// Others
#define SORT(a) 			sort(a.begin(),a.end());
#define clr(x)  			memset(x, 0, sizeof(x))
#define test_cases(x)		int x; si(x); while(x--)
#define all(x) 				x.begin(), x.end()
#define SP(x,y)       	  fixed<<setprecision(y)<<x 

void fastIO(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}

void OJ(){
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
}

template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}

template<typename... T>
void write(T&&... args) { 
	((cout << args << " "), ...);
}

template <class T>
void print(T var)
{
	cout<<var<<endl;
}

template <class T>
void print(vector<T> vec)
{
	FA(v, vec)
		print(*v);
	cout << endl;
}

int mpow(int base, int exp) {
  base %= MOD;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % MOD;
    base = ((ll)base * base) % MOD;
    exp >>= 1;
  }
  return result;
}


// Code starts here

void solve()
{
	fastIO();
	w(x){

	}

	
}

// Main starts here
int main()
{
	solve();
	return 0;
}
