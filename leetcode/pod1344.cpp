#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    double angleClock(int hours, int minutes){
        if(hours == 12){
            hours =0;
        }
        double minuteAngle = minutes * 6;
        double hourAngle = (hours * 30) + (minutes * 0.5);
        double angle = abs(hourAngle - minuteAngle);
        return min(angle, 360 - angle);
    }
};
int main(){
    int hours,minutes;
    cin>>hours>>minutes;
    Solution sol;
    cout<<sol.angleClock(hours,minutes);
}