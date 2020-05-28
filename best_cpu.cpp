#include <stddef.h>
#include <stdint.h>

int main()
{
    size_t size = 32768 >> 3;
    for (size_t l = 0; l < 500000UL; l++) {
        uint64_t sum = 0;
        for (auto i = 0; i < size; i++) {
            sum += 1;
        }
    }
    return 0;
}
