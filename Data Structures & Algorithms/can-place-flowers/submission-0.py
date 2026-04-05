class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        oc=mc=0
        for i in flowerbed:
            if i==0:
                oc+=1
                if oc==3:
                    n-=1
            else:
                oc=0
            mc=max(mc,oc)
        if n==0:
            return True
        return False