def product_array(l):
    dup=int(1)
    for i in range(len(l)):
        dup=l[i]*dup
    res=[]
    for i in range(len(l)):
        temp=int(dup/l[i])
        res.append(temp)
    return res
t=int(input())
for i in range(t):
    l= list(map(int,input().split()))
    print(product_array(l))
