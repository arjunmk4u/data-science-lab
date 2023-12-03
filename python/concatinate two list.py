# Program to concatinate two list 

# Taking multiple inputs from the user and storing them list1
num_of_inputs = int(input("Enter the number of inputs for list 1: "))

list1 = []
list2 = []
print(f'Enter {num_of_inputs} elements')
for i in range(num_of_inputs):
    user_input = input()
    list1.append(user_input)

# Taking multiple inputs from the user and storing them list2
num_of_inputs_2 = int(input("Enter the number of inputs for list 2: "))
print(f'Enter {num_of_inputs_2} elements')
for i in range(num_of_inputs_2):
    user_input_2 = input()
    list1.append(user_input_2)

# Displaying the concatinated list
print(list1 + list2)
