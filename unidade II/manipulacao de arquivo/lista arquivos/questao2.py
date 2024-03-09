with open('numeros.txt', 'r') as entrada_numeros:
    linhas = entrada_numeros.read()

numeros = linhas.split()

numeros = [int(i) for i in numeros]

maior_num = max(numeros)
menor_num= min(numeros)

media_num = sum(numeros) / len(numeros)

with open('saida_numeros.txt', 'w') as saida_numeros:
    saida_numeros.write(f'menor elemento: {menor_num}\nmaior elemento: {maior_num}\n media dos elementos: {media_num}')
