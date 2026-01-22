//map and set
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> used_values;
    map<string, int> mapper;

    mapper["john"]   = 78; used_values.insert(78);
    mapper["billy"]  = 69; used_values.insert(69);
    mapper["andy"]   = 80; used_values.insert(80);
    mapper["steven"] = 77; used_values.insert(77);
    mapper["felix"]  = 82; used_values.insert(82);
    mapper["grace"]  = 75; used_values.insert(75);
    mapper["martin"] = 81; used_values.insert(81);

    // iterate map (sorted by key)
    for (auto it = mapper.begin(); it != mapper.end(); ++it) {
        printf("%s %d\n", it->first.c_str(), it->second);
    }

    printf("steven's score is %d, grace's score is %d\n",
           mapper["steven"], mapper["grace"]);
    printf("==================\n");

    // range query
    for (auto it = mapper.lower_bound("f");
         it != mapper.lower_bound("m"); ++it) {
        printf("%s %d\n", it->first.c_str(), it->second);
    }

    // set operations
    printf("%d\n", *used_values.find(77));

    for (auto it = used_values.begin();
         it != used_values.lower_bound(77); ++it) {
        printf("%d,", *it);
    }
    printf("\n");

    for (auto it = used_values.lower_bound(77);
         it != used_values.end(); ++it) {
        printf("%d,", *it);
    }
    printf("\n");

    if (used_values.find(79) == used_values.end())
        printf("79 not found\n");

    return 0;
}
