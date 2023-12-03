# Program to print factorial using recursion 

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Taking input from the user
num = int(input("Enter a number to calculate its factorial: "))

# Calculating and printing the factorial
result = factorial(num)
print(f"The factorial of {num} is: {result}")
