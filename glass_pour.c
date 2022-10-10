#include<stdio.h>
#include<stdlib.h>


int glass_pour(int N,int K)
{
    int i;
    int CNT =0;
    if(K<1)
    {
        return -1;
    }
    else
    {
        for(i=N;i>=1;i--)
        {
            if(K >= i)
            {
                K -= i;
                CNT++;
            }

        }
        if(K != 0)
            return -1;
        else
            return CNT;
    }


}
// Driver code
void main()
{
//    int arr[] = { 1, 2, 3, 5 };
//    int N = sizeof(arr) / sizeof(arr[0]);
//
//    // Function call
//    int miss = getMissingNo(arr, N);
//    printf("%d", miss);

    printf("\nnumber of glasses == %d",glass_pour(1,2));

}