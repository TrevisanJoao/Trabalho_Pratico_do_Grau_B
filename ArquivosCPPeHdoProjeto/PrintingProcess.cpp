#include "PrintingProcess.h"
#include <iostream>

PrintingProcess::PrintingProcess(int pid, const std::vector<Process*>& fila)
    : Process(pid), fila(fila) {
}

std::string PrintingProcess::getTipo() const {
    return "PrintingProcess";
}

void PrintingProcess::execute() {
    std::cout << "Fila atual:\n";
    for (auto p : fila) {
        std::cout << "PID: " << p->getPID() << " - Tipo: " << p->getTipo() << std::endl;
    }
}
