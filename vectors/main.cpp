//
//  main.cpp
//  vectors
//
//  Created by Richard Derryberry on 12/25/22.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<int> count (4, 0);
    count[0] = 7;
    count[1] = count[0] * 2;
    count[2]++;
    count[3] -= 60;
    
    for (int i{0}; i < size(count); i++)
    {
        std::cout << count[i] << '\n';
    }
    return 0;
}
