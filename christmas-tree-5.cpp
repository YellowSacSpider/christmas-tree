#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        for(int k = n; k >= i; k--){
            std::cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            std::cout << "*";
        }
        std::cout << '\n';
    }    


    return 0;
}
