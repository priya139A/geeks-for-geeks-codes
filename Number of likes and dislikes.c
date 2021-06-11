
#include <stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<string.h>

using namespace std;

int main()
{
    char *A=(char*)malloc(100000*sizeof(char));
    char *P=(char*)malloc(100000*sizeof(char));
    scanf("\n%[^\n]s",A);
    scanf("\n%[^\n]s",P);
    int cnt=0;
    for(int i=0;i<strlen(A);i++){
        if(A[i]==P[i]){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
