#include <stdio.h>

#define MAX 1000000


void printArray(int a[],int n){
    for(int i = 0;i<n;i++)
        printf("%d ",a[i]);
}

void insertItemAtLast(int a[],int n, int key){
    a[n] = key;
}
void insertItemAtFirst(int a[],int n,int key){
    for(int i = n;i>0;i--)
        a[i] = a[i-1];
    a[0] = key;
}
void insertItemAtIndex(int a[],int n,int idx,int key){
    for(int i = n;i>idx;i--)
        a[i] = a[i-1];
    a[idx] = key;
}
void deleteItemFromLast(int a[],int *n){
    -- *n;
}
void deleteItemFromFirst(int a[],int n){
    for(int i = 1;i<n;i++)
        a[i-1] = a[i];
}
void deleteItemFromIndex(int a[],int n,int idx){
    for(int i = idx;i<n-1;i++)
        a[i] = a[i+1];
}
int FindItemUnsorted(int a[],int n){
    for(int i = 0;i<n;i++)
        if(a[i+1]<a[i])
            return i+1;
    return -1;
}
int FindItemSorted(int a[],int n){
    for(int i=0;i<n;i++)
        if(a[i+1]<a[i])
            return i;
    return -1;
}
void sortArray(int a[],int n){
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<n-i;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
void extractSubset(int a[],int n,int x,int y){
    for(int i = x;i<y;i++)
        printf("%d ",a[i]);
}
void deleteSubset(int a[],int n,int x,int y){
    for(int i = x;i<n;i++)
    {
        if(i + y>=n)
            break;
        a[i] = a[i+y];
    }
}
void splitArray(int a[],int n){
    printArray(a,n);
}
void cloneArray(int a[],int n,int b[]){
    for(int i = n; i<2*n;i++)
        a[i] = b[i-n];
}


int main(){

    int a[MAX] = {0};
    return 0;
}