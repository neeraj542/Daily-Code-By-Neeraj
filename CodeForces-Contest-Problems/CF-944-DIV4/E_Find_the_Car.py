import bisect

num_cases = int(input())

for _ in range(num_cases):
    str_length, count, queries = map(int, input().split())
    alpha_values = list(map(int, input().split()))
    beta_values = list(map(int, input().split()))

    for _ in range(queries):
        x_value = int(input())

        position = bisect.bisect_left(alpha_values, x_value)

        if position < str_length and alpha_values[position] == x_value:
            print(beta_values[position], end=" ")
        else:
            left_alpha = alpha_values[position - 1] if position > 0 else 0
            right_alpha = alpha_values[position]
            left_beta = beta_values[position - 1] if position > 0 else 0
            right_beta = beta_values[position]

            print(left_beta + (x_value - left_alpha) * (right_beta - left_beta) // (right_alpha - left_alpha), end=" ")
    print()
