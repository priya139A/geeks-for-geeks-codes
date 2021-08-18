n=int(input())
l=list(map(int,input().split(" ")))
l.sort()
for i in range(len(l)):
    if(l[i]>=0 and l[i]+1 not in l):
        print(l[i]+1)
        break
