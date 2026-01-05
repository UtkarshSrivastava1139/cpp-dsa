 #include <bits/stdc++.h>
 using namespace std;

 int main(){
    n = 123;
    if (n<0){
        n = n*(-1);
    }
    len = 0;
    while(n!=0){
        n = n/10;
        len++;
    }
    cout << len;
    return 0;
 }

 int main4(){
    // 2d array
    int arr[3][3];
    
    return 0;
 }

 int array(){
    int arr1[5];
    cin >> arr1[0] >> arr1[1] >> arr1[2];
    cout << arr1[0] << arr1[1] << arr1[2] << endl;

    float arr2[5];
    cin >> arr2[0] >> arr2[1] >> arr2[2];
    cout << arr2[0] << arr2[1] << arr2[2] <<endl;

    char arr3[4];
    cin >> arr3[0] >> arr3[1];
    cout << arr3[0] << arr3[1];
    return 0;
 }
 
 int main3(){
    int age;
    cout << "Enter your age: " <<endl;
    cin >> age;

    if(age>=18){
        cout << "You are an adult!";
    }
    else
        cout << "You are not an adult!";    
    
    return 0;
 }


 int main2(){
    string s;
    getline(cin, s);
    cout << s;

    string s2 = "utkarsh Srivastava  ";
    cout << s2;
 }