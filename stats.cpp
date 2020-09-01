#include "stats.h"
#include<cmath>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& a) {
    //Implement statistics here
     Statistics::Stats s;
    if(a.size()==0)
    {
         s.average=nanf("");
         s.max=nanf("");
         s.min=nanf("");
         
        return s;
    }
    
        
   
    float sum=a[0],maxi=a[0],mini=a[0];
    int i;
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
