#include <iostream>
#include <string>
#include <vector>
using namespace std;

// By Marco Valério e Lucas De Souza

void texto_entrada() { cout << "Você entrou no sistema" << endl; }

void texto_saida() { cout << "\nVocê saiu do sistema" << endl; }

void usuario(vector<string> &lista) {

  string dado;

  cout << "\nDigite um nome: ";
  cin >> dado;
  lista.push_back(dado);
}

void exibir_usuario(const vector<string> &lista) {

  cout << "\nLista de nomes:\n\n";
  for (const string &dado : lista) {
    cout << dado << endl;
  }
}

int main() {

  vector<string> dados;
  bool executando = true;
  int escolha;

  texto_entrada();

  while (executando) {

    cout << "\n1. fazer cadastro" << endl;
    cout << "2. exibir cadastro(s)" << endl;
    cout << "3. sair do sistema" << endl;
    cout << "\nSua escolha: ";
    cin >> escolha;

    switch (escolha) {
    case 1:
      usuario(dados);
      break;
    case 2:
      exibir_usuario(dados);
      break;
    case 3:
      executando = false;
      break;
    default:
      cout << "\nNumero invalido digite outro!" << endl;
      break;
    }
  }

  texto_saida();

  return 0;
}