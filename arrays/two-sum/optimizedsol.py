
def twoSum(nums, target):
    seen = {}

    for i in range(len(nums)):
        num = nums[i]
        needed = target - num

        if needed in seen:
            return [seen[needed], i]

        seen[num] = i
