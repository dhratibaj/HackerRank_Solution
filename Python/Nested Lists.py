if __name__ == '__main__':
    l,sc=[],[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        l.append([name,score])
        sc.append(score)
    val=(sorted(list(set(sc)))[1])
    l.sort()
    for i in l:
        if i[1]==val:
            print(i[0])
