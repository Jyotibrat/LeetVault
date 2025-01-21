# Remove Duplicates From Sorted Array

## Problem Statement

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates in-place such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**. Then return *the number of unique elements in* `nums`.

Consider the number of unique elements of `nums` to be `k`, to get accepted, you need to do the following things:

1) Change the array `nums` such that the first `k` elements of `nums` contain the unique elements in the order they were present in `nums` initially. The remaining elements of `nums` are not important as well as the size of `nums`.

2) Return k.

**Custom Judge:**

The judge will test your solution with the following code:
```
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```
If all assertions pass, then your solution will be **accepted**.

## Example

**Input:**
```
nums = [1, 1, 2]
```
**Output:**
```
length = 2, nums = [1, 2, _]
```
**Explanation:**
```
Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. 
It doesn't matter what you leave beyond the new length.
```

## How to Use

1. **Clone the repository** to your local machine using:
   ```sh
   git clone "https://github.com/LeetVault.git"
   ```

2. **Navigate** to the `Remove Duplicates From Sorted Array` directory:
   ```sh
   cd "Remove Duplicates From Sorted Array"
   ```

3. **Run the Program**: Execute the python program.
   ```sh
    python Remove_Duplicates_From_Sorted_Array.py
   ```