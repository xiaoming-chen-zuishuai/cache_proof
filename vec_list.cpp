#include <benchmark/benchmark.h>
#include <vector>
#include <list>

static void BM_Vector(benchmark::State& state) {
    std::vector<uint64_t> v(state.range(0), 1);
    for (auto _ : state) {
        uint64_t sum = 0;
        for (size_t i = 0; i < state.range(0); i++)
            sum += v[i];
    }
}

static void BM_List(benchmark::State& state) {
    std::list<uint64_t> l(state.range(0), 1);
    for (auto _ : state) {
        uint64_t sum = 0;
        for (auto i = l.begin(); i != l.end(); i++)
            sum += *i;
    }
}

// Register the function as a benchmark
BENCHMARK(BM_Vector)->RangeMultiplier(2)->Range(8, 8 << 20);
BENCHMARK(BM_List)->RangeMultiplier(2)->Range(8, 8 << 20);
// Run the benchmark
BENCHMARK_MAIN();
