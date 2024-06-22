#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
using namespace __gnu_pbds;
 

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// ex of above pdbs;
// template<typename T> 
// using pbds =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
// ex of above pdbs<pair<int, int>> os;
/*
    find_by_order()
    less / greater -> set
    less / greater_equal -> multiset
    order_of_key() ->
    less_equal -> less than x
    greater_equal -> greater than x
*/

// QUESTIONS
// Used in medians related que.
// 1.https://cses.fi/problemset/task/1076