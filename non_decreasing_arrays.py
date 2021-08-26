def next_mutliple(a,b):
    temp=0
    while(temp<b):
        temp=temp+a
    return temp
def non_decreasing_array(l,n):
    temp=l[0]
    res=[]
    res.append(temp)
    for i in range(1,n):
        if(temp > l[i] and temp%l[i]==0):
            res.append(temp)
        elif(temp == l[i] and temp%l[i]!=0):
            res.append(l[i])
        elif(temp==l[i] and temp%l[i]==0):
            res.append(temp)
        elif(temp > l[i] and temp%l[i]!=0):
            res.append(next_mutliple(l[i],temp))
        else:
            res.append(l[i])
        temp=res[i]
    return res
t=int(input())
for i in range(t):
    n=int(input())
    res=[]
    l=list(map(int,input().split()))
    res=non_decreasing_array(l,n)
    print(' '.join(map(str,res)))  
