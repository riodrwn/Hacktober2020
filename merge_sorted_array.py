def merge(self, a1: List[int], n: int, a2: List[int], m: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i=n+m-1
        j=n-1
        k=m-1
        while j>=0 and k>=0 and i>=0:
            if a1[j]>=a2[k]:
                a1[i]=a1[j]
                i=i-1
                j=j-1
            else:
                a1[i]=a2[k]
                k-=1
                i-=1
        while k>=0:
            a1[i]=a2[k]
            k-=1
            i-=1
