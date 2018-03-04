
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
 
void  value(int array[], int arraysize)
{
    int count = 0;
    int l, r, minsum, sum, minl, minr;
 
   
    if (arraysize < 2)
    {
        printf("Invalid Input");
        return;
    }
    minl = 0;
    minr = 1;
    minsum = array[0] + array[1];
    for (l = 0; l < arraysize - 1; l++)
    {
        for (r = l + 1; r < arraysize; r++)
        {
            sum = array[l] + array[r];
            if (abs(minsum) > abs(sum))
            {
                minsum = sum;
                minl = l;
                minr = r;
            }
        }
    }
    printf(" The two elements whose sum is minimum are %d and %d", array[minl], array[minr]);
}
 
int main()
{
    int array[] = {42, 15, -25, 30, -10, 35};
    value(array, 6);
    getchar();
    return 0;
}
