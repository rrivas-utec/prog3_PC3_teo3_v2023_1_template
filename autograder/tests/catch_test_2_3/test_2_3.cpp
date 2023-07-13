//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "binary_search_tree.h"
using namespace std;

static void test_2_3() {
    binary_search_tree<string, int> bst;
    bst.insert({"A", 20});
    bst.insert({"B", 10});
    bst.insert({"C", 30});
    bst.insert({"D", 40});
    bst.insert({"E", 35});
    cout << bst.max_depth() << endl;	// 5
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}