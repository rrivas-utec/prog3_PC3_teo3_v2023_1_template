//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "binary_search_tree.h"
using namespace std;

static void test_2_1() {
    binary_search_tree<string, int> bst;
    bst.insert({"B", 20});
    bst.insert({"A", 10});
    cout << bst.max_depth() << endl;	// 2
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}