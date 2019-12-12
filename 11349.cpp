#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num = 0;
	char a;
	cin >> num;
	for (int j = 0; j < num; j++)
	{
		int n = 0;
		long long buffer = 0;
		vector<long long> data;
		bool judge = true;
		cin >> a >> a >> n;
		for (int i = 0; i < n * n; i++)
		{
			cin >> buffer;
			data.push_back(buffer);
		}

		for (int i = 0; i < n * n; i++)
		{
			if (i == n * n - 1 - i)
			{
				if (data[i] < 0)
				{
					judge = false;
				}
				break;
			}

			if (data[i] < 0 || data[n * n - 1 - i] < 0 || data[i] != data[n * n - 1 - i])
			{
				judge = false;
				break;
			}
		}

		if (judge)
		{
			cout << "Test #" << j + 1 << ": Symmetric." << endl;
		}
		else
			cout << "Test #" << j + 1 << ": Non-symmetric." << endl;
	}
	return 0;
}