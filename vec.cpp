#include <stdint.h>
#include <vector>

int main()
{
    size_t vecSize = 32768 >> 3;
    std::vector<uint64_t> v(vecSize, 1);
    for (size_t l = 0; l < 500000UL; l++) {
        uint64_t sum = 0;
        for (auto i = 0; i < vecSize; i++) {
            sum += v[i];
        }
    }
    return 0;
}
