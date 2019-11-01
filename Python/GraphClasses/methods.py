import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt

x1 = [1, 3, 5, 7, 9]
y1 = [2, 3, 7, 1, 7]

x2 = [2, 4, 6, 8, 10]
y2 = [5, 1, 3, 7, 4]
titulo = "Scatterplot: Grafico de Dispersao"
eixox = "Eixo X"
eixoy = "Eixo Y"

# Legendas
plt.title(titulo)
plt.xlabel(eixox)
plt.ylabel(eixoy)

plt.scatter(x1, y1, label = "Meus pontos", color = 'c', marker = '.', s = 100)
plt.plot(x1, y1, color = 'k', linestyle = ':')
plt.legend()

#plt.show()
plt.savefig("exemplo1.png", dpi=300)

# .savefig - Salvar uma figura
# parametro dpi = Resolucao da figura 

# .scatter - Grafico de dispersao
# .plot - Grafico de linha
# .bar - Grafico de barras


# Documentação oficial do Matplotlib
# Fonte: https://matplotlib.org/api/_as_gen/matplotlib.pyplot.plot.html

# Label (label)
# Adiciona uma legenda ou descricao ao grafico

# Largura da linha (linewidth)

# Cores (color)
# 'b' - blue
# 'g' - green
# 'r' - red
# 'c' - cyan
# 'm' - magenta
# 'y' - yellow
# 'k' - black
# 'w' - white

# Marcadores (marker)
# '.' point marker
# ',' pixel marker
# 'o' circle marker
# 'v' triangle_down marker
# '^' triangle_up marker
# '<' triangle_left marker
# '>' triangle_right marker
# '1' tri_down marker
# '2' tri_up marker
# '3' tri_left marker
# '4' tri_right marker
# 's' square marker
# 'p' pentagon marker
# '*' star marker
# 'h' hexagon1 marker
# 'H' hexagon2 marker
# '+' plus marker
# 'x' x marker
# 'D' diamond marker
# 'd' thin_diamond marker
# '|' vline marker
# '_' hline marker

# Tipos de linha (linestyle)
# '-' solid line style
# '--' dashed line style
# '-,' dash-dot line style
# ':' dotted line style
