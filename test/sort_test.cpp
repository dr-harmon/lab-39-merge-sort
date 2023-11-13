#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>

#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"

using namespace std;

// Generates a sequence of integers (1..size) in reverse order
vector<int> makeReverseVector(int size)
{
	vector<int> v(size);
	generate(v.begin(), v.end(), [&size]{ return size--;});
	return v;
}

TEST_CASE("Bubble sort")
{
	vector<int> v;
	
	v = {};
	bubbleSort(v);
	REQUIRE(v == vector<int> {});

	v = {1};
	bubbleSort(v);
	REQUIRE(v == vector<int> {1});

	v = {4, 3, 2, 1};
	bubbleSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4});

	v = {5, 4, 3, 2, 1};
	bubbleSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});

	v = {1, 2, 3, 4, 5};
	bubbleSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});
/*
    BENCHMARK_ADVANCED("Bubble sort (1k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(1000);
        meter.measure([&v] {
            bubbleSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Bubble sort (2k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(2000);
        meter.measure([&v] {
            bubbleSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Bubble sort (3k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(3000);
        meter.measure([&v] {
            bubbleSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Bubble sort (4k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(4000);
        meter.measure([&v] {
            bubbleSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Bubble sort (5k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(5000);
        meter.measure([&v] {
            bubbleSort(v);
			return v;
        });
    };
*/
}

TEST_CASE("Selection sort")
{
	vector<int> v;
	
	v = {};
	selectionSort(v);
	REQUIRE(v == vector<int> {});

	v = {1};
	selectionSort(v);
	REQUIRE(v == vector<int> {1});

	v = {4, 3, 2, 1};
	selectionSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4});

	v = {5, 4, 3, 2, 1};
	selectionSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});

	v = {1, 2, 3, 4, 5};
	selectionSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});
/*
    BENCHMARK_ADVANCED("Selection sort (1k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(1000);
        meter.measure([&v] {
            selectionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Selection sort (2k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(2000);
        meter.measure([&v] {
            selectionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Selection sort (3k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(3000);
        meter.measure([&v] {
            selectionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Selection sort (4k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(4000);
        meter.measure([&v] {
            selectionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Selection sort (5k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(5000);
        meter.measure([&v] {
            selectionSort(v);
			return v;
        });
    };
*/
}

TEST_CASE("Insertion sort")
{
	vector<int> v;
	
	v = {};
	insertionSort(v);
	REQUIRE(v == vector<int> {});

	v = {1};
	insertionSort(v);
	REQUIRE(v == vector<int> {1});

	v = {4, 3, 2, 1};
	insertionSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4});

	v = {5, 4, 3, 2, 1};
	insertionSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});

	v = {1, 2, 3, 4, 5};
	insertionSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});
/*
    BENCHMARK_ADVANCED("Insertion sort (1k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(1000);
        meter.measure([&v] {
            insertionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Insertion sort (2k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(2000);
        meter.measure([&v] {
            insertionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Insertion sort (3k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(3000);
        meter.measure([&v] {
            insertionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Insertion sort (4k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(4000);
        meter.measure([&v] {
            insertionSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Insertion sort (5k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(5000);
        meter.measure([&v] {
            insertionSort(v);
			return v;
        });
    };
*/
}

TEST_CASE("Merge sort")
{
	vector<int> v;
	
	v = {};
	mergeSort(v);
	REQUIRE(v == vector<int> {});

	v = {1};
	mergeSort(v);
	REQUIRE(v == vector<int> {1});

	v = {4, 3, 2, 1};
	mergeSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4});

	v = {5, 4, 3, 2, 1};
	mergeSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});

	v = {1, 2, 3, 4, 5};
	mergeSort(v);
	REQUIRE(v == vector<int> {1, 2, 3, 4, 5});

    BENCHMARK_ADVANCED("Merge sort (1k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(1000);
        meter.measure([&v] {
            mergeSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Merge sort (2k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(2000);
        meter.measure([&v] {
            mergeSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Merge sort (3k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(3000);
        meter.measure([&v] {
            mergeSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Merge sort (4k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(4000);
        meter.measure([&v] {
            mergeSort(v);
			return v;
        });
    };

    BENCHMARK_ADVANCED("Merge sort (5k)")(Catch::Benchmark::Chronometer meter) {
        vector<int> v = makeReverseVector(5000);
        meter.measure([&v] {
            mergeSort(v);
			return v;
        });
    };
}
