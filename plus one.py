class Solution:
    def increment(self, arr, N):
        arr[N-1]+=1
        carry = arr[N-1]/10
        arr[N-1] = arr[N-1]%10
        for i in range(N-2,-1,-1):
            if(carry == 1):
                arr[i]+=1
                carry=arr[i]/10
                arr[i]=arr[i]%10
        if(carry == 1):
            arr.insert(0,1)
        return arr
        
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        ptr = ob.increment(arr,N)
        for i in ptr:
            print(i,end=" ")
        print()
