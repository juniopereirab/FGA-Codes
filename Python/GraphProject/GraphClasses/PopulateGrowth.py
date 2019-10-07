# Crescimento da Populacao Brasileira 1980 - 2016
# DataSUS
import matplotlib.pyplot as plt

dados = open("populacao-brasileira.csv").readlines()

x = []
y = []

for i in range(len(dados)):
    if i != 0:
        linha = dados[i].split(";")
        x.append(int(linha[0]))
        y.append(int(linha[1]))


plt.barh(x, y, color='#990000')
#plt.plot(x, y, linestyle='--', color='k')
#plt.scatter(x, y, color='')
plt.title("Crescimento da Populacao Brasileira 1980 - 2016")
plt.xlabel("Ano")
plt.ylabel("Populacao x 100.000.000")
plt.show()
#plt.savefig("PopulationGrowth.png", dpi=300)
