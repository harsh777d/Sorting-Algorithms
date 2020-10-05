#include<iostream>
using namespace std;

int main(){
    int i, j, temp;
    int a[7] = {4, 3, 6, 5, 2, 1, 7};
    
    for(i=0; i<7; i++){
        for (j=1; j<7; j++)
        {
            if(a[j]<a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }            
        }
    }
    for(i=0; i<7; i++){
        cout<<a[i]<<" ";
    }
}