import numpy as np
import matplotlib.pyplot as plt

dados = open("testeDep.csv").readlines()
del dados[0]

for i in range(len(dados)):
    dados[i] = dados[i].split(";")

print(dados)

id_vot = {}
voto = {}
orient_part = {}
orient_gov = {}

for i in range(len(dados)):
    for j in range(len(dados[i])):
        dados[i][j] = dados[i][j].replace('\n', '')

print(dados)

# id_vot = 1
# voto = 12
# voto_part = 13
# voto _gov = 14

for i in dados:
    id_vot[i[0]] = 0

for j in ['Sim', 'Abstenção', 'Ausente', 'Obstrução', 'Não']:
    voto[j] = 0

for j in ['Sim', 'Obstrução', 'Liberado', 'Não']:
    orient_part[j] = 0

for j in ['Sim', 'Obstrução', 'Liberado', 'Não']:
    orient_gov[j] = 0

for i in dados:
    id_vot[i[0]] += 1
    voto[i[11]] += 1
    orient_part[i[12]] += 1
    orient_gov[i[13]] += 1


a = []
b = []
c = []
d = []

a.append(id_vot)
b.append(voto)
c.append(orient_part)
d.append(orient_gov)


category_names = ['Sim', 'Abstenção', 'Ausente', 'Obstrução', 'Não']

results = {}

for i in a:
    for j in i.keys():
        results[j] = []

for k in a:
    for l in k.keys():
        for i in b:
            for j in ['Sim', 'Abstenção', 'Ausente', 'Obstrução', 'Não']:
                results[l].append(i[j])

print(results)

def survey(results, category_names):
    labels = list(results.keys())
    data = np.array(list(results.values()))
    data_cum = data.cumsum(axis=1)
    category_colors = plt.get_cmap('RdYlGn')(
        np.linspace(0.15, 0.85, data.shape[1]))

    fig, ax = plt.subplots(figsize=(9.2, 5))
    ax.invert_yaxis()
    ax.xaxis.set_visible(False)
    ax.set_xlim(0, np.sum(data, axis=1).max())

    for i, (colname, color) in enumerate(zip(category_names, category_colors)):
        widths = data[:, i]
        starts = data_cum[:, i] - widths
        ax.barh(labels, widths, left=starts, height=0.5, label=colname, color=color)
        xcenters = starts + widths / 2

        r, g, b, _ = color
        text_color = 'white' if r * g * b < 0.5 else 'darkgrey'
        for y, (x, c) in enumerate(zip(xcenters, widths)):
            ax.text(x, y, str(int(c)), ha = 'center', va = 'center', color = text_color)
            ax.legend(ncol = len(category_names), bbox_to_anchor=(0,1), loc = 'lower left', fontsize = 'small')

    plt.show()
    return fig, ax


survey(results, category_names)
