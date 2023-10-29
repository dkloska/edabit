#include "14_UnitConverter.h"
#include <benchmark/benchmark.h>

static void BM_InchesToFeet(benchmark::State& state) {
    UnitConverter unitConverter;
    for (auto _ : state) {
        unitConverter.inchesToFeet(100); // WprowadŸ tutaj odpowiedni¹ wartoœæ do pomiaru
    }
}

BENCHMARK(BM_InchesToFeet);

BENCHMARK_MAIN();
