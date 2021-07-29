M,K=input().split(" ")
M=int(M)
K=int(K)
l=list(map(int,input().split()))
N=len(l)
for i in range(M):
    res=[]
    for j in range(len(l)-1):
        a=l[j]
        b=l[j+1]
        res.append(a^b)
    l.clear()
    for j in range(len(res)):
        l.append(res[j])
if(len(l) > K):
    print(l[K])
else:
    print("-1")
