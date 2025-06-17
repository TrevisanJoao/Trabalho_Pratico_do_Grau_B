#include "ReadingProcess.h"
#include <fstream>
#include <sstream>
#include <iostream>

ReadingProcess::ReadingProcess(int pid, std::vector<Process*>& fila)
    : Process(pid), fila(fila) {
    std::cout << "ReadingProcess criado (PID=" << pid << ").\n";
}

void ReadingProcess::execute() {
    std::ifstream file("computation.txt");
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir computation.txt\n";
        return;
    }

    std::string linha;
    int pidGerado = getPID() + 1;
    int count = 0;
    while (getline(file, linha)) {
        std::istringstream iss(linha);
        double v1, v2;
        char op;
        if (iss >> v1 >> op >> v2) {
            fila.push_back(new ComputingProcess(pidGerado, v1, v2, op));
            std::cout << "Processo lido: PID=" << pidGerado
                << " Expressao: " << v1 << " " << op << " " << v2 << std::endl;
            ++pidGerado;
            ++count;
        }
    }

    if (count == 0) {
        std::cout << "Nenhum processo foi lido do arquivo.\n";
    }
    else {
        std::cout << "Total de processos lidos e adicionados à fila: " << count << std::endl;
    }

    // Limpa o arquivo após ler
    std::ofstream clean("computation.txt", std::ios::trunc);
    clean.close();
}



