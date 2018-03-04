#include <stdio.h>
 int main() {
        long int n;
        long int data[100], i, j, k;
        scanf("%lld", &n);
        for (i = 0; i < n; i++)
         scanf("%lld", &data[i]);

        for (i = 0; i < n-1; i++) {
           for (j = i + 1; j < n; j++)
          {
         if (data[i] > data[j]) 
       {
     k = data[i];
          data[i] = data[j];
        data[j] = k;
           }
    }
    }
        for (i = n-1; i >= 0; i--)
 printf("%lld", data[i]);

  return 0;
  }
