#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, mulheq1 = 0, mulheq2 = 0, aux = 0;
    char nomes [2][6][50] = {  { {"Carla"}, {"Maria"}, {"Larissa"}, {"Emanuel"}, {"Joao"}, {"Elias"} },
                                    { {"Marcela"}, {"Beatriz"}, {"Chico"}, {"Carolina"}, {"Adriana"}, {"Rodrigo"} }  };
    char sexo [2][6] = {   { 'F', 'F', 'F', 'M', 'M', 'M' },
                                    { 'F', 'F', 'M', 'F', 'F', 'M' }  };
    float notas[2][6] = {   { 6.5, 8.5, 6.5, 8.0, 7.0, 6.5},
                                    { 8.5, 9.0, 7.5, 8.8, 7.0, 7.8 }  };

char projeto[c][50];
	for (i = 0; i < 2; i++){
		for(j = 0; j < 6; j++){
			if (sexo[i][j] == 'M' and i == 0){
				mulheq1++;
			}
			if (sexo[i][j] == 'M' and i == 1){
				mulheq2++;
			}
		}
	}
	if (mulheq1 > mulheq2){
		printf("Maior quantidade de mulheres: Equipe 1\n");
	}
	if (mulheq2 > mulheq1){
		printf("Maior quantidade de mulheres: Equipe 2\n");
	}
	else {
        printf("As equipes possuem a mesma quantidade de mulheres\n");
	}

	printf("Mulheres que podem participar do projeto\n");

	for (i = 0; i < 2; i++){
		for(j = 0; j < 6; j++){
			if (sexo[i][j] == 'M' and notas[i][j] >= 8){
				aux++;
				strcpy(projeto[aux], equipes[i][j]);
				printf("%s \n", projeto[aux]);
			}
		}
	}
	return 0;
}
