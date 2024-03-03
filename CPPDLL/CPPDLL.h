// O bloco ifdef a seguir é a forma padrão de criar macros que tornam a exportação
// de uma DLL mais simples. Todos os arquivos nessa DLL são compilados com CPPDLL_EXPORTS
// símbolo definido na linha de comando. Esse símbolo não deve ser definido em nenhum projeto
// que usa esta DLL. Desse modo, qualquer projeto cujos arquivos de origem incluem este arquivo veem
// Funções CPPDLL_API como importadas de uma DLL, enquanto esta DLL vê símbolos
// definidos com esta macro conforme são exportados.
#ifdef CPPDLL_EXPORTS
#define CPPDLL_API __declspec(dllexport)
#else
#define CPPDLL_API __declspec(dllimport)
#endif

// Esta classe é exportada da DLL
class CPPDLL_API CCPPDLL {
public:
	CCPPDLL(void);
	// TODO: adicione seus métodos aqui.
};

extern CPPDLL_API int nCPPDLL;

CPPDLL_API int fnCPPDLL(void);
