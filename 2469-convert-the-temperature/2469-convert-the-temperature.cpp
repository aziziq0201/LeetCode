class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double Fahrenheit = celsius*1.80 + 32.00;
        double Kelvin = celsius + 273.15;

        ans.push_back(Kelvin);
        ans.push_back(Fahrenheit);
        return ans;
    }
};