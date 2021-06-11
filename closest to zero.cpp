#include<bits/stdc++.h>
using namespace std;

int Solve (int N, vector <int> A) {
   sort(A.begin(),A.end());
   std::vector<int>::iterator it;
   it=std::find(A.begin(),A.end(),0);
   if(it!= A.end()){
       return 0;
   }
   else{
       for(int i=0;i<N;i++){
           if(A[i]>0)
               return A[i];
       }
   }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector <int> A(N);
    for (int a_i = 0; a_i < N; ++a_i) {
        cin >> A[a_i];
    }
    int out = Solve(N, A);
    cout << out << "\n";
}
