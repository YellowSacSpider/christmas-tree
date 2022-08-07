#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 7; i++){
        for(int k = 0; k < i+1; k++){
                std::cout << " ";
        }
        for(int j = 6; j >= i; j--){
            std::cout << "*";
        }
        std::cout << '\n';
    }    


    return 0;
}