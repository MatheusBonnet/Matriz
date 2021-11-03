#include "atividade.h"

int main () {
    srand(time(NULL));

    std::cout << "Atividade com Array " << LINHA << " X  " << COLUNA << "\n";

    int vetor[LINHA][COLUNA];

    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
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
	std::cout << "Soma Diagonal Principal\n";
    somaDiagonal(vetor);
   
    std::cout << "\n";
    std::cout << "\n";
	std::cout << "Soma Diagonal Invertida\n";
    somaDiagonalInvertida(vetor);

    return 0;
}

int somaLinhas(int vetor[LINHA][COLUNA]) {
    // SOMA LINHAS
    int linhasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
		    std::cout << "| " << vetor[linha][coluna] << " |";        	
            linhasSomadas[linha] += vetor[linha][coluna];
        }
        std::cout << " = " << linhasSomadas[linha] << "\n";
    }
    return 0;
}

int somaColunas(int vetor[LINHA][COLUNA]) {
    // SOMA COLUNAS
    int colunasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
    	for (int coluna = 0; coluna < COLUNA; coluna++) {
    		std::cout << "| " << vetor[linha][coluna] << " |";  
    		colunasSomadas[coluna] += vetor[linha][coluna];
		}
		std::cout << "\n";		
	}	
	std::cout << "============================\n";		
	for (int i = 0; i < 5; i++) {
		std::cout << "| " << colunasSomadas[i] << " |"; 
	}
	std::cout <<" \n";
    return 0;

}


int somaDiagonal(int vetor[LINHA][COLUNA]) {
	
	int soma = 0;
	
	for(int linha = 0; linha < LINHA; linha++){
		for(int coluna = 0; coluna < COLUNA; coluna++){
			if(linha == coluna){
				std::cout << "| " << vetor[linha][coluna] << " |\n";
				soma += vetor[linha][coluna];
			}
		}
	}
	
	std::cout << "============================\n";
	std::cout << "| " << soma << " |";
}



int somaDiagonalInvertida(int vetor[LINHA][COLUNA]) {
	
	int soma = 0;
	
	for(int linha = 0; linha < LINHA; linha--){
		for(int coluna = 0; coluna < COLUNA; coluna--){
			if(linha == coluna){
				std::cout << "| " << vetor[linha][coluna] << " |\n";
				soma += vetor[linha][coluna];
			}
		}
	}
	
	std::cout << "============================\n";
	std::cout << "| " << soma << " |";
}








