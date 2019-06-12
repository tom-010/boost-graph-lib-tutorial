#import "lib/catch.hpp"

#include "boost/graph/adjacency_list.hpp"
#include <iostream>

using namespace boost;
using namespace std;

typedef adjacency_list<listS, vecS, bidirectionalS> Graph;

TEST_CASE("construct a graph", "[graph]") {
    Graph graph{3};
    add_edge(0, 1, graph);
    add_edge(0, 2, graph);
    add_edge(1, 2, graph);
    REQUIRE(graph.vertex_set().size() == 3);
}

TEST_CASE("access the vertices", "[graph]"){
    Graph graph{3};
    auto vertices = get(vertex_index, graph);
    REQUIRE(vertices[0] == 0);
    REQUIRE(vertices[1] == 1);
    REQUIRE(vertices[3] == 3);
}

TEST_CASE("access the edges", "[graph]") {
    Graph graph{3};
    add_edge(0, 1, graph);
    add_edge(0, 2, graph);
    add_edge(1, 2, graph);
    auto index = get(vertex_index, graph);

    graph_traits<Graph>::edge_iterator edge_iterator, iterator_end;
    tie(edge_iterator, iterator_end) = edges(graph);

    REQUIRE(index[source(*edge_iterator, graph)] == 0);
    REQUIRE(index[target(*edge_iterator, graph)] == 1);
    ++edge_iterator;
    REQUIRE(index[source(*(edge_iterator), graph)] == 0);
    REQUIRE(index[target(*(edge_iterator), graph)] == 2);
    ++edge_iterator;
    REQUIRE(index[source(*(edge_iterator), graph)] == 1);
    REQUIRE(index[target(*(edge_iterator), graph)] == 2);
}