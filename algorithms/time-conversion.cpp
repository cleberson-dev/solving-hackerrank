// https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
 
 string convertHourFromPM(string hh) {
    if (hh != "12") return to_string(stoi(hh) + 12 % 24);
    return hh;
 }
  string convertHourFromAM(string hh) {
    if (hh == "12") return "00";
    return hh;
 }
 
string timeConversion(string s) {
    string hh = s.substr(0, 2);
    string unit = s.substr(s.size() - 2);
    
    if (unit == "PM") {
        hh = convertHourFromPM(hh);
    } else if (unit == "AM") {
        hh = convertHourFromAM(hh);
    }
    
    s.replace(0, 2, hh);
    s.erase(s.size() - 2);
    
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
