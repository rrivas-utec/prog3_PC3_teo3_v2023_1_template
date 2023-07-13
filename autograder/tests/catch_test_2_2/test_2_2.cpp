//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "binary_search_tree.h"
using namespace std;

static void test_2_2() {
    binary_search_tree<string, int> bst;
    bst.insert({"B", 20});
    bst.insert({"A", 10});
    bst.insert({"D", 30});
    bst.insert({"C", 40});
    bst.insert({"E", 35});
    cout << bst.max_depth() << endl;	// 3
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}