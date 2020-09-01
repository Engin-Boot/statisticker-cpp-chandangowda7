#include "stats.h"
#include<limits>

struct Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
     Stats s;
    if(a.size()<0)
    {
         s.average=NaN();
         s.max=NaN();
         s.min=NaN();
         
        return s;
    }
        
   
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
    s.isNan=false;
    return s;
}
