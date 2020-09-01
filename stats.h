#include <vector>

namespace Statistics {
    struct Stats
{
 float average;
 float max;
 float min;
};
 Stats ComputeStatistics(const std::vector<float>& a);
 float maxElement(std::vector<float>& a);
 float minElement(std::vector<float>& a);
}
