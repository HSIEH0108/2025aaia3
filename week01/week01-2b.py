#week01-2b.py 使用python的版本2 使用 .find()函式
#LeetCode 28.Find the Index of the First Occurrence in a String
#在haystack乾稻草堆中找到 needle 針 (大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
