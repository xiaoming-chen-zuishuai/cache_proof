#include <stdint.h>
#include <list>

int main()
{
    size_t lstSize = 32768 >> 3;
    std::list<uint64_t> v(lstSize, 1);
    for (size_t l = 0; l < 500000UL; l++) {
        uint64_t sum = 0;
        for (auto i = v.begin(); i != v.end(); i++) {
            sum += *i;
        }
    }
    return 0;
}
