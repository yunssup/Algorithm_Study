T = int(input()) # 테스트 개수
for i in range(T): #테스트 개수만큼 반복 진행
    R, S = input().split() #R번 반복, 문자열 S
    R = int(R) #R 정수화
    for j in S : 
        print(j*R, end='')
    print()