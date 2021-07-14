#User function Template for python3


class Solution:
    def nextLargerElement(self,arr,n):
        result=[0]*n
        dummy=[]
        for i in range(n-1,-1,-1):
            if len(dummy)==0:
                result[i]=-1
            elif (len(dummy)>0 and dummy[-1]>arr[i]):
                result[i]=dummy[-1]
            elif (len(dummy)>0 and dummy[-1]<=arr[i]):
                while len(dummy)>0 and dummy[-1]<arr[i]:
                    dummy.pop()
                if len(dummy)==0:
                    result[i]=-1
                else:
                    result[i]=dummy[-1]
            dummy.append(arr[i])
        
        return result
#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())

        a = list(map(int,input().strip().split()))
        obj = Solution()
        res = obj.nextLargerElement(a,n)
        for i in range (len (res)):
            print (res[i], end = " ")
        print ()
# } Driver Code Ends
