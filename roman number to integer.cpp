// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str) {
	map<char, int> m;
	m.insert({ 'I', 1 });
	m.insert({ 'V', 5 });
	m.insert({ 'X', 10 });
	m.insert({ 'L', 50 });
	m.insert({ 'C', 100 });
	m.insert({ 'D', 500 });
	m.insert({ 'M', 1000 });
	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
	    if (m[str[i]] < m[str[i + 1]])
        {
            sum+=m[str[i+1]]-m[str[i]];
            i++;
            continue;
        }
        sum += m[str[i]];
	}
	return sum;
}
