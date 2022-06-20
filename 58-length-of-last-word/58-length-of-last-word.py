class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        data = s.split()

        return (len(data[len(data)-1]))