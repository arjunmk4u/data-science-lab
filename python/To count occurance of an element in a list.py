#Program to count the occurance of an element in a list

list = []
#taking input from the user
num_of_inputs = int(input("Enter the number of inputs for list : "))
print(f'Enter {num_of_inputs} elements')
for i in range(num_of_inputs):
    user_input_2 = input()
    list.append(user_input_2)

#taking which element has to be searched
counter = input("Enter the element you want to count")
print(f'{list.count(counter)} instances found')