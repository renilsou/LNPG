import json

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
    
    agenda_nova = []
    
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
            case 0:
                break
            case _:
                print("Opção inválida.")

main()