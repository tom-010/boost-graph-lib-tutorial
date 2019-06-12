#pragma once

#include <vector>
#include <memory>

#include "Node.hpp"

class Graph {
public:
    Graph() = default;
    explicit Graph(Pose initialPose) { }
    NodeRef addNode(Node node) { return nullptr; }
    void addConstraint(NodeRef from, NodeRef to) { }
    NodeRef lastInsertNode() { return nullptr; }
    std::vector<NodeRef> getNodes() { return std::vector<NodeRef>{}; };
};