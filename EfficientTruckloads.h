#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

class EfficientTruckloads {

public:
    // Constructor
    EfficientTruckloads();

    // Calculates number of trucks needed based on crates and load size
    int numTrucks(int numCrates, int loadSize);

    // stores number of trucks
    int outcome;
};

#endif