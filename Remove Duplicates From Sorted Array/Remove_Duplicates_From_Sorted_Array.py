from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n_nums = []
        for element in nums:
            if element not in n_nums:
                n_nums.append(element)
        nums[:] = n_nums
        return len(nums)

def get_input() -> List[int]:
    input_str = input("Enter a list of integers separated by spaces: ")
    nums = list(map(int, input_str.split()))
    return nums

sol = Solution()
nums = get_input()
result = sol.removeDuplicates(nums)
print("Updated list:", nums)
print("Length of list after removing duplicates:", result)