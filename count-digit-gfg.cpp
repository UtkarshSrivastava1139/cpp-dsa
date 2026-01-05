#include <bits/stdc++.h>
using namespace std;

    int reverse(int n){
        int reverse = 0;
        while (n>0){
            reverse = (reverse * 10) + n%10;
            n = n/10;
        }
        cout<< reverse <<endl;
        return reverse;
    }
    bool isSameAfterReversals(int num) {
       if(num <= 9)
            return true;
        
        int reversed1 = reverse(num);
        int reversed2 = reverse(reversed1);
        if(reversed1 == reversed2) return true;
        else return false;
    }

    int evenlyDivides(int n) {
            // code here
            
            int num = n;
            int count = 0;
            
            while(num!=0){
                int digit = num % 10;
                if(digit == 0){
                    num = num/10;
                    continue;
                }
                else if((n % digit) == 0){
                    count++;
                }
                num = num/10;
            }
            return count;      
                
    }
    int main(){
    int number = 123;
    cout << isSameAfterReversals(number);
    }


 
 
