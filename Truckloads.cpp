#include "Truckloads.h"

#include "Truckloads.h"

Truckloads::Truckloads(){

}

int Truckloads::numTrucks(int numCrates, int loadSize){
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
 

    if (numCrates%2 == 0)
    {
        return 2 * numTrucks(numCrates/2, loadSize);
    } else {
        return numTrucks((numCrates+1)/2, loadSize) + numTrucks(numCrates/2, loadSize);
    }

}
