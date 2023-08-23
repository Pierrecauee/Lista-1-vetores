#include <stdio.h>
int main () {
	
	int i,recebe,v[10],n;
	
	printf("digite o valor que deseja saber quantas vezes foi digitado\n");
	scanf("%d",&n);
		for(i = 0; i < 10; i++){
			printf("escreva o numero desejado\n");
			scanf("%d",&v[i]);
      			if(v[i]== n){
      			recebe = recebe + 1;
	            }
            	}
  	printf(" a quantidade de vezes que o numero %d aparece e:%d\n",n,recebe);
  
return 0;
}
