# Program to check whether a key is already present in dictionary

myDict = {}
#taking input from user and storing them in a dictionary
num_of_entries = int(input("Enter the number of entries: "))

for i in range(num_of_entries):
    key = input(f"Enter key for entry {i + 1}: ")
    value = input(f"Enter value for entry {i + 1}: ")
    myDict[key] = value

# print(myDict)

#searching whether the key is exist or not
search_element = input("Enter the key you want to check")
if search_element in myDict:
    print(f'{search_element} exists')
else:
    print(f'{search_element} not exists')