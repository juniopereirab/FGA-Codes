import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt

x = [1, 3, 9, 4, 8]
y = [2, 3, 7, 1, 0]

titulo = "Grafico de barras"
eixox = "Eixo X"
eixoy = "Eixo Y"

# Legendas
plt.title(titulo)
plt.xlabel(eixox)
plt.ylabel(eixoy)

plt.plot(x, y)
plt.show()
