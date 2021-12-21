#include <iostream>
#include <inttypes.h>
#include <vector>
#include <array>

int sum(std::array<int, 3> arr)
{
	int res = 0;
	for(size_t i = 0; i <3; i++)
		res += arr[i];
	
	return res;
}

void func()
{
	using namespace std;
	int n; cin >> n;
	
	vector<int> v;
	v.resize(n);

	for (size_t i = 0; i < n; i++)
	{

		cin >> v[i];
	}
	
	array<int, 3> min_trio = {1002, 1002, 1002};

	for (size_t i = 0; i < n - 2; i++)
	{
	    for (size_t j = i + 1; j < n -1; j++)
	    {
		for(size_t k = j + 1; k < n; k++)
		{
		    array<int, 3> trio = {v[i], v[j], v[k]};
		    if (sum(trio) < sum(min_trio) && sum(trio) % 4 == 0)
		    {
			min_trio = trio;
		    }
		}
	    }

	}
	for (size_t i = 0; i < 3; i++)
	{
		cout << min_trio[i] << " ";
	}
}

int main()
{
    func();
    return 0;
}
