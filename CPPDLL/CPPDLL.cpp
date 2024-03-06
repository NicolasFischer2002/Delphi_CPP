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


// Ambas as funções ObterMensagem32Bits e ObterMensagem64Bits funcionam no Delphi, desde que:
// Se o Delphi estiver compilado em x86, a DLL deve ser compilada em x86 e colocada em x86
// na mesma pasta do exe Delphi; Caso o Delphi esteja compilado em 64bits, a DLL precisa ser
// compilada em 64 bits e deve estar na mesma pasta do exe Delphi.
extern "C" __declspec(dllexport) const char* ObterMensagem64Bits() {
    return "Deu certo! minha dll 64bits em C++ foi lida dentro do meu App Delphi";
}

extern "C" __declspec(dllexport) const char* ObterMensagem32Bits() {
    return "Deu certo! minha dll x86 em C++ foi lida dentro do meu App Delphi";
}

// Este é o construtor de uma classe que foi exportada.
CCPPDLL::CCPPDLL()
{
    return;
}
