#include<stdio.h>
	
int main(){
  int v[10], i;

	for (i=0;i<10;i++){
		printf("Digite o vetor %d:", i);
		scanf("%d",&v[i]);

	}
	
	for (i=0;i<10;i++){
		printf("Vetor %d: %d\n", i, v[i]);

	}
	 int max_element = v[0];
    for (i = 1; i < 10; i++) {
        if (v[i] > max_element) {
            max_element = v[i];
}
}
	printf("Maior elemento: %d\n", max_element);
}
