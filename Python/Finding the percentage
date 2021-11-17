if __name__ == '__main__':
    n = int(input())
    marks=0
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    for i in student_marks[query_name]:
        marks += float(i)
        
#any of the two of the following will work for 2 decimal point precision 
    #print('%.2f'%(marks/3))
    #print ("{0:.2f}".format(marks/3))
