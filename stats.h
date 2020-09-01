#include <vector>

namespace Statistics {
    class Stats
{float average;
 float max;
 float min;
};

    Stats ComputeStatistics(const std::vector<float>& a);
}
