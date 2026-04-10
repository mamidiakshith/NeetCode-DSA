class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        for i in range(len(arr)):
            maxi = -1
            for j in range(i + 1, len(arr)):
                maxi = max(maxi, arr[j])
            arr[i] = maxi
        return arr
        
        