#include <iostream>  
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a >= b and a >= c and b >= c)
        std::cout << a << b << c;
    else
        if (a >= b and a >= c and c >= a)
            std::cout << a << c << b;
        else
            if (b >= a and b >= c and c >= a)
                std::cout << b << c << a;
            else
                if (b >= a and b >= c and a >= c)
                    std::cout << b << a << c;
                else
                    if (c >= a and c >= b and a >= b)
                        std::cout << c << a << b;
                    else
                        if (c >= a and c >= b and b >= a)
                            std::cout << c << b << a;
    return 0;
}