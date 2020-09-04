#include "stats.h"
#include<cmath>
using namespace std;

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& arrayofNumbers) {
    //Implement statistics here
     Statistics::Stats stat{nanf(""),nanf(""),nanf("")};
    if((arrayofNumbers.size()>0) ){
   if(!IsNaNPresent(arrayofNumbers))
   {float sum=arrayofNumbers[0];//,maxi=a[0],mini=a[0];
    int iterator;
    for(iterator=1;iterator<arrayofNumbers.size();iterator++)
    {
    sum=sum+arrayofNumbers[iterator];
     }
    stat.average=sum/arrayofNumbers.size();
    stat.max=maxElement(arrayofNumbers);
    stat.min=minElement(arrayofNumbers);
   }}
    return stat;
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
 bool Statistics::IsNaNPresent(const std::vector<float>& arrayofNumbers)
 {
   
         int iterator;
         for(iterator=0;iterator<arrayofNumbers.size();iterator++)
         {
             if(std::isnan(arrayofNumbers[iterator]))
                 return true;
         }
 
         return false;
 }

