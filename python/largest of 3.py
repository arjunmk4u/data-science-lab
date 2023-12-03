#program to find largest of 3 numbers


# taking input from the user 
a = int(input("Enter 3 numbers"))
b = int(input())
c = int(input())


# check which number is larger
if a>b & a>c:
    print(f'{a} is larger')
elif b>a & b>c:
    print(f'{b} is larger')
else:
    print(f'{c} is larger')