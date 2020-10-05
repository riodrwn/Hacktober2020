def validMountainArray(self, A: List[int]) -> bool:
        if len(A)<3:
            return False
        else:
            t,t2=A[0],A[len(A)-1]
            for i in range (len(A)-1):
                if A[i]==A[i+1]:
                    return False
                elif A[i]<A[i+1]:
                    continue
                else:
                    t,j=A[i],i
                    print(t,j)
                    break
            for i in range(len(A)-2,-1,-1):
                if A[i]==A[i+1]:
                    return False
                elif A[i]>A[i+1]:
                    continue
                else:
                    t2,j2=A[i+1],i+1
                    print(t2,j2)
                    break
            if t==t2 and j==j2:
                #print(t,t2)
                return True
            else:
                return False
