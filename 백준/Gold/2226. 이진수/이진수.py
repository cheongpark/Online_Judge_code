count = 0
save = 0
n = int(input())

for i in range(0, n - 1):
    if count % 2:
        save = save * 2 - 1
    else:
        save = save * 2 + 1
    count += 1
print(save)