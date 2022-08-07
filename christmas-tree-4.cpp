#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 7; i++){
        for(int k = 5; k >= i; k--){
            std::cout << " ";
        }
        for(int j = 0; j < i+1; j++){
            std::cout << "*";
        }
        std::cout << '\n';
    }    


    return 0;
}
