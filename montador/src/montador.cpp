#include <iostream>
#include <stdbool.h>
#include "../include/preprocessamento.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "ERRO - Numero invalido de argumentos" << std::endl;
        std::cout << "Insira: ./montador file_name" << std::endl;
        std::cout << "file_name deve ser inserido sem extensao - pre-definida: .asm" << std::endl;
        return 0;
    }

    std::cout << argv[0] << ", " << argv[1] << std::endl;

    Tables *_tables = new Tables();
    InstructionAnalizer _analizer;

    PreProcessing *pre_proc = new PreProcessing(argv[1], *_tables, _analizer);

    if (pre_proc->isFileOpen())
    {
        pre_proc->PreProcess();
    }

    return 0;
}
