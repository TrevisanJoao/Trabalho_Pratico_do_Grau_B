// Uma classe abstrata que contem o metodo abstrato 'execute()'
#ifndef PROCESS_H
#define PROCESS_H
#include <string>
class Process
{
protected:
    int pid;
public:
    Process(int pid);
    virtual ~Process();

    // Getters
    int getPID() const;
    virtual std::string getTipo() const  = 0; // metodo para determinar o tipo de processo

    // Setters
    void setPID(int pid);

    // Metodos
    virtual void execute() = 0;

};

#endif
