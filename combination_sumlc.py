class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        results = []
        candidates.sort()
        
        def backtrack(remaining, stack, start_index):
            if remaining == 0:
                results.append(list(stack))
                return
            
            for i in range(start_index, len(candidates)):
                if candidates[i] > remaining:
                    break
                
                stack.append(candidates[i])
                backtrack(remaining - candidates[i], stack, i)
                stack.pop()

        backtrack(target, [], 0)
        return results