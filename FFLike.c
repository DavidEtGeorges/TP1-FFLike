#include <stdio.h>

int main(){
int pointsDeVieMonstre = 20;
int pointsDeVieHeros = 20;
int pMMonstre = 0;
int pMHeros = 0;
int action = 0;
int jaugePoisonHeros;
int jaugePoisonMonstre;
int protection = 0;
int fin = 2;

while(pointsDeVieMonstre > 0 && pointsDeVieHeros > 0){
printf("------------------------------\n");
printf(" |Valefore : %d Points de vie ",pointsDeVieMonstre);
printf("%d PM\n",pMMonstre);
printf("Vous : %d Points de vie ",pointsDeVieHeros);
printf("%d PM\n",pMHeros);
printf("------------------------------\n");
printf("C'est a vous d'agir !\n 1 -Attaquer(10)\n 2 -Defense(Attaque adverses divisees par 4)\n 3 -Poison(3PM)\n");
		do{
			scanf("%d",&action);
		}while(action < 1 && action > 3);
		if(action == 1){
			pointsDeVieMonstre = pointsDeVieMonstre-10;
			printf("Le monstre a perdu 10 PV ! Il lui reste %d\n",pointsDeVieMonstre);
			printf("Le monstre risposte ! Il vous inflige 2 pv\n");
			pointsDeVieHeros = pointsDeVieHeros - 2;
			printf("Il vous reste %d pv\n",pointsDeVieHeros);
			action = 0;
		}
		if(action == 2){
			protection++;
			printf("Vous vous protegez !\n");
			action = 0;
		}
		if(action == 3 && pMHeros >= 3){
			jaugePoisonMonstre++;
			pMHeros = pMHeros-3;
			printf("Le monstre est sous-poison ! \n");
			action = 0;
		}
		if(action == 3 && pMHeros < 3){
			printf("Vous avez pas assez de Pm !\n");
			action = 0;
		}


pMHeros++;
pMMonstre++;
printf("Vous et le monstre gagnez un PM !\n");
if(pointsDeVieHeros <= 0){
	fin++;
}
if(pointsDeVieMonstre <= 0){
	fin--;
}






printf("_______________________________________________________________\n");
}

if(fin == 3){
	printf("Vous avez perdu !\n");
}
if(fin == 1){
	printf("Vous avez gagné !\n");
}
return 0;
}