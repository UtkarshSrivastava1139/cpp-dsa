#include<bits/stdc++.h>
using namespace std;

void pattern7(int n){
    for(int i = 0; i<n; i++){
        for(int j = n-1; j>i; j--){
            cout << " ";
        }
        for(int k = 1; k<=2*i+1; k++){
            cout << "*";
        }
        for(int j = n-1; j>i; j--){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern6(int n){
    for(int i = n; i>0; i--){
        for(int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout<< "\n";
    }
}

void pattern5(int n){
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }

}

void pattern4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i << " ";
        }
        cout<< "\n";
    }
}

void pattern3(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout<< "\n";
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }

}

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main(){
    pattern7(5);
}