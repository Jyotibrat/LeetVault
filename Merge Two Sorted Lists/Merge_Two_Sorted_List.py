def get_input(prompt):
    input_str = input(prompt)
    return list(map(int, input_str.split()))

list1 = get_input("Enter the first list of integers separated by spaces: ")
list2 = get_input("Enter the second list of integers separated by spaces: ")

size1 = len(list1)
size2 = len(list2)

for i in range(0, size1):
    for j in range(0, size2):
        if list2[j] >= list1[i]:
            list1.append(list2[j])
            break

list1.sort()

print("Merged and sorted list:", list1)