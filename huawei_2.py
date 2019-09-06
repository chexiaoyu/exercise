import sys
if __name__ == "__main__":
    student = []
    n = int(sys.stdin.readline())
    for line in sys.stdin:
        student.append(int(line))
    for i in range(len(student)):
        tmp = student[i]
        if i == len(student) - 1:
            break
        if tmp > student[i + 1]:
            student[i] = student[i + 1]
            student[i + 1] = tmp
    i = n
    while i > 0:
        if student[i] == student[i - 1]:
            del student[i - 1]
            i -= 1
        else:
            i -= 1
    for i in student:
        print(i)
