#pragma once

#include <memory>
#include "Node.hpp"

class Constraint; typedef std::shared_ptr<Constraint> ConstraintRef;
typedef double Reliability;

class Constraint {
public:
    Constraint() = default;
    Constraint(Pose poseOffset) {};
    NodeRef getFrom() {}
    NodeRef getTo() {}
    Pose getPoseOffset() { return Pose{}; };
    void updatePoseOffset(Pose pose) {}
    Reliability getReliability() { return 0.0; }
    void setReliability(Reliability reliability) {}
};

