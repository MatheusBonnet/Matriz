#include "atividade.h"

int main(){
    
    srand(time(NULL));

    std::cout << "Atividade com Array 5 x 5 \n";

    int vetor[LINHA][COLUNA];

    for (int linha = 0; linha < LINHA; linha++)
    {
        for (int coluna = 0; coluna < COLUNA; coluna++) 
        {
            vetor[linha][coluna] = rand() % 10;
            std::cout << "| " << vetor[linha][coluna] << " |";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";
	std::cout << "Soma Linhas\n";
    somaLinhas(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Colunas\n";
    somaColunas(vetor);

    std::cout << "\n";
    std::cout << "\n";
	std::cout << "Soma Colunas Principal\n";
    somaDiagonalPrincipal(vetor);

    std::cout << "\n";
    std::cout << "\n";
	std::cout << "Soma Colunas 2\n";
    somaDiagonais2(vetor);

    return 0;

}

int somaLinhas(int vetor[LINHA][COLUNA]){

    int linhasSomadas[] = {0,0,0,0,0};

    for (int linhas = 0; linhas < LINHA; linhas++)
    {
        for (int colunas = 0; colunas < COLUNA; colunas++)
        {
            std::cout << "| " << vetor[linhas][colunas] << " |";
            linhasSomadas[linhas] += vetor[linhas][colunas]; 
        }
        std::cout << linhasSomadas[linhas] << "\n";
    }
    return 0;
}

int somaColunas(int vetor[LINHA][COLUNA]){

    int colunasSomadas[] = {0,0,0,0,0};

    for (int colunas = 0; colunas < COLUNA; colunas++)
    {
        for (int linhas = 0; linhas < LINHA; linhas++)
        {
            std::cout << "| " << vetor[linhas][colunas] << " |";
            colunasSomadas[colunas] += vetor[linhas][colunas];         
        }
        std::cout << "\n";
    
    }
        
    std::cout << "============================\n";		
	for (int i = 0; i < 5; i++) {
		std::cout << "| " << colunasSomadas[i] << " |"; 
    }
    return 0;
}


int somaDiagonalPrincipal(int vetor[LINHA][COLUNA]) {

    int soma = 0;
	for (int coluna = 0; coluna < COLUNA; coluna++) {
		std::cout << "| " << vetor[coluna][coluna] << " |";  
		soma += vetor[coluna][coluna];
	}
	std::cout << "\n";		
	std::cout << "============================\n";
    std::cout << "| " << soma << " |"; 
	
    return 0;
}

int somaDiagonais2(int vetor[LINHA][COLUNA]){

    int soma = 0;
    for (int linha = 0; linha < LINHA; linha++) {
		std::cout << "| " << vetor[linha][4-linha] << " |";  
		soma += vetor[linha][4-linha];
	}
	std::cout << "\n";		
	std::cout << "============================\n";			
	std::cout << "| " << soma << " |"; 
    return 0;
}







