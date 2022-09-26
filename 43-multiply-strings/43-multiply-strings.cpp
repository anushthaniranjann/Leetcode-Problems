class Solution {
public:
string multiply(string num1, string num2) {
if (num1 == "0" || num2 == "0") return "0";
int n = num1.size(), m = num2.size();
vector ans(n + m, 0);

	for (int i = n - 1; i >= 0; --i) {
		for (int j = m - 1; j >= 0; --j) {
			ans[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			ans[i + j] += ans[i + j + 1] / 10;
			ans[i + j + 1] %= 10;
		}
	}
	string res;
	int i = 0;
	while (i < ans.size() && ans[i] == 0) i++;
	while (i < ans.size()) res.push_back(ans[i++] + '0');
	return res;
}
};