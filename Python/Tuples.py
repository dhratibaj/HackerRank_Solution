#An easy straight up approach
if __name__ == '__main__':
    n = int(raw_input())
    integer_list = map(int, raw_input().split())
t=tuple(integer_list)
print(hash(t))

#A much shorter code
if __name__ == '__main__':
    print(input()==0 or hash(tuple(map(int, input().split()))))
