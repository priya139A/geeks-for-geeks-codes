#include <bits/stdc++.h>

using namespace std;

long long GCD(long long a,long long  b){
	if(a==0){
		return b;
	}
	else
		return GCD( b % a,a);
}
long long common_factors(long long num1,long long num2){
	long long n=GCD(num1,num2);
	int res=0;
	for(long long i=1;i<=sqrt(n);i++){
		if(n % i == 0){
			if( n/i ==i)
				res+=1;
			else	
				res+=2;
		}
	}
	return res;
}
int main() {
	long long num1,num2;
	cin >> num1 >> num2;								
	long long res=common_factors(num1,num2);	
	cout << res << endl;
}



