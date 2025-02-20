import json

def menu():
    print('''
------ AGENDA ELETRÔNICA ------
SELECIONE UMA DAS OPÇÕES ABAIXO
          
[1] - Adicionar Pessoa
[2] - Consultar Pessoa
[3] - Exibir Registros
[4] - Excluir Registro
[5] - Imprimir Nomes
[0] - Sair
''')
    
def imprimirNomes():

    try:
        with open("agenda.json", "r") as arquivo:
            agenda = json.load(arquivo)
    except (FileNotFoundError, json.JSONDecodeError) as error:
        agenda = []
    
    print("\nNomes registrados:")
    for pessoa in agenda:
        print(pessoa["nome"])

def criarPessoa():
    try:
        with open("agenda.json", "r") as arquivo:
            agenda = json.load(arquivo)
    except (FileNotFoundError, json.JSONDecodeError) as error:
        agenda = []

    if agenda == []:
        id = 0
    else: 
        id = agenda[-1]["id"] + 1

    nome = input("Digite o nome: ").lower()
    cpf = input("Digite o CPF: ")
    telefone = input("Digite o telefone: ")

    pessoa = {"id": id,
              "nome": nome, 
              "cpf": cpf, 
              "telefone": telefone}
    
    agenda.append(pessoa)

    with open("agenda.json", "w") as arquivo:
        json.dump(agenda, arquivo, indent=4)

def consultarPessoa():
    nome_procurado = input("Digite o nome da pessoa: ")

    with open("agenda.json","r") as arquivo:
        agenda = json.load(arquivo)

    pessoas_encontradas = []
    
    for pessoa in agenda:
        if pessoa["nome"] == nome_procurado:
            pessoas_encontradas.append(pessoa)

    if len(pessoas_encontradas) > 1:
        print(f"Foram encontradas {len(pessoas_encontradas)} pessoas com esse nome.")
        for pessoa in pessoas_encontradas:
            print(f"""
Nome: {pessoa["nome"]}
CPF: {pessoa["cpf"]}
Telefone: {pessoa["telefone"]}""")       
    elif len(pessoas_encontradas) == 0:
        print("Não foi encontrada nenhuma pessoa com esse nome.")
    else:
        print("Foi encontrado uma pessoa com esse nome.")
        for pessoa in pessoas_encontradas:
            print(f"""
Nome: {pessoa["nome"]}
CPF: {pessoa["cpf"]}
Telefone: {pessoa["telefone"]}""")       

def exibirRegistros():
    with open("agenda.json", "r") as arquivo:
            agenda = json.load(arquivo)
    
    for pessoa in agenda:
        print(f"""
Nome: {pessoa["nome"]}
CPF: {pessoa["cpf"]}
Telefone: {pessoa["telefone"]}""")

def excluirRegistros():
    with open("agenda.json","r") as arquivo:
        agenda = json.load(arquivo)

    nome_procurado = input("Digite o nome da pessoa: ")

    pessoas_encontradas = []

    for pessoa in agenda:
        if nome_procurado == pessoa["nome"]:
            pessoas_encontradas.append(pessoa)

    agenda_nova = []
    
    if len(pessoas_encontradas) > 1:
        print(f"{len(pessoas_encontradas)} pessoas foram encontradas com esse nome.")
        cpf_procurado = input("Digite o cpf da pessoa: ")
        for pessoa in agenda:
            if nome_procurado == pessoa["nome"] and cpf_procurado == pessoa["cpf"]:
                continue
            else:
                agenda_nova.append(pessoa)
    elif len(pessoas_encontradas) == 0:
        print("Nenhuma pessoa com esse nome foi encontrada.")
        for pessoa in agenda:
            agenda_nova.append(pessoa)
    else:
        for pessoa in agenda:
            if pessoa["nome"] == nome_procurado:
                continue
            else:
                agenda_nova.append(pessoa) 

    with open("agenda.json", "w") as arquivo:
        json.dump(agenda_nova, arquivo, indent=4)

def main():
    opcao = 1
    while True:
        menu()
        opcao = int(input("Informe a opção: "))
        match opcao:
            case 1:
                criarPessoa()
            case 2:
                consultarPessoa()
            case 3:
                exibirRegistros()
            case 4:
                excluirRegistros()
            case 5:
                imprimirNomes()
            case 0:
                break
            case _:
                print("Opção inválida.")

main()
