#include "stats.h"
#include<cmath>
using namespace std;

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
   
        
   
    float sum=a[0];//,maxi=a[0],mini=a[0];
    int i;
    for(i=1;i<a.size();i++)
    {
    sum=sum+a[i];
     }
    s.average=sum/a.size();
    s.max=maxElement(a);
    s.min=minElement(a);
   
    return s;
}
float minElement(std::vector<float>& a)
   {
       float mini=a[0];
       for(i=1;i<a.size();i++)
       {
           if(a[i]<mini)
               mini=a[i];
       }
       return mini;
       
   }
float maxElement(std::vector<float>& a)
   {
       float max=a[0];
       for(i=1;i<a.size();i++)
       {
           if(a[i]>max)
               max=a[i];
       }
       return max;
       
   }

