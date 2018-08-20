#include <stdio.h>
#include <conio.h>

int a[11] = {1, 3, 2, 4, 5, 7, 6, 9, 8, 0};
int b[10];

int main() { 
   int i, tam, j, k, mid, l1, l2;
   tam= (sizeof a/sizeof *a)-1;
   printf("Lista antes del ordenamiento: ");
   for(i = 0; i < tam; i++)
      printf("%d ", a[i]);
   
   for(k=0; k<tam-1; k++){
   		for(j=0; j<tam-1; j++){
   				if(a[j]>a[j+1])
				   b[k] = a[j++];
      			else
         			b[k] = a[j++];
		   }
   }
   l1 = 0;
   mid = (0 + tam-1) / 2;
   l2 = mid + 1;
   
   while(l1 <= mid)    
      b[k++] = a[l1++];

   while(l2 <= tam-1)   
      b[k++] = a[l2++];

   for(i = 0; i <= tam-1; i++)
      a[i] = b[i];
   
   printf("\nLista despues del ordenamiento\n");
   for(i = 0; i < tam; i++)
      printf("%d ", a[i]);
	return 0;
}
