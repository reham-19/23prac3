#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads(){
    outcome = 0;
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates == 0 || loadSize == 0)
    {
        return 0;
    } else if (numCrates < 0 || loadSize < 0)
    {
        return -1;
    } else if (numCrates <= loadSize)
    {
        return 1;
    } 
 
    int crate = numCrates/2;

    if (numCrates%2 == 0)
    {
        return 2 * numTrucks(crate, loadSize);
    } else {
        outcome = numTrucks((numCrates+1)/2, loadSize) + numTrucks(crate, loadSize);
    }
    return outcome;
}