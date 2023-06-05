#include <iostream>
#include <string>

using namespace std;

int main(){
    int div_by_both = 0;
    int div_by_three = 0;
    int div_by_five = 0;
    int div_by_neither = 0;
    for(int i =0; i < 101; i++){
        if(i % 3 == 0 && i % 5 ==0){
            cout << "Fizzbuzz" << endl;
            div_by_both++;
            if(i % 3 ==0){
                div_by_three++;
            }else if(i % 5 ==0){
                div_by_five++;
            }
        }else if(i % 3 == 0){
            cout << "Fizz" << endl;
            div_by_five++;
        }else if(i % 5 == 0){
            cout << "Buzz" << endl;
            div_by_three++;
        }else{
            div_by_neither++;
        }
    }
    int total = div_by_three + div_by_neither + div_by_five;
    cout << "Divisible by three and five: " << div_by_both << endl;
    cout << "Divisible by three: " << div_by_three <<endl;
    cout << "Divisible by five: " << div_by_five <<endl;
    cout << "Not divisible by either: " << div_by_neither <<endl;
    cout << "Total: " << total <<endl;
    return 0;
}
