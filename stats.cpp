#include "stats.h"
class Stats
{float average;
 float max;
 float min;
};

Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
    Stats s;
    float sum=a[0],maxi=a[0],mini=a[0];
    for(i=1;i<a.size();i++)
    {
     if(a[i]>maxi)
     {
      maxi=a[i];
     }
     if(a[i]<mini)
     mini=a[i];
     
     
        sum=sum+a[i];
     }
    s.average=sum/a.size();
    s.max=maxi;
    s.min=mini;
    return s;
}
