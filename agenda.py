def menu():
    print('''
------ AGENDA ELETRÔNICA ------
SELECIONE UMA DAS OPÇÕES ABAIXO
          
[1] - Adicionar Pessoa
[2] - Consultar Pessoa
[3] - Exibir Registros
[4] - Excluir Registros
[0] - Sair
''')

def criarPessoa(pessoas):
    nome = input("Digite o nome: ").lower()
    cpf = input("Digite o CPF: ")
    telefone = input("Digite o telefone: ")

    pessoas.append([nome, cpf, telefone])

    with open("agenda.txt","a") as arquivo:
        for pessoa in pessoas:
            arquivo.write(f"{pessoa[0],pessoa[1],pessoa[2]}\n")

def consultarPessoa():
    nome_procurado = input("Digite o nome da pessoa: ")
    with open("agenda.txt","r") as arquivo:
        pessoas_lidas = arquivo.readlines()
    
    for pessoa in pessoas_lidas:
        nome_pessoa = pessoa.replace("(","").replace(")","").replace("'","").split(",")[0]
        cpf_pessoa = pessoa.replace("(","").replace(")","").replace("'","").split(",")[1]
        telefone_pessoa = pessoa.replace("(","").replace(")","").replace("'","").split(",")[2]

        if nome_procurado == nome_pessoa:
            print("Pessoa encontrada:")
            print(f"Nome: {nome_pessoa}, CPF: {cpf_pessoa}, Telefone: {telefone_pessoa}")
            break
        else:
            print("Pessoa não encontrada.")

def exibirRegistros():
    with open("agenda.txt","r") as arquivo:
        pessoas_lidas = arquivo.readlines()
    
    for pessoa in pessoas_lidas:
        nome_pessoa = pessoa.replace("(","").replace(")","").replace("'","").split(",")[0]
        cpf_pessoa = pessoa.replace("(","").replace(")","").replace("'","").split(",")[1]
        telefone_pessoa = pessoa.replace("(","").replace(")","").replace("'","").split(",")[2]
        print(f"Nome: {nome_pessoa}, CPF: {cpf_pessoa}, Telefone: {telefone_pessoa}")

def excluirRegistros():
    with open("agenda.txt","w"):
        pass
    print("Os registros foram excluídos com sucesso!")

def main():
    opcao = 1
    pessoas = []
    while True:
        menu()
        opcao = int(input("Informe a opção: "))
        match opcao:
            case 1:
                criarPessoa(pessoas)
            case 2:
                consultarPessoa()
            case 3:
                exibirRegistros()
            case 4:
                excluirRegistros()
            case 0:
                break
            case _:
                print("Opção inválida.")

main()