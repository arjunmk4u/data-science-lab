# Program to check whether a number is prime or not 

# Taking input from the user
num = int(input("Enter a number: "))


if num <= 1:
    print(f"{num} is not a prime number.")
elif num == 2:
    print(f"{num} is a prime number.")
elif num % 2 == 0:
    print(f"{num} is not a prime number.")
else:
    # Check for factors up to the square root of the number
    for i in range(3, int(num**0.5) + 1, 2):
        if num % i == 0:
            print(f"{num} is not a prime number.")
    print(f"{num} is a prime number.")

