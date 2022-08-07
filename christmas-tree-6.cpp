#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    std::cin >> n;
    for(int i = 0; i < n; i+=2){
        for(int k = 0; k < i; k+=2){
            std::cout << " ";
        }
        for(int j = n; j >= i+1; j--){
            std::cout << "*";
        }
        std::cout << '\n';
    }    


    return 0;
}