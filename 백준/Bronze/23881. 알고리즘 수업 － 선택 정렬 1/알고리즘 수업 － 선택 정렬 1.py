def selection_sort(A, K):
    n = len(A)
    swap_count = 0

    for i in range(n - 1, 0, -1):
        max_idx = i
        for j in range(i):
            if A[j] > A[max_idx]:
                max_idx = j

        if max_idx != i:
            A[i], A[max_idx] = A[max_idx], A[i]
            swap_count += 1

            if swap_count == K:
                print(min(A[i], A[max_idx]), max(A[i], A[max_idx]))
                return

    print(-1)

# 입력 받는 부분
N, K = map(int, input().split())
A = list(map(int, input().split()))

# 함수 호출
selection_sort(A, K)
