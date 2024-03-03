// CPPDLL.cpp : Define as funções exportadas para a DLL.
//

#include "pch.h"
#include "framework.h"
#include "CPPDLL.h"


// Isto é um exemplo de uma variável exportada
CPPDLL_API int nCPPDLL=0;

// Isto é um exemplo de uma função exportada.
CPPDLL_API int fnCPPDLL(void)
{
    return 0;
}

// Para arquitetura x86
extern "C" __declspec(dllexport) const char* ObterMensagem() {
    return "Deu certo! minha dll x86 em C++ foi lida dentro do meu App Delphi";
}

// Este é o construtor de uma classe que foi exportada.
CCPPDLL::CCPPDLL()
{
    return;
}
