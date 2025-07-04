#ifndef PRINTINGPROCESS_H
#define PRINTINGPROCESS_H
#include "Process.h"
#include <vector>

class PrintingProcess : public Process {
    const std::vector<Process*>& fila;
public:
    PrintingProcess(int pid, const std::vector<Process*>& fila);
    std::string getTipo() const;
    void execute() override;
};
#endif
