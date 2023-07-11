class Solution(object):
    def countAndSay(self, n):
        if n == 1:
            return "1"
        s = self.countAndSay(n-1)
        res = ""
        counter = 0

        for i in range(0, len(s)):
            counter += 1
            if i == len(s) - 1 or s[i] != s[i + 1]:
                res = res + str(counter) + s[i]
                counter = 0

        return res