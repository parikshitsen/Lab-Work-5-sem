/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

void merge(int a[], int start, int mid, int end){
    int p = mid-start+1;
    int q = end-mid;
    
    int left[p],right[q];
    
    for(int i=0; i<p; i++){
        left[i] = a[start+i];
    }
    for(int j=0; j<q; j++)
        right[j] = a[mid+1+j];
    
    int i=0,j=0,k=start;
    
    while(i<p && j<q){
        if(left[i]<=right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
        k++;
    }
    
    while(i<p){
        a[k] = left[i];
        i++;
        k++;
    }
    
    while(j<q){
        a[k] = right[j];
        j++;
        k++;
    }
}


void mergeSort(int a[], int start, int end){
    if(start<end){
        int mid = (start+end)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}


int main()
{
    int arr[100],n;
    cout<<"Enter the length of array\t";
    cin>>n;
    cout<<"Enter the values in array\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    mergeSort(arr,0,n-1);
    cout<<"Sorted Array\n";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<"\t";
}
