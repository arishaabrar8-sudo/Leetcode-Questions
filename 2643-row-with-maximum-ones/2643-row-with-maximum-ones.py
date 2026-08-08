class Solution(object):
    def rowAndMaximumOnes(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[int]
        """
        l=[]
        for a in mat:
            count=0
            for b in a:
                if b==1:
                    count+=1
            l.append(count)  
        c=max(l)
        d=l.index(c)
        return [d,c]                   
        