#include<bits/stdc++.h>
using namespace std;
int findarea(int x1,int y1,int x2,int y2,int x3,int y3){
    return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
}
int findinside(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y){
    int A=findarea(x1,y1,x2,y2,x3,y3);
    int A1=findarea(x2,y2,x3,y3,x,y);
    int A2=findarea(x1,y1,x3,y3,x,y);
    int A3=findarea(x1,y1,x2,y2,x,y);
    if(A==A1+A2+A3){
        return 1;
    }
    else
        return 0;
}
int main(){
    int x1,y1,x2,y2,x3,y3,x,y;
    cin >> x1 >> y1 >> x2 >> y2>> x3 >> y3;
    cin >> x >> y;
    if(findinside(x1,y1,x2,y2,x3,y3,x,y)==1){
        cout << "INSIDE" << endl;
    }
    else
        cout << "OUTSIDE" << endl;
}
