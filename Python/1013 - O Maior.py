a, b, c = input().split()

a, b, c = [int(a), int(b), int(c)]

maior = (a+b+abs(a-b))/2
maior = (maior+c+abs(maior-c))/2

print("{:.0f} eh o maior".format(maior))