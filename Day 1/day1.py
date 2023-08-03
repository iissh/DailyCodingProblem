nums = [10, 15, 3, 7]
k = 17

def compute(nums, k):
    # sort the list of numbers O(nlogn)
    nums.sort()

    # Set L and R Pointers
    l = len(nums) - 1
    r = 0

    # Loop through num list to determine if there is a valid answer
    # Runtime: O(n)
    while (r < l):
        if nums[l] + nums[r] == k:
            return True
        elif nums[l] + nums[r] < k:
            r += 1
        else:
            l -= 1
    return False

def main():
    print(compute(nums, k))

if __name__ == "__main__":
    main()
