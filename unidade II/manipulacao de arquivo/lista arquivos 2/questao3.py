# Definição da estrutura Fruta
class Fruta:
    def __init__(self, nome, preco):
        self.nome = nome
        self.preco = preco

def main():
    try:
        with open("frutas.txt", "w") as arquivo:
            while True:
                nome_fruta = input("Digite o nome da fruta (ou 'sair' para encerrar): ")
                
                if nome_fruta.lower() == 'sair':
                    break

                preco_fruta = float(input("Digite o preço da fruta: "))

                fruta = Fruta(nome_fruta, preco_fruta)

                arquivo.write(f"{fruta.nome},{fruta.preco}\n")

        print("\nCadastro de frutas concluído. As informações foram salvas no arquivo 'frutas.txt'.")

    except ValueError:
        print("Por favor, insira um preço válido para a fruta.")
    except Exception as e:
        print(f"Ocorreu um erro: {e}")

if __name__ == "__main__":
    main()
