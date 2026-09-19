class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        from collections import defaultdict
        import heapq

        mp = defaultdict(int)
        pq=[]
        ans=[]

        for num in nums:
            mp[num]+=1
        
        for num,freq in mp.items():
            heapq.heappush(pq,(freq,num))
            if len(pq)>k:
                heapq.heappop(pq)
        
        while pq:
            ans.append(heapq.heappop(pq)[1])
        
        return ans