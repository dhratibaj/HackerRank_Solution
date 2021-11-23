n=int(input())
if n%2 != 0:
    print("Weird")
else:
    if n>20 or (n<=5 and n>=2):
        print("Not Weird")
    else:
        print("Weird")
