class Solution:
    def rearrange(self,arr, n):
        pos=[]
        neg=[]
        res=[]
        for i in range(n):
            if(arr[i] >= 0):
                pos.append(arr[i])
            else:
                neg.append(arr[i])
        i=int(0)
        j=int(0)
        k=int(0)
        while(i<len(pos) and j<len(neg)):
            arr[k]=pos[i]
            k+=1
            i+=1
            arr[k]=neg[j]
            k+=1
            j+=1
        while(i < len(pos)):
            arr[k]=pos[i]
            k+=1
            i+=1
        while(j < len(neg)):
            arr[k]=neg[j]
            k+=1
            j+=1
        return arr
      
if __name__ == '__main__':
	tc = int(input())
	while tc > 0:
		n = int(input())
		arr = list(map(int, input().strip().split()))
		ob = Solution()
		ob.rearrange(arr, n)
		for x in arr:
			print(x, end=" ")
		print()
		tc -= 1
