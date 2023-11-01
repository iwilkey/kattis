#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int time;
    string problem, result;
    map<string, int> wrong_attempts;
    map<string, int> correct_times;
    int total_problems_solved = 0;
    int total_time = 0;
    while (cin >> time && time != -1) {
        cin >> problem >> result;
        if (result == "right") {
            if (correct_times.find(problem) == correct_times.end()) {
                correct_times[problem] = time;
                total_problems_solved++;
            }
        } else {
            if (correct_times.find(problem) == correct_times.end())
                wrong_attempts[problem]++;
        }
    }
    for (const auto & entry : correct_times) {
        total_time += entry.second;
        if (wrong_attempts.find(entry.first) != wrong_attempts.end())
            total_time += wrong_attempts[entry.first] * 20;
    }
    cout << total_problems_solved << " " << total_time << endl;
    return 0;
}
