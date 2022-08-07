/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    std::cin >> n;
    for(int i = 0; i < n; i+=2){
        for(int k = n; k >= i; k-=2){
            std::cout << " ";
        }
        for(int j = 0; j < i+1; j++){
            std::cout << "*";
        }
        std::cout << '\n';
    }    


    return 0;
}
