#include <stdio.h>

int a[11] = {1, 3, 2, 4, 5, 7, 6, 9, 8, 0};
int b[10];

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   }
}   

int main() { 
   int i, tam;
	tam= (sizeof a/sizeof *a)-1;
   printf("Lista original: ");
   
   for(i = 0; i <= tam-1; i++)
      printf("%d ", a[i]);

   sort(0, tam-1);

   printf("\nLista despues del ordenamiento: \n");
   
   for(i = 0; i <= tam-1; i++)
      printf("%d ", a[i]);
}
