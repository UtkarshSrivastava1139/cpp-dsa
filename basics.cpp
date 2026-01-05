 #include <bits/stdc++.h>
 using namespace std;

 int evenlyDivides(int n);

 int main(){
   int n = 12;
   cout << pow(10, 2);

 }
 
 
 int evenlyDivides(int n) {
        // code here
        
        int len = floor(log10(n)) + 1;
        
        int count = 0;
        
        for(int i = 1; i<=len; i++){
            int digit = n % pow(10, i);
            if(n % digit) == 0{
                count++;
            }
        }
        
        return count;
        
        
            
    }



 int len(int n){
   int n = 0;
   int len = 0;
   if (n == 0){
      len = 1;
      cout<<len;
      return len;
    }
    else if (n<0){
        n = n*(-1);
    }

    len = floor(log10(n)) + 1;
    cout<<len;
    return len;
 }
 
 
 int len1(){
    int n = -0;
    int len = 0;
    if (n == 0){
      len++;
    }
    else if (n<0){
        n = n*(-1);
        
    }
    
    while(n!=0){
        n = n/10;
        len++;
    }
    cout << len;
    return 0;
 }