#include "ComputingProcess.h"
#include <iostream>
#include <iomanip> // para setar precisão de fracionarios
using namespace std;

ComputingProcess::ComputingProcess(int pid, double val1, double val2, char operador)
    : Process(pid), val1(val1), val2(val2), operador(operador) {
}
ComputingProcess::~ComputingProcess() {}

double ComputingProcess::getVal1() {
    return val1;
}

double ComputingProcess::getVal2() {
    return val2;
}

void ComputingProcess::setVal1(double val1) {
    this->val1 = val1;
}

void ComputingProcess::setVal2(double val2) {
    this->val2 = val2;
}

char ComputingProcess::getOperador() {
    return operador;
}

void ComputingProcess::setOperador(char operador) {
    this->operador = operador;
}

void ComputingProcess::execute() {
    cout << "Executando ComputingProcess: ";
    cout << fixed << setprecision(2);
    switch (operador) {
    case '+':
        cout << "Resultado: " << val1 + val2 << endl;
        break;
    case '-':
        cout << "Resultado: " << val1 - val2 << endl;
        break;
    case '*':
        cout << "Resultado: " << val1 * val2 << endl;
        break;
    case '/':
        if (val2 != 0)
            cout << "Resultado: " << val1 / val2 << endl;
        else
            cout << "Erro: divisao por zero!" << endl;
        break;
    default:
        cout << "Operador invalido!" << endl;
    }
}

