with open('entrada_q3.txt', 'r') as arquivo_entrada:
    linhas = arquivo_entrada.readlines()

with open('saida_q3.txt', 'w') as arquivo_saida:
    for linha in linhas:
        nome, nota1, nota2, nota3 = linha.split('\t')
        
        media = (float(nota1) + float(nota2) + float(nota3))/3

        arquivo_saida.write(f'{nome} {media} {"Aprovado" if media >= 7 else "Reprovado"}\r ')