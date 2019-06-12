project(graph_src )

add_library(graph Graph.hpp Node.hpp Constraint.hpp Data.hpp Pose.hpp tmp.cc)
set_property(TARGET graph PROPERTY CXX_STANDARD 17)

target_include_directories(graph PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})