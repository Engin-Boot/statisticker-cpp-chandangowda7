#include "stats.h"
#include<cmath>
using namespace std;

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& arrayofNumbers) {
    //Implement statistics here
     Statistics::Stats stat{nanf(""),nanf(""),nanf("")};
    if((arrayofNumbers.size()>0) ){
   if(!IsNaNPresent(arrayofNumbers))
   {float sum=arrayofNumbers[0];//,maxi=a[0],mini=a[0];
   
    stat.average=average(arrayofNumbers);
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
float Statistics::average(const std::vector<float>& arrayofNumbers)
   {
       
    int iterator;int sum=0;
       for(iterator=0;iterator<arrayofNumbers.size();iterator++)
       {
           
               sum=sum+arrayofNumbers[iterator];
       }
       return sum/arrayofNumbers.size();
       
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

