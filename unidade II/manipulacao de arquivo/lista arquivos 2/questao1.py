def main():
    num_funcionarios = int(input("Informe o número de funcionários: "))

    with open("funcionarios.txt", "w") as arquivo:
        for i in range(num_funcionarios):
            print(f"\nFuncionário {i + 1}:")
            id_funcionario = input("ID: ")
            nome_funcionario = input("Nome: ")
            salario_funcionario = input("Salário: ")

            arquivo.write(f"{id_funcionario} {nome_funcionario} {salario_funcionario}\n")

    print("\nInformações dos funcionários foram armazenadas no arquivo 'funcionarios.txt'")

if __name__ == "__main__":
    main()
