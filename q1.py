# Q - 1
S = input().strip()
seen_numbers = set()
n = len(S)
for i in range(n):
    for j in range(i, min(n, i + 6)):
        num_str = S[i:j + 1]
        if num_str[0] != '0' or num_str == '0':
            seen_numbers.add(int(num_str))

smallest_absent = 0
while smallest_absent in seen_numbers:
    smallest_absent += 1
print(smallest_absent)
