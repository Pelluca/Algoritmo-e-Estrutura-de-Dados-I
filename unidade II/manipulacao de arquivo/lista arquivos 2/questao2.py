def main():
    try:
        num_alunos = int(input("Informe o número de alunos: "))

        with open("alunos_notas.txt", "w") as arquivo:
            for index in range(num_alunos):
                nome_aluno = input(f"Informe o nome do aluno {index+1}: ")
                notas_aluno = input("Informe as notas do aluno (separadas por espaço): ")

                arquivo.write(f"{nome_aluno}: {notas_aluno}\n")

        print("\nAs informações dos alunos foram armazenadas no arquivo 'alunos_notas.txt'")

    except ValueError:
        print("Insira um número válido de alunos")


if __name__ == "__main__":
    main()
