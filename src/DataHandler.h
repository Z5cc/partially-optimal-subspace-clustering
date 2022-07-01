#ifndef PARTIALLY_OPTIMAL_SUBSPACE_CLUSTERING_DATAHANDLER_H
#define PARTIALLY_OPTIMAL_SUBSPACE_CLUSTERING_DATAHANDLER_H


#include "Constants.h"

class DataHandler {

public:
    void write_constraints(std::vector<edge_type> cuts, std::vector<edge_type> joins);

    triple_costs_type create_triple_costs(int v);

    std::vector<vertex_type> create_vertices();
};


#endif //PARTIALLY_OPTIMAL_SUBSPACE_CLUSTERING_DATAHANDLER_H
