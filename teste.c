#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct usuario Usuario;

struct usuario {
  char nome[40];
  char dataNascimento[20];
  char email[40];
  char username[20];
  char senha[20];
};

Usuario *preencheUsuario();
void exibeUsuario(const Usuario *);
int menuPrincipal(void);

int main(void) {
  Usuario *cliente;
  int opcao;
  printf("Programa Cadastro de Usuários\n\n");
  opcao = menuPrincipal();
  while (opcao != 0) {
    switch (opcao) {
    case 1:
      cliente = preencheUsuario();
      break;
    case 2:
      exibeUsuario(cliente);
      break;
      // outras opções
    }
    opcao = menuPrincipal();
  }
  getchar();
  return 0;
}

Usuario *preencheUsuario() {
  Usuario *usu;
  usu = (Usuario *)malloc(sizeof(Usuario));
  printf("\nInforme o nome do usuário: ");
  scanf("%40[a-zA-Z]", usu->nome);
  getchar();
  printf("\nInforme o email do usuário: ");
  scanf("%40[a-zA-Z@.0-9]", usu->email);
  getchar();
  printf("\nInforme a data de nascimento do usuário: ");
  scanf("%20[0-9./-]", usu->dataNascimento);
  getchar();
  printf("\nInforme o seu username: ");
  scanf("%20[a-zA-Z.@0-9]", usu->username);
  getchar();
  printf("\nInforme a sua senha: ");
  scanf("%20[a-zA-Z.@0-9]", usu->senha);
  getchar();
  return usu;
}

void exibeUsuario(const Usuario *usu) {
  printf("\n= = = Usuário Cadastrado = = =\n");
  printf("Nome: %s\n", usu->nome);
  printf("Data de nascimento: %s\n", usu->dataNascimento);
  printf("E-mail: %s\n", usu->email);
  printf("Username: %s\n", usu->username);
}

int menuPrincipal(void) { // puxar a tela principal do programa para aqui
  int op;
  printf("\nMenu Principal\n");
  printf("1 - Cadastrar usuário\n");
  printf("2 - Exibir usuário\n");
  printf("3 - Pesquisar usuário\n");
  printf("0 - Encerrar programa\n");
  printf("Escolha sua opção: ");
  scanf("%d", &op);
  getchar();
  return op;
}

