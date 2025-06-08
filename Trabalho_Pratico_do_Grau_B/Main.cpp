#include "WritingProcess.h"
#include "PrintingProcess.h"
#include "ComputingProcess.h"
#include "ReadingProcess.h"
#include <list>
#include <memory>

int main() {
    // Cria uma lista de ponteiros �nicos para Process
    std::list<std::unique_ptr<Process>> processos;

    // Adiciona diferentes tipos de processos � lista
    processos.push_back(std::make_unique<ComputingProcess>(1, 2, '+'));

    return 0;
}