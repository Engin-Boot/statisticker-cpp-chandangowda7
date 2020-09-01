#include <vector>

namespace Statistics {
    class Stats
{public:
 float average;
 float max;
 float min;
 bool isNan;
};

    Stats ComputeStatistics(const std::vector<float>& a);
}
