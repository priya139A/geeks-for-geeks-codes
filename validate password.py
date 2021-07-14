t=int(input())
for i in range(t):
    str=input()
    up=int(0)
    low=int(0)
    num=int(0)
    for j in range(len(str)):
        if(str[j].isupper()):
            up+=1
        elif(str[j].islower()):
            low+=1
        elif(str[j]=="1" or str[j]=="2" or str[j]=="3" or str[j]=="4" or str[j]=="5" or str[j]=="6" or str[j]=="7"  or str[j]=="8"  or str[j]=="9" or str[j]=="0"):
            num+=1
    if(up!=0 and low!=0 and num!=0):
        print("YES")
    else:
        print("NO")
