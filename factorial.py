# Factorial of a number 

def fact_rec(n):
    if n == 0:
        return 1
    return fact_rec(n-1) * n #Time Complexity = O(n)



num = int(input("Enter a number: "))

print(f"\n Factorial of {num} natural number : {fact_rec(num)}")