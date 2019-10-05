num = int(input("Insira sua idade: "))

if num < 18:
    print("Eh menor de idade")
else:
    print("Eh maior de idade")

nota1 = int(input("Digite uma nota: "))
nota2 = int(input("Digite outra nota: "))

media = (nota1 + nota2)/2

if media < 6:
    print("Reprovado")
else:
    print("Aprovado")

a = 5
b = 7
c = 2

delta = (b * b) - (4 * a * c)

x1 = ((b*(-1)) + (delta ** (1/2)))/2*a
x2 = ((b*(-1)) - (delta ** (1/2)))/2*a

print("x1 = " + str(x1) + " x2 = " + str(x2))

lista = [65, 5, 31]

lista.sort()

print(lista)

num = int(input("Escreva um numero: "))
num2 = int(input("Escreva outro numero: "))
sinal = input("escreva um sinal: ")

if sinal == '+':
    num3 = num + num2
elif sinal == '-':
    num3 = num - num2
elif sinal == '*':
    num3 = num * num2
elif sinal == '/':
    num3 = num / num2

print(num3)
