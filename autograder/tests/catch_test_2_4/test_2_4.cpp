//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "binary_search_tree.h"
using namespace std;

static void test_2_4() {
    binary_search_tree<string, int> bst;
    bst.insert({"A", 20});
    cout << bst.max_depth() << endl;	// 5
}

TEST_CASE("Question #2.4") {
    execute_test("test_2_4.in", test_2_4);
}