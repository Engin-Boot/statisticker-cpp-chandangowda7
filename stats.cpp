#include "stats.h"
struct Stats
{float average;
 float max;
 float min;
};

Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
    struct Stats s;
    float sum=0;
    for(i=0;i<a.size();i++)
    {
        sum=sum+a[i];
     }
    s.average=sum/a.size;
    s.max=*max_element(a.begin(),a.end());
    s.min=*min_element(a.begin(),a.end());
    return s;
}
