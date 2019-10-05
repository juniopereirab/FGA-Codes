# Boxplot - diagrama de caixa

import matplotlib.pyplot as plt
import random

vetor = []

for i in range(10000):
    random_num = random.randint(0,50000)
    vetor.append(random_num)

plt.boxplot(vetor)
plt.title("Meu Boxplot")
plt.show()
