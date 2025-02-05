# This is my first Python program learning the basics of the syntax


def fun(n):
    x=2
    count = 0
    while count < n:
        for d in range(2, int(x ** 0.5)+1):
            if x % d == 0:
                break
        else:
            print(x)
            count += 1
        x += 1
        

a = 10
fun(a)



