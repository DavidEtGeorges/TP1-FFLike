#include <stdio.h>

int main(){
int pointsDeVieMonstre = 1;
int pointsDeVieHeros = 1;
int pMMonstre = 0;
int pMHeros = 0;
int action = 0;
int jaugePoisonHeros;
int jaugePoisonMonstre;
int protection = 0;

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
			printf("Le monstre a perdu 10 PV !\n Il lui reste %d",pointsDeVieMonstre);
		}
		if(action == 2){
			protection++;
			printf("Vous vous protegez !\n");
		}
		if(action == 3 && pMHeros >= 3){
			jaugePoisonMonstre++;
			pMHeros = pMHeros-3;
			printf("Le monstre est sous-poison ! \n");
		}
		if(action == 3 && pMHeros < 3){
			printf("Vous avez pas assez de Pm !\n");
		}


pMHeros++;
pMMonstre++;
}
printf("Perdu !");






return 0;
}