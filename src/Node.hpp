#pragma once

#include <vector>
#include "Constraint.hpp"
#include "Data.hpp"
#include "Pose.hpp"

class Node; typedef std::shared_ptr<Node> NodeRef;

class Node {
public:
    Node(Pose pose, DataRef data) {}
    void addConstraintTo(NodeRef otherNode){}
    void removeConstraintTo(NodeRef otherNode){}
    std::vector<ConstraintRef> getIngoingConstraints() {return std::vector<ConstraintRef>{};};
    std::vector<ConstraintRef> getOutgoingConstraints() {return std::vector<ConstraintRef>{};};
    void updatePose(Pose pose) {}
    Pose getPose() { return Pose(); }
    DataRef getData() {};
};

