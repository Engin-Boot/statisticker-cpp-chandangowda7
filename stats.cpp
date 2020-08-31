#include "stats.h"
Class Statistics
{float average;
 float max;
 float min;
};

Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
    Statistics s;
    float sum=0,maxi=0,mini=99999;
    for(i=0;i<a.size();i++)
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
