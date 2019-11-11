n = int(input())
x = 0
y = 0

for i in range(n):
	num = int(input())
	if(num >= 10 and num <= 20):
		x += 1
	else:
		y += 1

print("{} in\n{} out\n".format(x, y))
