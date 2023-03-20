#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

class Truckloads {

public:
    // Constructor
    Truckloads();

    // Calculates number of trucks needed based on crates and loadsize
    int numTrucks(int numCrates, int loadSize);

};

#endif