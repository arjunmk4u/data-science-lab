#Program to print n number of fibanacci series



# Taking input from the user
n = int(input("Enter the number of Fibonacci numbers to generate: "))

fib_series = []
a, b = 0, 1

for _ in range(n):
    fib_series.append(a)
    a, b = b, a + b



# Generating and printing the Fibonacci series
print(f"The first {n} numbers in the Fibonacci series are: {fib_series}")
