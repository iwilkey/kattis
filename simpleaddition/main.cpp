#include <iostream> 
#include <vector>
#include <utility>
#include <string>
using namespace std;

class bigint {
	public:
		vector<int> digits;
		bigint(string numbers) {
			for(int i = 0; i < numbers.size(); i++)
				digits.push_back((int)(numbers[i] - '0'));
		}

		bigint(int places) {
			for(int i = 0; i < places; i++)
				digits.push_back(0);
		}

		// Truncate leading zeros.
		bigint truncate(bigint num) {
			for(int i = 0; i < num.digits.size(); i++) {
				if(num.digits[i] == 0) {
					num.digits.erase(num.digits.begin() + i);
					i--;
					continue;
				}
				break;
			}
			return num;
		}

		// Return a pair of bigints sorted by [largerOrder, smallerOrder].
		pair<bigint, bigint> compareOrder(bigint num1, bigint num2) {
			return ((num1.digits.size() > num2.digits.size()) ? 
				make_pair(num1, num2) : make_pair(num2, num1));
		}

		// Return a normalized pair of big ints still sorted [largest, smallest].
		pair<bigint, bigint> normalize(pair<bigint, bigint> sortedInts) {
			int upto = sortedInts.first.digits.size() - sortedInts.second.digits.size();
			for(int i = 0; i < upto; i++) 
				sortedInts.second.digits.insert(sortedInts.second.digits.begin(), 0);
			return make_pair(sortedInts.first, sortedInts.second);
		}

		void place(int num, int place) {
			digits[place] = num;
		}

		// Add two bigints together and return the sum as a bigint.
		bigint add(bigint num1, bigint num2) {
			pair<bigint, bigint> nums = normalize(compareOrder(truncate(num1), truncate(num2)));
			bigint result(nums.first.digits.size() + 1); // The result.

			bool carry = false;
			for(int i = nums.first.digits.size() - 1; i >= 0; i--) {
				int slot = nums.first.digits[i] + nums.second.digits[i];
				if(carry) slot++;
				carry = (slot >= 10);
				string res = std::to_string(slot);
				int sub = (int)(res[res.size() - 1] - '0');
				result.place(sub, i + 1);
			}

			if(carry) result.place(1, 0);
			result = truncate(result);
			return result;
		}

		// Show a bigint in the terminal
		void to_string() {
			for(int i = 0; i < digits.size(); i++) 
				cout << digits[i];
			cout << endl;
		}
};

int main() {
	string n1, n2;
	getline(cin, n1);
	getline(cin, n2);
	bigint num1(n1), num2(n2);
	num1.add(num1, num2).to_string();
	return 0;
}
