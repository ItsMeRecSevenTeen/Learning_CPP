#include <iostream>
using namespace std;

int sum(int k){
    if(k > 0){
        return k + sum(k - 1);//The function calls itself into it's own code block
    } else {
        return 0;
    }
}
int main(){
    int result = sum(10);
    cout << result;
return 0;
}
