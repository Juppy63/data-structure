#include<iostream>
using namespace std;

int n;

void display(int *a){
    for(int i=0; i<n; i++){
    cout<<a[i]<<endl;
    }
}

void arrayinsert(int *a, int i, int x){
    for(int j=n-1; j>=i; j--){
        a[j+1]= a[j];
    }
    a[i]=x;
    n=n+1;

}

void pqinsert(int *a, int x){
    int i=0;
    while(i<n && x<a[i]){
        i=i+1;
    }
    arrayinsert(a, i, x);
}

int pqdelete(int *a){
    int x;
    x=a[n-1];
    n--;
    return x;
}

// void arraydelete(int *a, int i){
//     for(int j=i+1; j<n; j++){
//         a[j-1]=a[j];
//     }
//     n=n-1;
// }


int main(){
    int a[10];
    int n=0;
    pqinsert(a,10);
    pqinsert(a,20);
    pqinsert(a,5);
    pqinsert(a,25);
    pqinsert(a,30);
    pqinsert(a,15);
    pqinsert(a,40);
    display(a);
    cout<<pqdelete(a)<<endl;
    cout<<pqdelete(a)<<endl;
    
    display(a);
}