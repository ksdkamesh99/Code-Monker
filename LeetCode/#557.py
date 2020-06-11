class Solution:
    def reverseWords(self, s: str) -> str:
        d=s.split(' ')
        d=[i[::-1] for i in d]
        return ' '.join(d)
        