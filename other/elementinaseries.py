class Solution:
    def NthTermOfSeries(self, N):
        arr = [int(x) for x in list('{0:0b}'.format(N-1))]
        ans = []
        for digit in arr:
            if digit == 0:
                ans.append(4)
            else:
                ans.append(7)
        strings = [str(integer) for integer in ans]
        a_string = "".join(strings)
        return int(a_string)

    

menarik = Solution()
print(menarik.NthTermOfSeries(1))
        