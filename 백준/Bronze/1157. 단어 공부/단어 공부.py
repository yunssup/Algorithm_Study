word=input().upper() #문자 입력받고 대분자로 변환
word_list=list(set(word)) #set함수 사용하여 중복 문자값 제거 후 변수 저장

cnt=[]
for i in word_list:
    count = word.count
    cnt.append(count(i))

if cnt.count(max(cnt))>1:
    print("?")
else:
    print(word_list[(cnt.index(max(cnt)))])