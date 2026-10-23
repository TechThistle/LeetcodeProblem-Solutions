class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> result(2);
        double k=celsius+273.15;
        double f=(celsius*1.80)+32.00;
        result[0]=k;
        result[1]=f;
        return result;
        
    }
};