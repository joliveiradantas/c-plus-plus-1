#include<iostream>
using namespace std;

int main () {
    
    cout << "###########################" << endl;
    cout << "#     Bem vindo           #" << endl;
    cout << "###########################" << endl;

    const int NUMERO_SECRETO = 10;

    bool nao_acertou = true;
    int tentativa = 0;

    while(nao_acertou) {
        tentativa++;
        cout << "TENTATIVA " << tentativa << endl;

        int chute;
        cout << "Qual é o seu chute?";
        cin >> chute;

        cout << "O valor do seu chute é: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool chute_maior = chute > NUMERO_SECRETO; 

        if(acertou) {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            nao_acertou = false;
        } 
        else if(chute_maior) {
            cout << "Seu chute foi maior que o número secreto" << endl;
        }
        else {
            cout << "Seu chute foi menor que o número secreto" << endl; 
        }
    }

    cout << "Você acertou na " << tentativa << " tentativa" << endl;
    cout << "FIM DE JOGO!" << endl;
}