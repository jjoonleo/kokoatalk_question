arr = []
re = 0
average = int(0)
inp = int(input("몇번 입력 받을까요?"))

for i in range(0,inp):
    arr.append(input())
    re = int(arr[i]) + re

average = re / inp
print("점수의 합은:",re,"평균은:", average,"입니다.")
