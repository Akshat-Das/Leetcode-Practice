// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int onecount = 0,zerocount = 0,twocount = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 0) zerocount++;
        else if(a[i] == 1) onecount++;
        else twocount++;
    }
    for(int i=0;i<zerocount;i++) a[i] = 0;
    for(int i=0;i<onecount;i++) a[zerocount+i] = 1;
    for(int i=0;i<twocount;i++) a[zerocount+onecount+i] = 2;
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends