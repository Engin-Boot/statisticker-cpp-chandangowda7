#include "stats.h"
#include<cmath>
using namespace std;

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& arrayofNumbers) {
    //Implement statistics here
     Statistics::Stats stat{nanf(""),nanf(""),nanf("")};
   if(!IsNaNPresent(arrayofNumbers))
   {float sum=arrayofNumbers[0];//,maxi=a[0],mini=a[0];
    int iterator;
    for(iterator=1;iterator<arrayofNumbers.size();iterator++)
    {
    sum=sum+arrayofNumbers[iterator];
     }
    s.average=sum/arrayofNumbers.size();
    s.max=maxElement(arrayofNumbers);
    s.min=minElement(arrayofNumbers);
   }
    return s;
}
float Statistics::minElement(const std::vector<float>& arrayofNumbers)
   {
       float min=arrayofNumbers[0];
    int iterator;
       for(iterator=1;iterator<arrayofNumbers.size();iterator++)
       {
           if(arrayofNumbers[iterator]<min)
               min=arrayofNumbers[iterator];
       }
       return min;
       
   }
float Statistics::maxElement(const std::vector<float>& arrayofNumbers)
   {
       float max=arrayofNumbers[0];
    int iterator;
       for(iterator=1;iterator<arrayofNumbers.size();iterator++)
       {
           if(arrayofNumbers[iterator]>max)
               max=arrayofNumbers[iterator];
       }
       return max;
       
   }
 bool IsNaNPresent(const std::vector<float>& arrayofNumbers)
 {
      if(arrayofNumbers.size()==0)
        return true;
     else 
     {
         int iterator;
         for(iterator=0;iterator<arrayofNumbers.size();iterator++)
         {
             if(std::isnan(arrayofNumbers[iterator]))
                 return true;
         }
     }
     return false;
 }

