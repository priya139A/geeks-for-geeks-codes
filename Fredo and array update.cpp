#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,temp,cnt=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> temp;
		cnt=cnt+temp;
	}
	int res=cnt/n +1;
	cout << res << endl;
}
